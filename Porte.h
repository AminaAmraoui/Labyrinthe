// Porte.h: interface for the Porte class.
//
//////////////////////////////////////////////////////////////////////

#if !defined(AFX_PORTE_H__3AB37A4A_EFF9_401E_AFDA_A2C9E5C8ADB4__INCLUDED_)
#define AFX_PORTE_H__3AB37A4A_EFF9_401E_AFDA_A2C9E5C8ADB4__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
enum Direction {ouest,nord,est,sud,nord_est,nord_ouest,sud_est,sud_ouest,error};
class Porte  
{
public:
	void setDirection(Direction );
	Direction getDirection() const;
	void setVerouillage(bool );
	bool getVerouillage() const;
	Porte();
	virtual ~Porte();

private:
	Direction dir;
	bool verouillage;
};

#endif // !defined(AFX_PORTE_H__3AB37A4A_EFF9_401E_AFDA_A2C9E5C8ADB4__INCLUDED_)
