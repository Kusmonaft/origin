#include <iostream>
#include <stdio.h>

using namespace std;

class Overcoat 
{
private:
	int price;

public:
	Overcoat(int p) : price(p) {}
    int operator==(const Overcoat& o) 
    {
        return price == o.price;
    }

    Overcoat& operator=(const Overcoat& o) {
        price = o.price;
        return *this;
    }

    bool operator>(const Overcoat& o) {
        return price > o.price;
    }

    void print() 
    {
        cout << "Цена: " << price << '\n';
    }
};

int main() 
{
    setlocale(LC_ALL, "Rus");

    Overcoat coat(100);
    Overcoat coat_1(150);
    Overcoat coat_2(100);

    if (coat == coat_2)
    {
        cout << "пальто  и 2 пальто имеют одинаковую цену" << '\n';
        cout << "Цена: 100" << '\n';
    }
    else 
    {
        cout << "Пальто  и Пальто 2 имеют разные цены" << '\n';
    }

    coat = coat_1;
    coat.print();

    if (coat > coat_2) 
    {
        cout << "Палто стоит дороже, чем пальтто 2" << '\n';
    }
    else 
    {
        cout << "Пальто стоит не дороже, чем Пальто 2" << '\n';
    }

    return 0;
}
// Номер 2
class Flat 
{
private:
	float area;
	float price;

public:
	Flat(float a, float p) : area(a), price(p) {}
    
    int operator==(const Flat& other) const 
    {
        return area == other.area;
    }

    Flat& operator=(const Flat& other) 
    {
        area = other.area;
        price = other.price;
    
        return *this;
    }

    int operator>(const Flat& other) const 
    {
        return price > other.price;
    }

    friend ostream& operator<<(ostream& out, const Flat& flat)
    {
        out << "Площадь: " << flat.area << "кв.м\nЦена:" << flat.price;
        return out;
    }
};

int main() 
{
    setlocale(LC_ALL, "Rus");

    Flat flat1(100, 100000);
    Flat flat2(120, 120000);
  
    if (flat1 == flat2) 
    {
        cout << "Площади квартир равны\n";
    }
    else 
    {
        cout << "Площади квартир не равны\n";
    }

    if (flat1 > flat2)
    {
        cout << "Квартира 1 стоит дороже, чем квартира 2\n";

    }
    else 
    {
        cout << "Квартира 1 стоит не дороже квартиры 2\n";
    }


    return 0;
}