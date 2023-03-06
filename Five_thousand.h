#include <iostream>
#include "Money.h"
#pragma once
class Five_thousand :public Money
{
public:

	Five_thousand()
	{
	}

	~Five_thousand()
	{
	}

	void Cash_out(Claim& request)
	{
		if (request.GetAmount()%100==0)
		{

			if (request.GetAmount() > 5000)
			{
				int banknotes = request.GetAmount() / 5000;
				cout << "You get " << banknotes << " five thousand banknotes" << endl;
				request = request.GetAmount() - (banknotes * 5000);
				//request.SetAmount(request.GetAmount() - (banknotes * 5000));
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

		else
		{
			cout << "ATM is not able to process your claim" << endl;
		}

			
	}
};
