// Occupant.h: interface for the Occupant class.
//
//////////////////////////////////////////////////////////////////////

#if !defined(AFX_OCCUPANT_H__89AABB96_4913_4B21_B181_B31C2654BE80__INCLUDED_)
#define AFX_OCCUPANT_H__89AABB96_4913_4B21_B181_B31C2654BE80__INCLUDED_
#include "Chambre.h"
#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
//using namespace std;
class Occupant  
{
public:
	void setChCourante(Chambre * );
	Chambre * getChCourante() const;
	virtual void combattre()=0;
	void setPoints(int );
	int getpoints() const;
	Occupant(int);
	virtual ~Occupant();

private:
	Chambre * chcourante;
	int points;
};

#endif // !defined(AFX_OCCUPANT_H__89AABB96_4913_4B21_B181_B31C2654BE80__INCLUDED_)
