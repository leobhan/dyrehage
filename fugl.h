/*
- - - - - - - - - fugl.h - - - - - - - - -
*/
#pragma once
#include <iostream>
#include <string>
#include <vector>
#include "dyr.h"

// Et hierarki av klasser som representerer dyr.
// Tips: Lag en klasse hver for pattedyr, fugl og fisk.
// Du skal ikke kunne lage objekter av klassen Dyr. Kun av subklassene.
// Hvert dyr skal ha en medlemsfunksjon bevegelse(), som skriver ut hvordan dyret beveger seg (g�r, hopper, sv�mmer, fly, el.l)
// Alle dyr har et navn, tilh�rere en art, har en vekt, og kan bevege seg.

class fugl : public dyr //arv ting
{
private:
	std::string m_beveg;

public:
	// klasse::konstruktor
	using dyr::dyr;
	void dyrFunk() override {}

	// inne i fugl konstrukt�ren kaller jeg dyr konstrukt�ren
	fugl(std::string navn, std::string art, double vekt, std::string bevegelse = "fly")
		:dyr(navn, art, vekt), m_beveg{ bevegelse } {}

	std::string getBeveg() { return m_beveg; }

	void printBeveg() override
	{
		std::cout << m_beveg << std::endl;
	}
};