#include <iostream>
using namespace std;

void call_1(void);
void call_2(void);

int main()
{
	call_1();
	call_1();
	call_2();
	call_2();
	return 0;
}
void call_1()
{
	cout << "Three blind mice" << endl;
} 
void call_2()
{
	cout << "See how they run" << endl;
}
