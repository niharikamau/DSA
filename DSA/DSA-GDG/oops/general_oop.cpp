#include <stdio.h>
#include <bits/stdc++.h>

using namespace std;

// GENERAL OOP
class Fruit
{
public:
    // attributes
    string name;
    string taste;
    string colour;

    // methods
    void Eat()
    {
        cout << "eating " << name << "..\n";
    }

    void Wash()
    {
        cout << "washing " << name << "..\n";
    }

    // deconstructor
    ~Fruit()
    {
        cout << name << " no longer exists, IT'S BEEN EATEN!.." << endl;
    }
};

int main()
{
    Fruit mango;
    mango.name = "mango";
    mango.taste = "sweet";
    mango.colour = "yellow";

    Fruit tomato;
    tomato.name = "tomato";
    tomato.taste = "sweet";
    tomato.colour = "red";

    mango.Wash();
    mango.Eat();

    tomato.Wash();
    tomato.Eat();

    return 0;
}