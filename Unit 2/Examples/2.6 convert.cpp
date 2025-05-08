#include <iostream>
int stonetopound(int);
int main()
{
	using namespace std;
	int stone;
	cout << "Enter the weight in stone: ";
	cin >> stone;
	int pounds = stonetopound(stone);
	cout << stone << " stone = ";
	cout << pounds << " pounds." << endl;
	return 0;
}

int stonetopound(int sts)
{
	return 14 * sts;
}
