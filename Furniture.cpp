#include "Furniture.hpp"
#include <iostream>

void Furniture::SetAll()
{
	std::string brend1, type1;
	float price1, size_h1, size_w1;
	int trOrFlp;
	bool used1;
	std::cout << "Введите тип мебели: ";
	std::cin >> type1;
	std::cout << "Введите бренд мебели: ";
	std::cin >> brend1;
	std::cout << "Введите цену мебели: ";
	std::cin >> price1;
	std::cout << "Введите высоту мебели: ";
	std::cin >> size_h1;
	std::cout << "Введите ширину мебели: ";
	std::cin >> size_w1;
	do
	{
		std::cout << "Выберите: \n1 - Б/у мебель\n2 - Новая мебель \n";
		std::cin >> trOrFlp;
	} while (trOrFlp < 1 || trOrFlp > 2);
	if (trOrFlp == 1)
	{
		used1 = true;
	}
	else
	{
		used1 = false;
	}
	SetFurn(brend1, price1, type1, size_h1, size_w1, used1);
}

void Furniture::PrintAll()
{
	std::cout << "Тип: " << GetType() << "\n";
	std::cout << "Бренд: " << GetBrand() << "\n";
	std::cout << "Цена: " << GetPrice() << "\n";
	std::cout << "Высота: " << GetSize_h() << "\n";
	std::cout << "Ширина: " << GetSize_w() << "\n";
	if (GetUsed())
	{
		std::cout << "Б/у мебель\n";
	}
	else
	{
		std::cout << "Новая мебель\n";
	}
}
