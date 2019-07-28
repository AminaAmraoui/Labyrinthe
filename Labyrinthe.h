// Labyrinthe.h: interface for the Labyrinthe class.
//
//////////////////////////////////////////////////////////////////////

#if !defined(AFX_LABYRINTHE_H__A4FC9E2D_4E69_4A00_8D60_7EE8C93EC816__INCLUDED_)
#define AFX_LABYRINTHE_H__A4FC9E2D_4E69_4A00_8D60_7EE8C93EC816__INCLUDED_
#include "Chambre.h"
#include "Heros.h"
#include "MonstreFort.h"
#include "MonstreFaible.h"
#include <map>
#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
using namespace std;

class Labyrinthe  
{
public:
	void deplacer_MF(MonstreFort *mf );	
	void deplacement(Direction d);
	bool fin();
	bool dans_trappe();
	bool gagner();
	void emplacement();
	Labyrinthe(int,char *);
	virtual ~Labyrinthe();

private:
	MonstreFort * F2;
	MonstreFaible * f1;
	MonstreFort * F1;
	Chambre * tabc[21];
	Heros heros;	
	multimap<Direction ,Chambre *> lab;
	map<Direction,Chambre *> m[22];
};

#endif // !defined(AFX_LABYRINTHE_H__A4FC9E2D_4E69_4A00_8D60_7EE8C93EC816__INCLUDED_)
