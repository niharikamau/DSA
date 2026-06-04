#include <stdio.h>
#include <bits/stdc++.h>

using namespace std;
//ABSTRACTION
class Playground                   // abstract parent class
{ 
public:
    virtual void play() = 0;        // virtual void function
};
class Slide : public Playground     //child1
{ 
public:
    void play() override
    {
        cout << "Mark is sliding.." << endl;
    }
};
class Sand : public Playground     //child2
{ 
public:
    void play() override
    {
        cout << "Mark is making a sandcastle.." << endl;
    }
};
class Swing : public Playground    //child3
{ 
public:
    void play() override
    {
        cout << "Mark is swinging.." << endl;
    }
};

int main()
{
    Slide m1;
    m1.play();

    Sand m2;
    m2.play();

    Swing m3;
    m3.play();
    return 0;
}