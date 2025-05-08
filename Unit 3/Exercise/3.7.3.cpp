#include <iostream>
int main()
{
	using namespace std;
	const double second_to_minute = 1.0 / 60.0;
	const double minute_to_degree = 1.0 / 60.0;
	double degree, minute, second;

	cout << "Enter a latitude in degrees, minutes, and seconds:\n";
	cout << "First, enter the degrees: __\b\b";
	cin >> degree;
	cout << "Next, enter the minutes of arc: __\b\b";
	cin >> minute;
	cout << "Finally, enter the seconds of arc: __\b\b";
	cin >> second;
	
	
	cout << degree << " degrees, "
		 << minute << " minutes, "
		 << second << " seconds = ";
	
	minute = minute + second * second_to_minute;
	degree = degree + minute * minute_to_degree;
	cout << degree;
	cout << " degrees\n";
	
	return 0;
}
