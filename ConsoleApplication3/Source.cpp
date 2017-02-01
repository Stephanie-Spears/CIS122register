#include <iostream>
#include <time.h>


using namespace std;


int main()

{
	double dItemPrice;
	int iAge;
	int iItemNum;
	double dTotal = 0;

	cout << __DATE__ << "\n";

	cout << "Customer Age: ";
	cin >> iAge;
	cout << "Enter number of items: ";
	cin >> iItemNum;
	cout << "Enter Item Price: ";
	cin >> dItemPrice;




	{if (iAge > 65)
	{
		dItemPrice = dItemPrice - 1.00;
		cout << dItemPrice;
		dTotal = dTotal + dItemPrice;
	}

	while (iItemNum > 0)
	{
		iItemNum = iItemNum - 1;
		cout << "Enter Item Price: ";
		cin >> dItemPrice;
	}
	}

		
	
	cout << dItemPrice;
	dTotal = dTotal + dItemPrice;
	
	cout << dTotal;
	cout << "Thank you, loyal shopper!";

return 0;
}
