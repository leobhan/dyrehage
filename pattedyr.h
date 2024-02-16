/*
- - - - - - - - - pattedyr.h - - - - - - - - -
*/
#pragma once
#include "dyr.h"

// Et hierarki av klasser som representerer dyr.
// Tips: Lag en klasse hver for pattedyr, fugl og fisk.
// Du skal ikke kunne lage objekter av klassen Dyr. Kun av subklassene.
// Hvert dyr skal ha en medlemsfunksjon bevegelse(), som skriver ut hvordan dyret beveger seg (går, hopper, svømmer, fly, el.l)
// Alle dyr har et navn, tilhørere en art, har en vekt, og kan bevege seg.
class pattedyr : public dyr //arv ting
{
private:
	std::string m_beveg;

public:
	// klassen::konstruktor
	using dyr::dyr;
	void dyrFunk() override {}

	// inne i pattedyr konstruktøren kaller jeg dyr konstruktøren
	pattedyr(std::string navn, std::string art, double vekt, std::string bevegelse = "gaa")
		:dyr(navn, art, vekt), m_beveg{ bevegelse } {}
	

	std::string getBeveg() { return m_beveg; }

	void printBeveg() override
	{
		std::cout << m_beveg << std::endl;
	}

};