#include "Furniture.hpp"
#include <iostream>

void Furniture::SetAll()
{
	std::string brend1, type1;
	float price1, size_h1, size_w1;
	int trOrFlp;
	bool used1;
	std::cout << "������� ��� ������: ";
	std::cin >> type1;
	std::cout << "������� ����� ������: ";
	std::cin >> brend1;
	std::cout << "������� ���� ������: ";
	std::cin >> price1;
	std::cout << "������� ������ ������: ";
	std::cin >> size_h1;
	std::cout << "������� ������ ������: ";
	std::cin >> size_w1;
	do
	{
		std::cout << "��������: \n1 - �/� ������\n2 - ����� ������ \n";
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
	std::cout << "���: " << GetType() << "\n";
	std::cout << "�����: " << GetBrand() << "\n";
	std::cout << "����: " << GetPrice() << "\n";
	std::cout << "������: " << GetSize_h() << "\n";
	std::cout << "������: " << GetSize_w() << "\n";
	if (GetUsed())
	{
		std::cout << "�/� ������\n";
	}
	else
	{
		std::cout << "����� ������\n";
	}
}
