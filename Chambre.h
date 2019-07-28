// Chambre.h: interface for the Chambre class.
//
//////////////////////////////////////////////////////////////////////

#if !defined(AFX_CHAMBRE_H__33310906_224B_4F5E_AB97_51D800A1D8D9__INCLUDED_)
#define AFX_CHAMBRE_H__33310906_224B_4F5E_AB97_51D800A1D8D9__INCLUDED_
#include "Porte.h"
#include <vector>

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
using namespace std;
class Chambre  
{
public:
	
	bool estVerouillee(Direction );
	int nbPorteverrouille();
	void modifierVerouillage(Direction ,bool );
	Chambre();
	virtual ~Chambre();

private:
	vector<Porte> collporte;
	

};

#endif // !defined(AFX_CHAMBRE_H__33310906_224B_4F5E_AB97_51D800A1D8D9__INCLUDED_)
