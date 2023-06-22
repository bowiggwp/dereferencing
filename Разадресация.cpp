#include <iostream>

using namespace std;

int main()
{
	int* a = new int(50);
	int b = *a;

	cout << "adress \t *a\t b\n";
	cout << a << "\t" << *a << "\t" << b << endl;
	*a = 100;
	cout << a << "\t" << *a << "\t" << b << endl;
	return 0;
}