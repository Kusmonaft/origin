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
        cout << "����: " << price << '\n';
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
        cout << "������  � 2 ������ ����� ���������� ����" << '\n';
        cout << "����: 100" << '\n';
    }
    else 
    {
        cout << "������  � ������ 2 ����� ������ ����" << '\n';
    }

    coat = coat_1;
    coat.print();

    if (coat > coat_2) 
    {
        cout << "����� ����� ������, ��� ������� 2" << '\n';
    }
    else 
    {
        cout << "������ ����� �� ������, ��� ������ 2" << '\n';
    }

    return 0;
}
// ����� 2
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
        out << "�������: " << flat.area << "��.�\n����:" << flat.price;
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
        cout << "������� ������� �����\n";
    }
    else 
    {
        cout << "������� ������� �� �����\n";
    }

    if (flat1 > flat2)
    {
        cout << "�������� 1 ����� ������, ��� �������� 2\n";

    }
    else 
    {
        cout << "�������� 1 ����� �� ������ �������� 2\n";
    }


    return 0;
}