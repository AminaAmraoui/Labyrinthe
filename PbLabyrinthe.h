// PbLabyrinthe.h: interface for the PbLabyrinthe class.
//
//////////////////////////////////////////////////////////////////////

#if !defined(AFX_PBLABYRINTHE_H__7ACF9BDE_4D5E_487D_9213_8C2D9C9DF288__INCLUDED_)
#define AFX_PBLABYRINTHE_H__7ACF9BDE_4D5E_487D_9213_8C2D9C9DF288__INCLUDED_
#include "MonstreFort.h"
#include "Porte.h"
#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

class PbLabyrinthe  
{
public:
	void corrigerheros();
	void corriger();
	PbLabyrinthe();
	virtual ~PbLabyrinthe();

};

#endif // !defined(AFX_PBLABYRINTHE_H__7ACF9BDE_4D5E_487D_9213_8C2D9C9DF288__INCLUDED_)
