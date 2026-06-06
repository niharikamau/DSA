#include <stdio.h>
#include <bits/stdc++.h>

using namespace std;
//MULTIPLE
class Mother            //parent1
{
public:
    int iq = 90;
};

class Father{           //parent2
public:
    void laugh(){
        cout<<"laughs terribly";
    }
};

class Daughter : public Mother, public Father{      //child

};

int main(){
 Daughter riya;
 cout<<"iq: "<<riya.iq<<endl;   //inherited from parent1
 riya.laugh();      //inherited from parent2

    return 0;
}