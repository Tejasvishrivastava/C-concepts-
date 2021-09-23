#include<iostream>
#include<time.h>
#include<math.h>
#include<string.h>
#include<fstream>
#include<array>
#include<chrono>

auto start = chrono::steady_clock::now();


using namespace std;

void fun1(){cout<<"\n you pressed fun1\n";}
void fun2(){cout<<"\n you pressed fun2\n";}
void fun3(){cout<<"\n you pressed fun3\n";}
void fun4(){cout<<"\n you pressed fun4\n";}


int add(int x,int y,int a=9){

    return x+y+a;
}
int a = 1000;

int main(){
//cout<<"hello\n\t hero\\  \"mirage\" \r carry on skip other part";
//output:
//hello
// carry on skip other part 

//curr time in secs
//cout<<time()<<" \n";

//rand num
char ascii;
unsigned seed;
cin>>seed;
cout<<(ascii = static_cast<char>(seed))<<endl;
srand(seed);//setting max value for rand num
int x = 23;
cout<<"this is inline func "<<"\x02"<<endl;
cout<<"max :"<<max(1,2)<<" min- "<<min(22,10)<<" pow 9^3 -  "<<pow(9,0.5)<<endl;

//srand(time(0));
int y,a=100,b=20;
y = a + rand() % b;//scaling :generating rand num b/w range of a,b
cout<<"random num is:\n"<<y<<endl;
int z = add(3,4,0);
cout<<"addition of nums is:\n:" << z<<std::endl;
//blocks in cpp
{
    int z = add(1,1);
    cout<<z<<endl;
}
{
    int a = 1;
    cout<<"\n \n x/::x- "<<(float)a/::a<<endl;


}

//int m = 49;
//cout<<"sqrt: "<<sqrt(m)<<" cos x , sin x , tan x , log x , floor , ceil, exp . fabs , fmod(x,y) , pow(x,y) "<<sin(m)<<" "<<cos(m)<<" "<<floor(9.9) <<" "<< ceil(9.1)<<" "<<fabs(-99.9)<< " "<< fmod(9,5)<<" " <<endl;

enum student{aditi,pragati,ishita,shristy};
cout<<aditi<<" "<<pragati<<endl;

student s1,s2;
// s1 = kala; not accepted
s2 = shristy;//only vlaues declared in {} can be used
if(s2 == 3){
    cout<<s2;
}


//strings
string str = "naina ";
string str1 = "uttam";
string str2 =str.append(str1);
str2[3]= 'o';
for(int i = 0;str2[i];i++){
str2[i]='n';
}
cout<<str2<<" len = " <<str2.length()<<endl;
//char *c = *strcpy(str2,str);
//cout<<"str 2 after copying: "<<strlen(str2)<<endl;


//pointers
int *p;
p = &a;
int **q;
q = &p;
cout<<" pointer p = " <<**q<<endl;

//files

ofstream Myfile("simpletext.txt");
Myfile<<" this is new text \n";
//Myfile.close();

Myfile.open("simpletext.txt",std::fstream::in);

Myfile.close();


//array
int arr[20]= {1,2,3,4,5,6,5,79,9,73,4};
for(auto i:arr){
    cout<<i<<" ";
}
cout<<" len of arr: "<<sizeof(arr)/sizeof(arr[0]);

int *k ;
k = arr;
cout<<" pointer to arr : "<<*(k+3)<<" " <<arr[3]<<" "<<k[3] <<" "<<*(arr+3)<<endl;
/*
cout << array[4]; 
cout << *(array + 4); 
cout << arrayptr1[4]; 
cout << *(arrayPtr1 + 4);
all do the same thing
*/
/*
int num;
int *funptr[3] = {fun1,fun2,fun3};
cout<<"function num\n";

while(num!=-1){
cin>>num;
(*funptr[num])();
}*/


auto end = chrono::steady_clock::now(); 
auto diff = start-end;

cout<<diff;


return 0 ;
}

