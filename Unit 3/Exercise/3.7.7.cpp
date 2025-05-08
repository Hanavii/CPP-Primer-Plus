#include <iostream>
int main()
{
	using namespace std;
	
	const double nkm_to_mile = 62.14;
	const double g_to_l = 3.875;
	
	double lp100k;
	cout << "Enter fuel consumption in liters per 100 km (L/100km): ";
	cin >> lp100k;
	
	double mpg =  nkm_to_mile * g_to_l / lp100k;
	cout << lp100k << " L/100km is equivalent to " << mpg << " mpg.\n";
	
	return 0;
}
