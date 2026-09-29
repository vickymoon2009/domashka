#pragma once
#include <iostream>
#include <string>

using namespace std;

class CityUA
{
    string name;                  
    int population_city;         

    static string language;       
    static string capital;        
    static string president;      
    static int population_country;
    static int Count;             

public:

    CityUA();
    CityUA(string n, int pop);

    void Init(string n, int pop);
    void Print();
    string GetCityUA() const;
    void SetCityUA(string n);

    int GetInit() const;
    void SetInit(int a);

    
    static void PrintData();
};
