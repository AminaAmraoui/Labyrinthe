// Chambre.cpp: implementation of the Chambre class.
//
//////////////////////////////////////////////////////////////////////

#include "stdafx.h"
#include "Chambre.h"
#include<iostream>

//////////////////////////////////////////////////////////////////////
// Construction/Destruction
//////////////////////////////////////////////////////////////////////
using namespace std;
Chambre::Chambre()
{

	Porte  p1;
	p1.setVerouillage(true);
	p1.setDirection(ouest);
	collporte.push_back(p1);
	
	Porte  p2;
	p2.setVerouillage(true);
	p2.setDirection(nord);
	collporte.push_back(p2);

	Porte p3;
	p3.setVerouillage(true);
	p3.setDirection(est);
	collporte.push_back(p3);
	
	Porte  p4;
	p4.setVerouillage(true);
	p4.setDirection(sud);
	collporte.push_back(p4);
	
}

Chambre::~Chambre()
{

}

void Chambre::modifierVerouillage(Direction d, bool verr)
{
	

	vector<Porte >::iterator it;
	
	for(it=collporte.begin();it!=collporte.end();it++)
	{
		if(it->getDirection()==d)
			it->setVerouillage(verr);
	}
	
}

int Chambre::nbPorteverrouille()
{
	
	vector<Porte>::iterator k;
	
	int cpt=0;
	
	for (int i=0;i<collporte.size();++i)
	
	{
		if(k->getVerouillage())
			cpt++;
		k++;
	}
	
	return cpt;

}



bool Chambre::estVerouillee(Direction d)
{
	
	vector<Porte >::iterator it;
	
	for(it=collporte.begin();it!=collporte.end();it++)
		
		if(it->getDirection()==d)
			return it->getVerouillage();
	
	
}


