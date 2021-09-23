#include<iostream>
#include<bits/stdc++.h>

using  namespace std;

// consrtuctors

class A
{
    public: A(){cout<<" from A \n";}
    public: void methA(){
        cout<<"method A \n ";
    }
    //parameterized constructors 
    // polymorphism :constructor overloading
    // basend on num,type,order of params passed.  
    public: A(int x){
        cout<<" para const : "<< x<< endl;
    }

};

class B : public A{

    public:     B(){cout<<" from B \n";}
};

class C: public B{

    public:     C(){cout<<" from C \n";}


};

int main(){

    A a;//obj a
    a.methA();
    B b;//obj b
    b.methA();
    C c;//obj c
    c.methA();
    A obA(10);

    return 0;
}