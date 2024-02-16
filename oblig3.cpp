// oblig3.cpp
/*
- - - - - - - - - main - - - - - - - - -
*/
#include <iostream>
#include <string>
#include <vector>
#include <memory>
#include "dyrehage.h"
#include "fugl.h"
#include "pattedyr.h"
#include "fisk.h"
#include "dyr.h"

int main()
{
	dyrehage d;
	d.addDyr("pattedyr", "menneske", "Ole", 80.0);
	d.addDyr("fugl", "undulat", "Khaled", 0.30);
	d.addDyr("fisk", "laks", "Helga", 3.6);
	d.addDyr("pattedyr", "beluga hval", "Knut", 1600, "svomme");
	d.print();
	d.removeDyr("Ole");
	d.print();

	std::cout << d.getVec()[2]->getNavn() <<  ' ' << "beveger seg ved aa ";
	d.getVec()[2]->printBeveg();
}