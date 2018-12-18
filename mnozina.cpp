#include "mnozina.h"



mnozina::mnozina()
{
}


mnozina::~mnozina()
{
}

mnozina & mnozina::operator|(const mnozina & zdroj)
{
	if (&zdroj == this) return *this;
	vector<long> druhy = zdroj.cisla;
	unsigned int velkost = cisla.size();
	bool nasiel = false;
	for (unsigned int i = 0; i < druhy.size(); i++)
	{
		/*for (unsigned int j = 0; j < cisla.size(); j++)
		{
			/*if (druhy[i] == cisla[j]) nasiel = false;
			else*/
			cisla.push_back(druhy[i]);
		//}
		//if (nasiel) cisla.push_back(druhy[i]);
	}
	vector<long> pomocny;
	for (unsigned int i = 0; i < cisla.size(); i++)
	{
		for (unsigned int j = 0; j < cisla.size(); j++)
		{
			if (i != j) {
				if (cisla[i] == cisla[j]) {
					cisla.erase(cisla.begin() + j);
				}
			}
		}
	}
	/*for (unsigned int i = 0; i < cisla.size(); i++)
	{
		for (unsigned int j = 0; j < pomocny.size(); j++)
		{
			if (cisla[i] == cisla[j])
				pomocny.push_back(cisla[i]);
		}
	}*/
	return *this;

}
