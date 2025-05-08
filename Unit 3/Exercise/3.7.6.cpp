#include <iostream>
int main()
{
	using namespace std;
	
	double miles, gallons;
	cout << "Enter Miles: ";
	cin >> miles;
	cout << "Enter Gallons: ";
	cin >> gallons;
	
	cout << "The distance of per gallon is "
		 << miles / gallons
		 << " miles.";
		 
	
	return 0;
}
