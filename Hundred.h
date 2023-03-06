#include <iostream>
#include "Money.h"
#pragma once
class Hundred : public Money
{
public:
	Hundred()
	{
	}

	~Hundred()
	{
	}
public:

	void Cash_out(Claim& request)
	{
		
			int banknotes = request.GetAmount() / 100;
			cout << "You get " << banknotes << " hundred banknotes" << endl;
			cout << "Good bye!" << endl;
			

	}
};
