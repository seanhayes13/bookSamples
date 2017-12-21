#include <iostream>

using namespace std;

void main() {
	/*Section 5 - Typecasting*/
	cout << "\n\n############\nSection 5 - Typecasting\n############" << endl;
	int a = 3;
	//If we add 1.1 to a, we will lose .1 and a will become 4
	double b = static_cast<double>(a);
	//If we were to now add 1.1 to b we will get 4.1
	b += 1.1;
	cout << "a: " << a << endl;
	cout << "b: " << b << endl;
	double z = 3.0;
	cout << "z: " << z << endl;

	system("pause");
}
