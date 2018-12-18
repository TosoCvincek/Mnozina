#pragma once
#include <vector>

using namespace std;
class mnozina
{
private:
	vector<long> cisla;
public:
	mnozina();
	void vloz(long pCislo) { cisla.push_back(pCislo); };
	long getCisla(unsigned int i) { return cisla[i]; };
	int getSize() { return cisla.size(); };
	~mnozina();
	mnozina & operator | (const mnozina &zdroj);

};

