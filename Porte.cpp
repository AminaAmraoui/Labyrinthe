// Porte.cpp: implementation of the Porte class.
//
//////////////////////////////////////////////////////////////////////

#include "stdafx.h"
#include "Porte.h"

//////////////////////////////////////////////////////////////////////
// Construction/Destruction
//////////////////////////////////////////////////////////////////////

Porte::Porte()
{
	verouillage = true;
}

Porte::~Porte()
{

}

bool Porte::getVerouillage() const
{
	return verouillage;
	
}

void Porte::setVerouillage(bool ver)
{
	verouillage = ver;
}

Direction Porte::getDirection() const
{
	return dir;
}

void Porte::setDirection(Direction nouv_dir)
{
	dir=nouv_dir;
}
