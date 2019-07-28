// Labyrinthe.cpp: implementation of the Labyrinthe class.
//
//////////////////////////////////////////////////////////////////////

#include "stdafx.h"
#include "Labyrinthe.h"
#include "Chambre.h"
#include "PbLabyrinthe.h"
#include<iostream>
//////////////////////////////////////////////////////////////////////
// Construction/Destruction
//////////////////////////////////////////////////////////////////////
using namespace std;
Labyrinthe::Labyrinthe(int points_vie,char *nom):heros(points_vie,nom)
{
	for(int i=0;i<22;i++)
		tabc[i]=new Chambre();
	

	tabc[0]->modifierVerouillage(est,false);
	tabc[0]->modifierVerouillage(sud,false);
	lab.insert(multimap<Direction,Chambre *>::value_type(sud_est,tabc[0]));
	
	tabc[1]->modifierVerouillage(nord,false);
	tabc[1]->modifierVerouillage(sud,false);
	tabc[1]->modifierVerouillage(est,false);
	lab.insert(multimap<Direction,Chambre *>::value_type(est,tabc[1]));
	

	tabc[2]->modifierVerouillage(nord,false);
	tabc[2]->modifierVerouillage(est,false);
	F1=new MonstreFort();
	F1->setChCourante(tabc[2]);
	lab.insert(multimap<Direction,Chambre *>::value_type(nord_est,tabc[2]));

	
	tabc[3]->modifierVerouillage(ouest,false);
	tabc[3]->modifierVerouillage(sud,false);
	tabc[3]->modifierVerouillage(est,false);
	lab.insert(multimap<Direction,Chambre *>::value_type(sud_est,tabc[3]));
	/*trappe*/
	
	tabc[4]->modifierVerouillage(est,false);
	
	lab.insert(multimap<Direction,Chambre *>::value_type(est,tabc[4]));

	
	tabc[7]->modifierVerouillage(ouest,false);
	
	lab.insert(multimap<Direction,Chambre *>::value_type(est,tabc[7]));
	/*trappe*/
	tabc[5]->modifierVerouillage(ouest,false);
	tabc[5]->modifierVerouillage(nord,false);
	tabc[5]->modifierVerouillage(est,false);
	lab.insert(multimap<Direction,Chambre *>::value_type(nord_est,tabc[5]));

	tabc[8]->modifierVerouillage(ouest,false);
	tabc[8]->modifierVerouillage(nord,false);
	tabc[8]->modifierVerouillage(est,false);
	lab.insert(multimap<Direction,Chambre *>::value_type(nord_est,tabc[8]));

	tabc[6]->modifierVerouillage(ouest,false);
	tabc[6]->modifierVerouillage(sud,false);
	tabc[6]->modifierVerouillage(est,false);
	lab.insert(multimap<Direction,Chambre *>::value_type(sud_est,tabc[6]));

	tabc[9]->modifierVerouillage(ouest,false);
	tabc[9]->modifierVerouillage(est,false);
	lab.insert(multimap<Direction,Chambre *>::value_type(sud_est,tabc[9]));

	tabc[10]->modifierVerouillage(est,false);
	tabc[10]->modifierVerouillage(ouest,false);
	tabc[10]->modifierVerouillage(sud,false);
	lab.insert(multimap<Direction,Chambre *>::value_type(est,tabc[10]));


	tabc[11]->modifierVerouillage(nord,false);
	tabc[11]->modifierVerouillage(ouest,false);
	tabc[11]->modifierVerouillage(est,false);
	lab.insert(multimap<Direction,Chambre *>::value_type(nord_est,tabc[11]));

	tabc[12]->modifierVerouillage(ouest,false);
	tabc[12]->modifierVerouillage(est,false);
	f1=new MonstreFaible();
	f1->setChCourante(tabc[12]);
	lab.insert(multimap<Direction,Chambre *>::value_type(sud_est,tabc[12]));

	tabc[13]->modifierVerouillage(ouest,false);
	tabc[13]->modifierVerouillage(sud,false);
	lab.insert(multimap<Direction,Chambre *>::value_type(est,tabc[13]));

	tabc[14]->modifierVerouillage(nord,false);
	tabc[14]->modifierVerouillage(ouest,false);
	lab.insert(multimap<Direction,Chambre *>::value_type(nord_est,tabc[14]));

	tabc[15]->modifierVerouillage(ouest,false);
	tabc[15]->modifierVerouillage(sud,false);
	lab.insert(multimap<Direction,Chambre *>::value_type(sud_est,tabc[15]));
	
	tabc[16]->modifierVerouillage(nord,false);
	tabc[16]->modifierVerouillage(est,false);
	tabc[16]->modifierVerouillage(sud,false);
	lab.insert(multimap<Direction,Chambre *>::value_type(est,tabc[16]));

	tabc[17]->modifierVerouillage(nord,false);
	tabc[17]->modifierVerouillage(est,false);
	lab.insert(multimap<Direction,Chambre *>::value_type(nord_est,tabc[17]));

	tabc[18]->modifierVerouillage(est,false);
	tabc[18]->modifierVerouillage(sud,false);
	tabc[18]->modifierVerouillage(ouest,false);
	F2=new MonstreFort();
	F2->setChCourante(tabc[18]);
	lab.insert(multimap<Direction,Chambre *>::value_type(est,tabc[18]));

	tabc[19]->modifierVerouillage(nord,false);
	tabc[19]->modifierVerouillage(est,false);
	tabc[19]->modifierVerouillage(ouest,false);
	lab.insert(multimap<Direction,Chambre *>::value_type(nord_est,tabc[19]));

	tabc[21]->modifierVerouillage(nord,false);
	tabc[21]->modifierVerouillage(ouest,false);
	lab.insert(multimap<Direction,Chambre *>::value_type(nord,tabc[21]));

	tabc[20]->modifierVerouillage(ouest,false);
	tabc[20]->modifierVerouillage(sud,false);
	lab.insert(multimap<Direction,Chambre *>::value_type(error,tabc[20]));
	
	//tisser les liens entre les chambres

	m[0].insert(map<Direction,Chambre *>::value_type(nord,NULL));
	m[0].insert(map<Direction,Chambre *>::value_type(ouest,NULL));
	m[0].insert(map<Direction,Chambre *>::value_type(sud,tabc[1]));
	m[0].insert(map<Direction,Chambre *>::value_type(est,tabc[3]));

	m[1].insert(map<Direction,Chambre *>::value_type(nord,tabc[0]));
	m[1].insert(map<Direction,Chambre *>::value_type(ouest,NULL));
	m[1].insert(map<Direction,Chambre *>::value_type(est,tabc[4]));
	m[1].insert(map<Direction,Chambre *>::value_type(sud,tabc[2]));


	m[2].insert(map<Direction,Chambre *>::value_type(nord,tabc[1]));
	m[2].insert(map<Direction,Chambre *>::value_type(ouest,NULL));
	m[2].insert(map<Direction,Chambre *>::value_type(est,tabc[5]));
	m[2].insert(map<Direction,Chambre *>::value_type(sud,NULL));

	m[3].insert(map<Direction,Chambre *>::value_type(nord,NULL));
	m[3].insert(map<Direction,Chambre *>::value_type(ouest,tabc[0]));
	m[3].insert(map<Direction,Chambre *>::value_type(est,tabc[6]));
	m[3].insert(map<Direction,Chambre *>::value_type(sud,tabc[7]));

	m[4].insert(map<Direction,Chambre *>::value_type(nord,tabc[3]));
	m[4].insert(map<Direction,Chambre *>::value_type(ouest,tabc[1]));
	m[4].insert(map<Direction,Chambre *>::value_type(est,tabc[7]));
	m[4].insert(map<Direction,Chambre *>::value_type(sud,tabc[5]));


	m[5].insert(map<Direction,Chambre *>::value_type(nord,tabc[4]));
	m[5].insert(map<Direction,Chambre *>::value_type(ouest,tabc[2]));
	m[5].insert(map<Direction,Chambre *>::value_type(est,tabc[8]));
	m[5].insert(map<Direction,Chambre *>::value_type(sud,NULL));

	m[6].insert(map<Direction,Chambre *>::value_type(nord,NULL));
	m[6].insert(map<Direction,Chambre *>::value_type(ouest,tabc[3]));
	m[6].insert(map<Direction,Chambre *>::value_type(est,tabc[9]));
	m[6].insert(map<Direction,Chambre *>::value_type(sud,tabc[7]));

	m[7].insert(map<Direction,Chambre *>::value_type(nord,tabc[6]));
	m[7].insert(map<Direction,Chambre *>::value_type(ouest,tabc[4]));
	m[7].insert(map<Direction,Chambre *>::value_type(est,tabc[10]));
	m[7].insert(map<Direction,Chambre *>::value_type(sud,tabc[8]));

	m[8].insert(map<Direction,Chambre *>::value_type(nord,tabc[7]));
	m[8].insert(map<Direction,Chambre *>::value_type(ouest,tabc[5]));
	m[8].insert(map<Direction,Chambre *>::value_type(est,tabc[11]));
	m[8].insert(map<Direction,Chambre *>::value_type(sud,NULL));

	m[9].insert(map<Direction,Chambre *>::value_type(nord,NULL));
	m[9].insert(map<Direction,Chambre *>::value_type(ouest,tabc[6]));
	m[9].insert(map<Direction,Chambre *>::value_type(est,tabc[12]));
	m[9].insert(map<Direction,Chambre *>::value_type(sud,tabc[10]));

	m[10].insert(map<Direction,Chambre *>::value_type(nord,tabc[9]));
	m[10].insert(map<Direction,Chambre *>::value_type(ouest,tabc[7]));
	m[10].insert(map<Direction,Chambre *>::value_type(est,tabc[13]));
	m[10].insert(map<Direction,Chambre *>::value_type(sud,tabc[11]));

	m[11].insert(map<Direction,Chambre *>::value_type(nord,tabc[10]));
	m[11].insert(map<Direction,Chambre *>::value_type(ouest,tabc[8]));
	m[11].insert(map<Direction,Chambre *>::value_type(est,tabc[14]));
	m[11].insert(map<Direction,Chambre *>::value_type(sud,NULL));

	m[12].insert(map<Direction,Chambre *>::value_type(nord,NULL));
	m[12].insert(map<Direction,Chambre *>::value_type(ouest,tabc[9]));
	m[12].insert(map<Direction,Chambre *>::value_type(est,tabc[15]));
	m[12].insert(map<Direction,Chambre *>::value_type(sud,tabc[13]));

	m[13].insert(map<Direction,Chambre *>::value_type(nord,tabc[12]));
	m[13].insert(map<Direction,Chambre *>::value_type(ouest,tabc[10]));
	m[13].insert(map<Direction,Chambre *>::value_type(est,tabc[16]));
	m[13].insert(map<Direction,Chambre *>::value_type(sud,tabc[14]));

	m[14].insert(map<Direction,Chambre *>::value_type(nord,tabc[13]));
	m[14].insert(map<Direction,Chambre *>::value_type(ouest,tabc[11]));
	m[14].insert(map<Direction,Chambre *>::value_type(est,tabc[17]));
	m[14].insert(map<Direction,Chambre *>::value_type(sud,NULL));

	m[15].insert(map<Direction,Chambre *>::value_type(nord,NULL));
	m[15].insert(map<Direction,Chambre *>::value_type(ouest,tabc[12]));
	m[15].insert(map<Direction,Chambre *>::value_type(est,NULL));
	m[15].insert(map<Direction,Chambre *>::value_type(sud,tabc[16]));

	m[16].insert(map<Direction,Chambre *>::value_type(nord,tabc[15]));
	m[16].insert(map<Direction,Chambre *>::value_type(ouest,tabc[13]));
	m[16].insert(map<Direction,Chambre *>::value_type(est,tabc[18]));
	m[16].insert(map<Direction,Chambre *>::value_type(sud,tabc[17]));

	m[17].insert(map<Direction,Chambre *>::value_type(nord,tabc[16]));
	m[17].insert(map<Direction,Chambre *>::value_type(ouest,tabc[14]));
	m[17].insert(map<Direction,Chambre *>::value_type(est,tabc[19]));
	m[17].insert(map<Direction,Chambre *>::value_type(sud,NULL));

	m[18].insert(map<Direction,Chambre *>::value_type(nord,NULL));
	m[18].insert(map<Direction,Chambre *>::value_type(ouest,tabc[16]));
	m[18].insert(map<Direction,Chambre *>::value_type(est,tabc[20]));
	m[18].insert(map<Direction,Chambre *>::value_type(sud,tabc[19]));

	m[19].insert(map<Direction,Chambre *>::value_type(nord,tabc[18]));
	m[19].insert(map<Direction,Chambre *>::value_type(ouest,tabc[17]));
	m[19].insert(map<Direction,Chambre *>::value_type(est,tabc[21]));
	m[19].insert(map<Direction,Chambre *>::value_type(sud,NULL));

	m[20].insert(map<Direction,Chambre *>::value_type(nord,NULL));
	m[20].insert(map<Direction,Chambre *>::value_type(ouest,tabc[18]));
	m[20].insert(map<Direction,Chambre *>::value_type(est,NULL));
	m[20].insert(map<Direction,Chambre *>::value_type(sud,tabc[21]));

	m[21].insert(map<Direction,Chambre *>::value_type(nord,tabc[20]));
	m[21].insert(map<Direction,Chambre *>::value_type(ouest,tabc[19]));
	m[21].insert(map<Direction,Chambre *>::value_type(est,NULL));
	m[21].insert(map<Direction,Chambre *>::value_type(sud,NULL));

	heros.setChCourante(tabc[1]);
	

}

