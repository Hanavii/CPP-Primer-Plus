#include <iostream>
int main()
{
	using namespace std;
	const int inchtofeet = 12;
	cout << "Enter the inch:___\b\b\b";
	
	int inch;
	cin >> inch;
	
	cout << "Your height is " << inch / inchtofeet
		 << " feet and " << inch % inchtofeet
		 << " inch.\n";
		  
	return 0;
} 
