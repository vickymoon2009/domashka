#include "Library.h"

int main()
{
    CityUA obj("Odessa", 1500000);

    obj.Print();
    cout << "Name: " << obj.GetCityUA() << endl;
    cout << "Population: " << obj.GetInit() << endl;

    cout << "\nUsing setters:" << endl;

    obj.SetCityUA("Kyiv");
    obj.SetInit(3000000);

    obj.Print();

    cout << "\nStatic data:" << endl;
    CityUA::PrintData();

    return 0;
}