Labyrinthe::~Labyrinthe()
{
	
}

void Labyrinthe::emplacement()
{
	multimap<Direction,Chambre *>::iterator it;
	cout<<heros.getName()<<" < "<<heros.getpoints()<<" > ";
		for(it=lab.begin();it!=lab.end();it++)
			if(it->second==heros.getChCourante())
			{
				if(it->first == 0)
				cout<<" La sortie se trouve du cote ouest"<<endl;
				else
				{
					if(it->first == 1)
						cout<<" La sortie se trouve du cote nord"<<endl;
					else
					{
						if(it->first == 2)
						cout<<" La sortie se trouve du cote est"<<endl;
						else
						{
							if(it->first == 3)
							cout<<" La sortie se trouve du cote sud"<<endl;
						else
						{
							if(it->first == 4)
							cout<<" La sortie se trouve du cote nord est"<<endl;
							else
							{
								if(it->first == 5)
								cout<<" La sortie se trouve du cote nord ouest"<<endl;
								else
								{
									if(it->first == 6)
										cout<<" La sortie se trouve du cote sud est"<<endl;
									else
									{
										if(it->first == 7)
											cout<<" La sortie se trouve du cote sud ouest"<<endl;
											else
												if(it->first == 8)
													cout<<"ch sortie"<<endl;
									}
								}
							}
						}
						}
					}
				}

						

			}
}

