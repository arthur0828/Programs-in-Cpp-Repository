




#include <iostream>

using namespace std;

int main()
{
	int num1, num2;

	cout << "Please Enter the first number: ";
	cin >> num1;
	cout << "Please enter the second number: ";
	cin >> num2;


	if (num1 >= num2)
	{

		if (num1 > num2)
		{

			cout << "The first number " << num1 << " is the larger number " << "and the second number " << num2 << " is the smaller number" << endl;
		}

		else
		{

			cout << "The numbers are the same: " << num1 << " is equal to " << num2;
		}

	}


	
	else
	{
		cout << "The first number " << num1 << " is the smaller number  " << "and the second number " << num2 << " is the larger number" ;
	}



	return 0; 

}