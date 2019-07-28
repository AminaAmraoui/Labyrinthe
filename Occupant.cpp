// Occupant.cpp: implementation of the Occupant class.
//
//////////////////////////////////////////////////////////////////////

#include "stdafx.h"
#include "Occupant.h"

//////////////////////////////////////////////////////////////////////
// Construction/Destruction
//////////////////////////////////////////////////////////////////////

Occupant::Occupant(int score)
{
	points=score;
	chcourante=new Chambre();
	
}

Occupant::~Occupant()
{
	
}

int Occupant::getpoints() const
{
	return points;
}

void Occupant::setPoints(int nouv_points)
{
	points=nouv_points;
}

void Occupant::combattre()
{

}

Chambre * Occupant::getChCourante() const
{
	return chcourante;
}

void Occupant::setChCourante(Chambre * nou_ch)
{
	chcourante=nou_ch;
}
