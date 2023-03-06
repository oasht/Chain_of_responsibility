#include <iostream>
#include "Money.h"
#include "Five_thousand.h"
#include "Thousand.h"
#include "Hundred.h"
using namespace std;
void main()
{

	Money* five = new Five_thousand();
	Money* one = new Thousand();
	Money* hundred = new Hundred();
	five->SetSuccessor(one);
	one->SetSuccessor(hundred);
	int cash;


	do
	{
		cout << "Enter the amount of cash you  would like to withdraw (available banknotes: 100, 1000, 5000)" << endl;
		cin >> cash;
		system("cls");
		Claim claim(cash);
		five->Cash_out(claim);
	} while (cash % 100);

	delete five;
	delete one;
	delete hundred;

}