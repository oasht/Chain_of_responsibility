#include <string>
#include <iomanip>
#include<Windows.h>
#pragma once
using namespace std;
class Claim
{

	int amountOfMoney;

public:

	Claim(int a = 0) :amountOfMoney(a)
	{
	}

	int GetAmount() const
	{
		return amountOfMoney;
	}
	void SetAmount(int a)
	{
		amountOfMoney = a;
	}

	~Claim()
	{
	}
};