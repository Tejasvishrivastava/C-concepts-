#include<iostream>
#include<bits/stdc++.h>

using  namespace std;

// interface 

__interface  i{

public:void h()=0;   
public: void j()=0;

} ;

class a:public i{
public :void h(){
    cout<<" from h \n";
}
public: void j(){
    cout<<" from j \n";
}

};

int main(){

i * p =  new a();
p->h();
p->j();

    return 0;
}