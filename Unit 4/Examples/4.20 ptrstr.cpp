#include <iostream>
#include <cstring> 
using namespace std;
int main()
{
	char animal[20] = "bear";
	const char * bird = "wren";
	char * ps;
	 
	cout << animal << " and ";
	cout << bird << "\n";
	
	cout << "Enter a kind of animal: ";
	cin >> animal;
	
	ps = animal;
	cout << ps << "!\n";
	cout << "Before using strcpy():\n";
	cout << animal << " at " << (int *) animal << endl;
	cout << ps << " at " << (int *) ps << endl;//cout the address of ps & animal
	
	
	cout << "strlen(animal) = " << strlen(animal) << endl;
	ps = new char[strlen(animal) + 1];//+1防止\0数组越界 
	strcpy(ps, animal);
	cout << "After using strcpy():\n";
	cout << animal << " at " << (int *) animal << endl;
	cout << ps << " at " << (int *) ps << endl;
	delete [] ps;
	return 0;
} 
