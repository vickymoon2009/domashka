#include "Library.h"

string CityUA::language = "Ukrainian";
string CityUA::capital = "Kyiv";
string CityUA::president = "Volodymyr Zelenskyy";
int CityUA::population_country = 45000000;
int CityUA::Count = 0;


CityUA::CityUA()
{
    name = " ";
    population_city = 0;
    Count++;
}


CityUA::CityUA(string n, int pop)
{
    name = n;
    population_city = pop;
    Count++;
}


void CityUA::Init(string n, int pop)
{
    name = n;
    population_city = pop;
}


void CityUA::Print()
{
    cout << "City name: " << name << endl;
    cout << "City population: " << population_city << endl;
}

string CityUA::GetCityUA() const
{
    return name;
}

void CityUA::SetCityUA(string n)
{
    name = n;
}

int CityUA::GetInit() const
{
    return population_city;
}

void CityUA::SetInit(int a)
{
    population_city = a;
}


void CityUA::PrintData()
{
    cout << "\n";
    cout << "Language: " << language << endl;
    cout << "Capital: " << capital << endl;
    cout << "President: " << president << endl;
    cout << "Population of country: " << population_country << endl;
    cout << "Count: " << Count << endl;
}
