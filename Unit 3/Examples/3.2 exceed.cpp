#include <iostream>
#define ZERO 0
#include <climits>

int main()
{
	using namespace std;
	short sam = SHRT_MAX;
	unsigned short sue = sam;
	
	cout << "Sam has " << sam << " dollars and Sue has " << sue;
	cout << " dollars deposited." << endl
		 << "Add $1 to each account." << endl << "Now ";
	sam = sam+1;//上溢，负的最小值 
	sue = sue+1;//未超出数据范围 
	cout << "Sam has " << sam << " dollarrs and Sue has " << sue;
	cout << " dollars deeposited.\nPoor Sam!" << endl; 
	
	sam = ZERO;
	sue = ZERO;
	cout << "Sam has " << sam << " dollars and Sue has " << sue;
	cout << " dollars deposited." << endl;
	cout << "Take $1 from each account." << endl << "Now ";
	sam = sam - 1;//未溢出 
	sue = sue - 1;//下溢，正的最大值 
	cout << "Sam has " << sam << " dollars and Sue has " << sue;
	cout << " dollars deposited." << endl << "Lucky Sue!" << endl;
	return 0;
}
