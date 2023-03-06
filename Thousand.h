#include <iostream>
#include "Money.h"
#pragma once

class Thousand : public Money
{
public:
	Thousand()
	{
	}

	~ Thousand()
	{
	}
public:

	void Cash_out(Claim& request)
	{
		if (request.GetAmount() > 1000)
		{
			int banknotes = request.GetAmount() / 1000;
			request = request.GetAmount() - (banknotes * 1000);
			cout << "You get " << banknotes << " one thousand banknotes" << endl;
			if (request.GetAmount() > 0)
				pSuccessor->Cash_out(request);
			else
				exit;
		}
		else
		{
			pSuccessor->Cash_out(request);
		}

	}
};
