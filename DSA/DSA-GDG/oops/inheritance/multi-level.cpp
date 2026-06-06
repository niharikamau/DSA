#include <stdio.h>
#include <bits/stdc++.h>

using namespace std;
//MULTILEVEL
class Grandmother           //top level
{
public:
    string eyes;
    string bloodType;

    Grandmother(){
        eyes = "brown";
        bloodType ="O+";
    }

};

class Mother : public Grandmother{          //middle level
public: 
     int height = 160;
};

class Daughter : public Mother{         //bottom level
};

int main(){
    Daughter suhana;
    cout<<suhana.bloodType<<endl; //inherited from top level
    cout<<suhana.eyes<<endl; // inherited from top level
    
    cout<<suhana.height; // inherited from middle level

    return 0;
}