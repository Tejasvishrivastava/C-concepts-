#include<iostream>
#include<bits/stdc++.h>

using  namespace std;
//abstract class:
//A class is made abstract by declaring at least one of its functions 
//as pure virtual function. A pure virtual function is specified 
//by placing "= 0" in its declaration 

class Abs{

public:virtual void pure()=0;//its ok if u not override this  : it can done through 
// objects or pointer of abs class to overriding methods of derived class 


public: void b(){};
public: void c(){};


}; 



class Bx : public Abs{

public: void b(){
    cout<<"overridden meth B \n";
}
public:virtual void pure(){int z;};


};

class Cx : public Bx{

public: void c(){
    cout<<"overridden meth C \n";
}
public: void pure(){

    cout<<"meth pure overridden in Cx\n";
}
};

int main(){

//Abs ob1; -- error

/*No, you cannot create an instance of an abstract class
 because it does not have a complete implementation. 
 The purpose of an abstract class is to function as 
 a base for subclasses. It acts like a template, 
or an empty or partially empty structure, 
you should extend it and build on it before you can use it.
*/

Bx ob2;
ob2.b();

Cx ob3;
ob3.c();


// object pointers

Abs *point_to_Cx = new Cx;
point_to_Cx -> pure();



return 0;
}