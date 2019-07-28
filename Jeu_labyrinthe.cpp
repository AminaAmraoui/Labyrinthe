// Jeu_labyrinthe.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "Labyrinthe.h"
#include <iostream>
#include <string.h>
void main()
{
	char name[20];
	char cmd[6];
	int score;
	char *q;
	q=name;

	cout<<"Donner le nom de votre heros : ";
	cin>>name;
	cout<<"Donner les points de vie initiales de "<<name<<" : ";
	cin>>score;
	
	Labyrinthe l(score,q);
	
	l.emplacement();
	
	while(!l.fin())
	{
		cout<<"> ";
		cin>>cmd;

	
		if(strcmp(cmd,"nord")==0)
		{
			l.deplacement(nord);
			l.emplacement();
		}
		else
		{
			if(strcmp(cmd,"sud")==0)
			{
				l.deplacement(sud);
				l.emplacement();
			}
			else
			{
				if(strcmp(cmd,"est")==0)
				{
					l.deplacement(est);
					l.emplacement();
				}
				else
				{
					if(strcmp(cmd,"ouest")==0)
					{
						l.deplacement(ouest);
						l.emplacement();
					}
					else
						cout<<"commande incorrecte"<<endl;
				}
			}
		}
	
	}

	if(l.gagner())
		cout<<endl<<"*****Felicitations! vous avez trouvez la sortie****"<<endl;
	else
	{
		if(l.dans_trappe())
			cout<<endl<<"****Vous etes coinces dans une trappe !!*****"<<endl;
		else
			cout<<endl<<"***Dommage ! vous avez perdu***"<<endl;
	}
		
}
