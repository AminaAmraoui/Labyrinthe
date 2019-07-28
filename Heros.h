// Heros.h: interface for the Heros class.
//
//////////////////////////////////////////////////////////////////////

#if !defined(AFX_HEROS_H__5998C91D_7291_4B1D_8E2C_31863338FE76__INCLUDED_)
#define AFX_HEROS_H__5998C91D_7291_4B1D_8E2C_31863338FE76__INCLUDED_
#include "Occupant.h"
#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
//using namespace std;
class Heros :public Occupant 
{
public:
	char * getName()const;
	void combattre();
	Heros(int,char *);
	virtual ~Heros();

private:
	char * nom_heros;
};

#endif // !defined(AFX_HEROS_H__5998C91D_7291_4B1D_8E2C_31863338FE76__INCLUDED_)
