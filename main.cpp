#include <iostream>

using namespace std;
/*
Functon exchange 
param[in, out] int a the first value to be exchanged
param[in, out] int b the second value to be exchanged
returns none
*/
// " & " the address of 
void swap(int& a , int& b);

int main() {
	int a = 10, b = 20;

	swap(a, b);

	cout << a << ", " << b << endl;
}

void swap(int& a, int& b)
{
	int temp = b;
	b = a;
	a = temp;
}
