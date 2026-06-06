#include <stdio.h>
#include <bits/stdc++.h>

using namespace std;
//HIRARICHAL
class Mother                            //parent
{
public:
    string eyes;
    string bloodType;

    Mother(){
        eyes = "brown";
        bloodType ="O+";
    }

};

class Daughter : public Mother{         //child1

};

class Son : public Mother{          //child2

};

int main(){
    Daughter pihu;
    Son sonal;

    cout<<"daughter inheritence from mother:"<<endl;

    cout<<"eyes: "<<pihu.eyes<<endl;   
    cout<<"bloodtype: "<<pihu.bloodType<<endl;      //child1 inheritance from parent

    cout<<"\n";
    cout<<"son inheritence from mother:"<<endl;

    cout<<"eyes: "<<sonal.eyes<<endl;               //child2 inheritance from parent
    cout<<"bloodtype: "<<sonal.bloodType;

    return 0;
}