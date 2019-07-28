// MonstreFort.cpp: implementation of the MonstreFort class.
//
//////////////////////////////////////////////////////////////////////

#include "stdafx.h"
#include "MonstreFort.h"
#include<iostream>
//////////////////////////////////////////////////////////////////////
// Construction/Destruction
//////////////////////////////////////////////////////////////////////

MonstreFort::MonstreFort():Monstre()
{

}

MonstreFort::~MonstreFort()
{

}

void MonstreFort::combattre()
{
	Monstre::setPoints(Monstre::getpoints()-1);
		if(Monstre::getpoints()==0)
		cout<<"Un monstre fort a ete tue"<<endl;
}
