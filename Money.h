#pragma once
#include "Claim.h"
class Money
{
protected:
	Money* pSuccessor= nullptr;
	
public:
	void SetSuccessor(Money* pTemp)
	{
		pSuccessor = pTemp;
	}

	virtual void Cash_out(Claim& request) = 0;
	virtual ~Money() {}
}; 
