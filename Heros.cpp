// Heros.cpp: implementation of the Heros class.
//
//////////////////////////////////////////////////////////////////////

#include "stdafx.h"
#include "Heros.h"

//////////////////////////////////////////////////////////////////////
// Construction/Destruction
//////////////////////////////////////////////////////////////////////

Heros::Heros(int points_vie,char *name):Occupant(points_vie)
{
	nom_heros=name;
}

Heros::~Heros()
{

}

void Heros::combattre()
{
	Occupant::setPoints((Occupant::getpoints())-5);
}

char * Heros::getName() const
{
	return nom_heros;
}
