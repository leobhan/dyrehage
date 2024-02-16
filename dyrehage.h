/*
- - - - - - - - - dyrehage.h - - - - - - - - -
*/ 
#pragma once
#include <iostream>
#include <string>
#include <vector>
#include <memory>
#include "fugl.h"
#include "fisk.h"
#include "pattedyr.h"
#include "dyr.h"

class dyrehage
{
private:
	// klasser for alle dyr. 
	// Disse objektene skal lagres i én vector.
	std::vector<std::shared_ptr<dyr>> m_dyrVec;

public:
	dyrehage() = default;

	// få tak i objekt
	std::vector<std::shared_ptr<dyr>> getVec() { return m_dyrVec; }

	// funksjon for å legge til dyr i vector
	void addDyr(std::string type, std::string art, std::string navn, double vekt, std::string beveg = "")
	{
		if (type == "pattedyr")
		{
			if(beveg == "") m_dyrVec.push_back(std::make_shared<pattedyr>(navn, art, vekt));
			else m_dyrVec.push_back(std::make_shared<pattedyr>(navn, art, vekt, beveg));
		}
		else if (type == "fugl")
		{
			if (beveg == "") m_dyrVec.push_back(std::make_shared<fugl>(navn, art, vekt));
			else m_dyrVec.push_back(std::make_shared<fugl>(navn, art, vekt, beveg));
		}
		else if (type == "fisk")
		{
			if (beveg == "") m_dyrVec.push_back(std::make_shared<fisk>(navn, art, vekt));
			else m_dyrVec.push_back(std::make_shared<fisk>(navn, art, vekt, beveg));
		}
	}

	//funksjon for å fjerne dyr
	void removeDyr(std::string navn)
	{
		for (int i{}; i < m_dyrVec.size(); ++i)
		{
			if (m_dyrVec[i]->getNavn() == navn)
			{
				// erease fra vectoren
				// siden det er smartpeker vector vil dyrene bli helt fjernet
				m_dyrVec.erase(m_dyrVec.begin() + i);
			}
		}
		std::cout << "/// " << navn << " er removed" << " ///" << std::endl;
	}
	
	// funksjon som kan kalles og som løper gjennom alle dyrene og presenterer dem. 
	// Her skal du overlaste operatoren << for dyrene.
	void print()
	{
		for (auto x : m_dyrVec)
		{
			std::cout << *x << std::endl;
		}
	}

	// Dyrehagen skal ha mulighet til å skrive ut alle dyrene i en gruppe, for eksempel pattedyr eller fisk.
};