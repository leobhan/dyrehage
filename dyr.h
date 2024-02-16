/*
- - - - - - - - - dyr.h - - - - - - - - -
*/
#pragma once
//arv klasse constructor //inherit class constructor // with initilation list

class dyr
{
private:
	std::string m_navn;
	std::string m_art;
	double m_vekt;

public:
	//gjør at klassen blir abstrakt klasse
	virtual void dyrFunk() = 0;

	//
	virtual void printBeveg() {}

	//dette er en konstruktor
	dyr(std::string navn, std::string art, double vekt)
		:m_navn{ navn }, m_art{ art }, m_vekt{vekt} {}

	//få tilgang til objekter
	std::string getNavn() const { return m_navn; }
	std::string getArt() const { return m_art; }
	double getVekt() const { return m_vekt; }
};


//operator overloading
std::ostream& operator<<(std::ostream& ost, const dyr& dyrr)
{
	return ost
		<< "navn: " << dyrr.getNavn() << std::endl
		<< "art: " << dyrr.getArt() << std::endl
		<< "vekt: " << dyrr.getVekt() << "kg" << std::endl;
}