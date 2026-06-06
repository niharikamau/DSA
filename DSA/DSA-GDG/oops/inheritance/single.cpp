#include <stdio.h>
#include <bits/stdc++.h>

using namespace std;
//SINGLE
class Mother            //parent
{
public:
    string eyes;
    string bloodType;

    Mother(){
        eyes = "brown";
        bloodType ="O+";
    }

};

class Daughter : public Mother{         //child
public:
    string eyes = "black";
};

int main(){
    Daughter niharika;
    cout<<niharika.eyes<<endl;   //overshadowing, inherited data got overshadowed (not changed) by object's data. 

    cout<<niharika.bloodType<<endl; //inherited from parent
    
    cout<<niharika.Mother::eyes; //scope resolution to prove that there are two variables named "eyes" in object's memory.
    return 0;
}
