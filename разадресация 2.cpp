#include <iostream>

using namespace std;
int main()
{
	int b = 50;
	int* a = &b;
	cout << "adress \t *a\t b\n";

	cout << a << "\t" << *a << "\t" << b << endl;
	b += 10;
	cout << a << "\t" << *a << "\t" << b << endl;
	*a = 100;
	cout << a << "\t" << *a << "\t" << b << endl;
	return 0;
}