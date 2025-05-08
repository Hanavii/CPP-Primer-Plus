#include <iostream>
#include <cmath>
int main()
{
	using namespace std;
	
	const double feet_to_inch = 12;
	const double inch_to_meter = 2.54e-2;
	const double pound_to_kilo = 1 / 2.2;
	
	cout << "Enter the feet inch and pound: ";
	int feet, inch, pound;
	cin >> feet >> inch >> pound;
	
	double meter, kilo;
	inch = inch + feet * feet_to_inch;
	meter = inch * inch_to_meter;
	kilo = pound * pound_to_kilo;
	
	double bmi = kilo / pow(meter, 2);
	cout << "Your BMI is " << bmi << " .\n";
	
	return 0;
}
