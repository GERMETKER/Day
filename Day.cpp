#include <iostream>
#include <random>
#include <Windows.h>
#include "Furniture.hpp"
int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    srand(time(NULL));
    Furniture One;
    One.SetAll();
    One.PrintAll();
}


