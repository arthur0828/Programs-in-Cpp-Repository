//Arturo Bohuchot
//Programming Fundamentals I
//July 22nd, 2020
//This program will calculate the purchase amount of exactly 1000 shares. All other variables are user defined so they can input data to calculate % commission and their total profit.

#include <iostream>;
#include <iomanip>;
using namespace std;

int main()

{
	cout << "\n------------------------------------------\n";
	cout << "     Stock Transaction Program\n";
	cout << "\n------------------------------------------\n";


	//This section begins with the purchase of 1000 shares and calculates the total purchase amount of each share.

	int NUM_OF_SHARES = 1000;
	cout << "Total Number of Shares Purchased = " << NUM_OF_SHARES << endl;

	double PRICE_PAID_PER_SHARE;
	cout << "Enter Purchase Price of each Share = ";
	cin >> PRICE_PAID_PER_SHARE;

	double PURCHASE_PRICE = (PRICE_PAID_PER_SHARE * NUM_OF_SHARES);
	cout << "Total Purchase Amount of Shares = " << PURCHASE_PRICE << endl;
	
	
	cout << "\n------------------------------------------\n";

	
	//This section calculates the 1st paid commission and defines variables

	double PURCHASE_COMMISSION_1;
	cout << "Enter total Commission % in a Decimal = ";
	cin >> PURCHASE_COMMISSION_1;

	cout << "Total 1st Commission of Purchase = " << (PURCHASE_COMMISSION_1 * PURCHASE_PRICE) << endl;
	double FIRST_C_AMOUNT = PURCHASE_COMMISSION_1 * PURCHASE_PRICE;
	
	
	cout << "\n------------------------------------------\n";


	//This section calculates the total amount of shares sold based on each share price.
	
	double SHARES_SOLD;
	cout << "Enter Number of Shares Sold = "; 
	cin >> SHARES_SOLD; 

	double PER_STOCK_PRICE;
	cout << "Enter the Price Each Stock was Sold for = "; 
	cin >> PER_STOCK_PRICE; 
	cout << "Total Amount the Stocks were Sold for = " << (SHARES_SOLD * PER_STOCK_PRICE) << endl; 

	
	cout << "\n------------------------------------------\n";


	//This section calculates the 2nd commission after the shares are sold and defines variables

	double SOLD_STOCKS = (SHARES_SOLD * PER_STOCK_PRICE); 
	double PURCHASE_COMMISSION_2;
	cout << "Enter total Commission % in a Decimal = ";
	cin >> PURCHASE_COMMISSION_2;

	cout << "Total 2nd Commission from the Stocks Sold = " << (SOLD_STOCKS * PURCHASE_COMMISSION_2) << endl;
	double SECOND_C_AMOUNT = SOLD_STOCKS * PURCHASE_COMMISSION_2;


	cout << "\n------------------------------------------\n";

	
	//This section calculates the total commission paid and the total profit gained based on the defined variables.

	double TOTAL_COMMISSION = FIRST_C_AMOUNT + SECOND_C_AMOUNT;
	cout << "Total Paid Commission = " << TOTAL_COMMISSION << endl;

	double PROFIT = SOLD_STOCKS - PURCHASE_PRICE;
	double TOTAL_PROFIT = PROFIT - TOTAL_COMMISSION;
	cout << "Total Profit = " << TOTAL_PROFIT << endl; 


	
	system("pause");

	return 0;



	


}
