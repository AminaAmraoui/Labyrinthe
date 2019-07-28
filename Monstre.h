// Monstre.h: interface for the Monstre class.
//
//////////////////////////////////////////////////////////////////////

#if !defined(AFX_MONSTRE_H__0B79DC4E_D6C9_46A1_A78A_B4EB6318E6B2__INCLUDED_)
#define AFX_MONSTRE_H__0B79DC4E_D6C9_46A1_A78A_B4EB6318E6B2__INCLUDED_
#include "Occupant.h"
#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
//using namespace std;
class Monstre :public Occupant 
{
public:
	Monstre();
	virtual ~Monstre();

};

#endif // !defined(AFX_MONSTRE_H__0B79DC4E_D6C9_46A1_A78A_B4EB6318E6B2__INCLUDED_)
