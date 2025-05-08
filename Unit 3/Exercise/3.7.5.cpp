#include <iostream>
int main()
{
	using namespace std;
	
	double w_population;
	double u_population;
	cout << "Enter the world's population: ";
	cin >> w_population;
	cout << "Enter the population of the US: ";
	cin >> u_population;
	
	cout << "The population of the US is " 
		 << u_population / w_population * 100
		 << "% of the world population.\n";
	
	return 0;
}
