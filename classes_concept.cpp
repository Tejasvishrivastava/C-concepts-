#include<iostream>
#include<bits/stdc++.h>

using namespace std;

// accessing public var from main and from other class too
// by passing obj of king to method of class king 2
class king{


public:
int a = 10;
int b = 15;


void show(){
   cout<<a<<" a "<<b<<" b "<<"a+b="<<a+b<<endl;
}

};

class king2{


    public:
    int c = 20;
    int d = 99;

    void show(king k1){
    cout<<c<<" c "<<d<<" d "<<"a+b="<<k1.a + k1.b<<endl;
}
};

int main(){
    king k1 ;
    k1.show();
    cout<<k1.a<<" checking   a \n";


    king2 k2 ;
    k2.show(k1);

    return 0;
}