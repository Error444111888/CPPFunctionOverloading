#include <iostream>

using namespace std;

//Setting different data dtypes to a single variable
void TestFOverload(int x)
{	//Giving a function for this data type
	cout << "Integer number for BTC Balance is " << x << endl;
}

void TestFOverload(double x)
{
	cout << "Double number for BTC to USD is " << x << endl;
}


int main()
{
	//Giving values for each data type
	int BTCBalance = 3;
	double BTC_USD = 4277.58;

	//Calling each data type
	TestFOverload(BTCBalance); //Because BTCBalance is int, it gets the int data type automatically
	TestFOverload(BTC_USD);  //Because BTC_USD is double, it gets the double data type automatically


	cin.get();
}