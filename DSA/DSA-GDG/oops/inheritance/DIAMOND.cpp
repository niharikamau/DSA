#include <stdio.h>
#include <bits/stdc++.h>
//DIAMOND PROBLEM - also an example of HYBRID inheritance
using namespace std;
class A                     //top level                                                                                  
{
public:
  int value=1;

};

class B : virtual public A{  //second level

};

class C : virtual public A{ //second level

};

class D : public B, public C{ //third level

};

int main(){
  B b;
  C c;
  cout<<b.value<<endl; //1, bcz inherited from A
  cout<<c.value<<endl; //1, bcz inherited from A

  b.value=3;
  cout<<b.value<<endl; //3, bcz just changed the value to 3

  D d;
  cout<<d.value<<endl; //1, shows that virual class is A and inherited propertes are from A which is not tampered.
  d.C::value = 4;

  cout<<d.value<<endl; //4, shows that the "value" variable is shared between d,b,c due to virtual 
  cout<<d.B::value; //4, shows that the "value" variable is shared between d,b,c due to virtual 

    return 0;
}
    /*   sabka apna apna value hai, toh jab object banega toh apna apna data hoga independent, bs in case of virtual, jo class virual derived class inherit karegi usme vo variable shared hoga.
                                                                                                                           A -value
                                                                                                                          / \
                                                                                                                         /   \
                                                                                                                 value- B     C-value
                                                                                                                         \   /        
                                                                                                                          \ /        |---B se value jo aya---|  
                                                                                                                           D-value---|                       |->shared hai
                                                                                                                                     |---C se value jo aya---|            
                                                                                                                                       */