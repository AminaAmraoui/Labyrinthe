// MonstreFaible.cpp: implementation of the MonstreFaible class.
//
//////////////////////////////////////////////////////////////////////

#include "stdafx.h"
#include "MonstreFaible.h"
#include<iostream>
//////////////////////////////////////////////////////////////////////
// Construction/Destruction
//////////////////////////////////////////////////////////////////////

MonstreFaible::MonstreFaible():Monstre()
{

}

MonstreFaible::~MonstreFaible()
{

}

void MonstreFaible::combattre()
{
	Monstre::setPoints(0);
	cout<<"Un monstre faible a ete tue "<<endl;
}
