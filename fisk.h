/*
- - - - - - - - - fisk.h - - - - - - - - -
*/
#pragma once
#include "dyr.h"

// Et hierarki av klasser som representerer dyr.
// Tips: Lag en klasse hver for pattedyr, fugl og fisk.
// Du skal ikke kunne lage objekter av klassen Dyr. Kun av subklassene.
// Hvert dyr skal ha en medlemsfunksjon bevegelse(), som skriver ut hvordan dyret beveger seg (g�r, hopper, sv�mmer, fly, el.l)
// Alle dyr har et navn, tilh�rere en art, har en vekt, og kan bevege seg.
class fisk : public dyr //arv ting
{
private:
	std::string m_beveg;

public:
	// klassen::konstruktor
	using dyr::dyr;

	//overskriver dyr som virituell klasse
	void dyrFunk() override {}

	// inne i fisk konstrukt�ren kaller jeg dyr konstrukt�ren
	fisk(std::string navn, std::string art, double vekt, std::string bevegelse = "svomme")
		:dyr(navn, art, vekt), m_beveg{ bevegelse } {}

	std::string getBeveg() { return m_beveg; }

	void printBeveg() override
	{
		std::cout << m_beveg << std::endl;
	}
};