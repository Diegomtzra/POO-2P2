
#include <iostream>
#include "Animales.h"
#include "Gato.h"
#include "Perro.h"
#include "Vaca.h"
#include "Ballena.h"

int main()
{
	int menu,a;

	do {
		std::cout << "\t Animales y su info." << std::endl;
		std::cout << " Perro." << std::endl;
		std::cout << " Gato." << std::endl;
		std::cout << " Vaca." << std::endl;
		std::cout << " Ballena." << std::endl;
		std::cout << " Salir." << std::endl;
		std::cout << "Seleccione una opcion." << std::endl;
		std::cin >> menu;
		system("pause");
		system("cls");

		switch (menu){
		case 1:
			Perro perro;

			std::cout << "Familia." << std::endl;
			std::cout << Perro::getEspecie() << std::endl;

			std::cout << "\nSonido:" << std::endl;
			perro.ladra();

			std::cout << "\nNumero de patitas:" << std::endl;
			std::cout << Perro::getNumPatas() << std::endl;

			std::cout << "\nHace truco:" << std::endl;
			perro.patita();

			system("pause");
			system("cls");
			break;
		case 2:
			Gato gato;

			std::cout << "Familia." << std::endl;
			std::cout << Gato::getEspecie() << std::endl;

			std::cout << "\nSonido:" << std::endl;
			gato.Maullido();

			std::cout << "\nNumero de patitas:" << std::endl;
			std::cout << Gato::getNumPatas() << std::endl;

			std::cout << "\nHace truco:" << std::endl;
			gato.patita();

			system("pause");
			system("cls");
			break;
		case 3:
			Vaca vaca;

			std::cout << "Familia." << std::endl;
			std::cout << Vaca::getEspecie() << std::endl;

			std::cout << "\nSonido:" << std::endl;
			vaca.Mujido();

			std::cout << "\nNumero de patitas:" << std::endl;
			std::cout << Vaca::getNumPatas() << std::endl;

			std::cout << "\nHace truco:" << std::endl;
			vaca.Leche();

			system("pause");
			system("cls");
			break;
		case 4:
			Ballena ballena;

			std::cout << "Familia." << std::endl;
			std::cout << Ballena::getEspecie() << std::endl;

			std::cout << "\nSonido:" << std::endl;
			ballena.Musica();

			std::cout << "\nHace truco:" << std::endl;
			ballena.Agua();

			system("pause");
			system("cls");
			break;
		case 5:
			break;
		default:
			std::cout << "Esta opcion no esta disponible." << std::endl;
		}
	} while (menu != 5);

	return 0;
}
