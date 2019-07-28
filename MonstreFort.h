// MonstreFort.h: interface for the MonstreFort class.
//
//////////////////////////////////////////////////////////////////////

#if !defined(AFX_MONSTREFORT_H__DDDD9CB4_9F52_46A2_B9F3_8BE8C077E4FE__INCLUDED_)
#define AFX_MONSTREFORT_H__DDDD9CB4_9F52_46A2_B9F3_8BE8C077E4FE__INCLUDED_
#include "Monstre.h"
#include "Occupant.h"
#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
//using namespace std;
class MonstreFort:public Monstre  
{
public:
	void combattre();
	MonstreFort();
	virtual ~MonstreFort();

};

#endif // !defined(AFX_MONSTREFORT_H__DDDD9CB4_9F52_46A2_B9F3_8BE8C077E4FE__INCLUDED_)
