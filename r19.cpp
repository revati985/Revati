#include<iostream>
using namespace std;

int main(){
    int a=2;
    // pointer
    // & is a (address at RAM) operator
    int* b=&a;  
    cout<<"adress of a is "<<b<<endl;
    cout<<"address of a is"<<&a<<endl;
    // * is a (value of) operator [derefrence operator]
    cout<<"value at address b is "<<*b<<endl;
    // pointer to pointer
    int** c=&b;
    cout<<"adress of b is"<<&b<<endl;
    cout<<"adress of b is"<<c<<endl;
    cout<<"value at address c is"<<**c<<endl;

    
    return 0;
}