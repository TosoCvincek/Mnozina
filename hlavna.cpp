#include <iostream>
#include "mnozina.h"

using namespace std;
int main() {
	mnozina M1;
	mnozina M2;
	for (unsigned int i = 0; i < 10; i++)
	{
		M1.vloz(i);
		M2.vloz(i + 5);
	}
	cout << "M1:" << endl;
	for (unsigned int i = 0; i < M1.getSize(); i++)
	{
		cout << M1.getCisla(i) << endl;
	}
	cout << "M2:" << endl;
	for (unsigned int i = 0; i < M2.getSize(); i++)
	{
		cout << M2.getCisla(i) << endl;
	}
	M1 = M1 | M2;
	cout << "Zjednotenie:" << endl;
	for (unsigned int i = 0; i < M1.getSize(); i++)
	{
		cout << M1.getCisla(i) << endl;
	}
	return 0;
}