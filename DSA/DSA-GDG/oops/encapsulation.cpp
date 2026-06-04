#include <stdio.h>
#include <bits/stdc++.h>

using namespace std;

//ENCAPSULATION
class House
{
    // private data
private:
    string Owner;
    int price;
    int pay;
    string Customer_name;

public:
    // default constructor
    House()
    {
        Owner = "Bablu";
        price = 2000;
        pay = 0;
        Customer_name = "Anonymous";
    }

    // methods
    void Pay(int n)
    {
        if (n <= 0)
        {
            cout << "invalid amount\n";
        }
        else
        {
            pay += n;
            if (pay == price)
            {
                cout << "Congratulations! The house is yours..\n";
                Owner = Customer_name;
            }
            else if (pay > price)
            {
                cout << "Congratulations! The house is yours..\n";
                int excess = pay - price;
                cout << "returning excess amount: " << excess << endl;
                Owner = Customer_name;
            }
        }
    }

    void setCustomerName(string name)
    { // setter
        Customer_name = name;
    }

    void checkpayedAmount()
    {
        cout << "amount payed is: " << pay << endl; // getter
    }
    void checkDue()
    {
        int due = price - pay;
        cout << "amount due is: " << due << endl; // getter
    }

    void checkOwner()
    {
        cout << "owner is: " << Owner << endl; // getter
    }
};

int main()
{
    House kailashVilla;
    kailashVilla.checkpayedAmount();
    kailashVilla.checkDue();
    kailashVilla.Pay(1900);
    kailashVilla.checkOwner();
    kailashVilla.setCustomerName("Maruti");

    kailashVilla.checkpayedAmount();
    kailashVilla.checkDue();

    kailashVilla.Pay(120);
    kailashVilla.checkOwner();

    return 0;
}