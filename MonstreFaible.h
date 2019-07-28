// MonstreFaible.h: interface for the MonstreFaible class.
//
//////////////////////////////////////////////////////////////////////

#if !defined(AFX_MONSTREFAIBLE_H__3587CD4A_7381_4FA5_A153_0FA0678778FE__INCLUDED_)
#define AFX_MONSTREFAIBLE_H__3587CD4A_7381_4FA5_A153_0FA0678778FE__INCLUDED_
#include "Monstre.h"
#include "Occupant.h"
#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
//using namespace std;
class MonstreFaible :public Monstre
{
public:
	void combattre();
	MonstreFaible();
	virtual ~MonstreFaible();

};

#endif // !defined(AFX_MONSTREFAIBLE_H__3587CD4A_7381_4FA5_A153_0FA0678778FE__INCLUDED_)
