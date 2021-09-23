#include<iostream>
#include<bits/stdc++.h>

using  namespace std;

//parent - child
// at starting I interited A ->B , B -> C,A -  XXXX (which is wrong , u can't be child of grandpa and father at same time)

// A-> B (A-parent , B-child), B ->C(B parent , C- child) 
class parent{
    
//access specifier :
//public - accessed outside class by its object
//protect - accessed outside class by its jst derived class object bt not by other 
//private - accessed only inside the class 


public:
    int a = 10;
    int b = 12;

public: void hi(){
    cout<<"hi from parent \n";
}

};

class child: public parent{

public :
int e = 9 ;
int d = 11;

void print(){
    cout<<"calling parent var from child a , b "<< a <<b <<endl;
}
void hello(){

    cout<<"hello \n";
}

};



int main(){

parent p ;
child c;

p.hi();
c.hello();

cout<<p.a<<" p.a "<<p.b<<" p.b \n";

//calling hi from child
cout<<"calling hi from child";
c.hi();

c.print();
return 0;

}