#ifndef FURNITURE_HPP
#define FURNITURE_HPP
#include <iostream>
class Furniture
{
public:
	void SetFurn(std::string setBrand, float setPrice, std::string setType, float setSize_h, float setSize_w, bool setUsed)
	{
		brand = setBrand;
		price = setPrice;
		type = setType;
		size_h = setSize_h;
		size_w = setSize_w;
		used = setUsed;
	}
	void SetAll();
	void PrintAll();
	std::string GetBrand()
	{
		return brand;
	}
	float GetPrice()
	{
		return price;
	}
	std::string GetType()
	{
		return type;
	}
	float GetSize_h()
	{
		return size_h;
	}
	float GetSize_w()
	{
		return size_w;
	}
	bool GetUsed()
	{
		return used;
	}


private:
	std::string brand;
	float price;
	std::string type;
	float size_h;
	float size_w;
	bool used;
};

#endif // !FURNITURE.HPP