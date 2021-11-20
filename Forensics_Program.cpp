#include <iostream>
#include <iomanip>
#include <cmath>



using namespace std; 

double getHairType(double, double); 
double getHeight(double, double); 


int main() //This section calls the functions to calculate 

{
	cout << "Welcome Inspector" << endl;

	double medullaLength{}, entireLength{};  //inputs
	double ratio; //output



	double gender{}, femurLength{}; //inpts 
	double height{}; //outputs



	ratio = getHairType(entireLength, medullaLength); //these are the two functions that are being called upon 
	height = getHeight(gender, femurLength); 
	

	return 0; 

}


double getHairType(double medullaLength, double entireLength) //first function that calculates the ratio and determines if it is an animal or human hair. 
{
	double ratio; 

	

	cout << "======================== Hair Type ==============================" << endl; 

	cout << "Please enter medulla lenght in mm: "; 
	cin >> medullaLength; 
	
	cout << "Please enter the entire hair width in mm: "; 
	cin >> entireLength; 

	ratio = medullaLength / entireLength;


	if (ratio >= .5) //this decides whether it is a animal or human hair based on the ratio
	{
		cout << "The sample provided is from an animal " << endl;
	}

	else

	{
		cout << "The sample provided is from a human hair " << endl;
	}

	
	return ratio; 

}

double getHeight(double femurLength, double gender) //second fuction calculates the estimated height 
{


	cout << "======================== Height Analysis ==============================" << endl;

	double height; 

	cout << "Please enter the gender (0 for male, 1 for female): "; 
	cin >> gender; 

	cout << "Please enter the femur length in cm: "; 
	cin >> femurLength; 

	if (gender == 0) //calculates the heighht based if the person is a male or femaale

	{
		height = 69.089 + 2.238 * femurLength; 
	}

	else
	{

		height = 61.412 + 2.317 * femurLength; 
	}

	cout << "The height is estimated to be " << height << " cm " << endl; 

	return height; 
}