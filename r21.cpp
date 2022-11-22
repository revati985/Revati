#include<iostream>
using namespace std;

// pointers and arrays
// * ---> derefrence (value at)

int main(){
int marks[]= {13,11,15,10};
int*p = marks;
// cout<<"marks at *p is "<<*p<<endl;           //*p ---> marks[0]
// cout<<"marks at *(p+1) is "<<*(p+1)<<endl;   //*(p+1) ---> marks[1]
// cout<<"marks at *(p+2) is "<<*(p+2)<<endl;   //*(p+2) ---> marks[2]
cout<<"the marks are: " <<*(p++)<<endl;  //1st elememt
cout<<"the marks are: " <<*(++p)<<endl;  //3rd ----> it first increments
cout<<"the marks are: " <<*(p)<<endl;    //same=3rd
return 0;
}