bool Labyrinthe::gagner()
{
	if(heros.getChCourante() == tabc[20])
		return true;
	else
		return false;
}

bool Labyrinthe::dans_trappe()
{
	if((heros.getChCourante()==tabc[4])||(heros.getChCourante()==tabc[7]))
		
		return true;
	else
		return false;
}

bool Labyrinthe::fin()
{
	
	if(dans_trappe())
		return true;
	else
	{
		if(gagner())
			return true;
		else
		{
			if(heros.getpoints()<=0)
				return true;
			else
				return false;
		}
	}
}

void Labyrinthe::deplacement(Direction d)
{
	
	if(heros.getChCourante()->estVerouillee(d))
		cout<<"- Erreur de deplacement : porte verouillee "<<endl;
	else
	{
		for(int j=0;j<22;j++)
		{
			if(heros.getChCourante()==tabc[j])
			{
				map<Direction,Chambre *>::iterator it;
				try{
					it=m[j].find(d);}
				catch(PbLabyrinthe p){p.corrigerheros();}
				if(it!=m[j].end()){
				heros.setChCourante(it->second);
				//cout<<"heros etait dans "<<j<<endl;
					
					if(heros.getChCourante()==F1->getChCourante())
					{
					
						heros.setPoints(heros.getpoints()-5);
						F1->combattre();
						
						try{
							deplacer_MF(F1);}
						catch(PbLabyrinthe pb){
							pb.corriger();}
					}
					if(heros.getChCourante()==f1->getChCourante())
					{f1->combattre();
					cout<<"combat"<<endl;
					heros.setPoints(heros.getpoints()-5);
					delete f1;
					}
					if(heros.getChCourante()==F2->getChCourante())
					{	heros.setPoints(heros.getpoints()-5);
					
					F2->combattre();deplacer_MF(F2);}}
				else
					cout<<"Chambre introuvable"<<endl;
				break;
				
			}
		}
		
	}
}





void Labyrinthe::deplacer_MF(MonstreFort *mf)
{
	int test=0;
	if(mf->getpoints()==0)
		delete mf;
	else{
	for(int k=0;k<22;k++)
		if(mf->getChCourante()==tabc[k])
		{	test=1;
			map<Direction,Chambre *>::iterator x;
			x=m[k].find(est);
			if(x->second != NULL)
			{mf->setChCourante(x->second);cout<<"monstre deplace est"<<endl;}
			else
			{x=m[k].find(sud);
			if(x->second != NULL)
			{mf->setChCourante(x->second);cout<<"monstre deplace sud"<<endl;}
			else
				{x=m[k].find(ouest);
				if(x->second != NULL)
				{mf->setChCourante(x->second);cout<<"monstre deplace ouest"<<endl;}
				else
					{x=m[k].find(nord);
					if(x->second != NULL)
					{mf->setChCourante(x->second);cout<<"monstre deplace nord"<<endl;}
				}
			}
			

			}
			break;
	}}
if(test=0) throw PbLabyrinthe();
}

