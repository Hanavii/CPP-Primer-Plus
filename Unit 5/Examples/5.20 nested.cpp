#include <iostream>

using namespace std;
const int Cities = 5;
const int Years = 4;
int main(){
	const char * cities[5] = 
	{
		"Gribble City",
		"Gribbletown",
		"New Gribble",
		"San Gribble",
		"Gribble Vista"
	};
	
	int maxtemps[4][5] = 
	{
		{96, 100, 87, 101, 105},
		{95, 98, 91, 107, 104},
		{97, 101, 93, 108, 107},
		{98, 103, 95, 109, 108},
	};
	
	cout << "Maximum temperatures for 2008 - 2011\n\n";
	for (int j = 0; j < 5; j ++){
		cout << cities[j] << ":\t";
		for (int i = 0; i < 4; i ++){
			cout << maxtemps[i][j] << "\t";
		}
		cout << endl;
	}
	return 0;
}

