#pragma once
#include <string>
class Animales
{
public:

	void patita();

	static int getNumPatas() {
		return 4;
	}

	static std::string getEspecie() {
		return especie;
	}

private:
	static std::string especie;
};

