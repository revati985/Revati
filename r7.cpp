#include<iostream>
using namespace std;

int c=87;
int main(){
    int a,b,c;
    cout<<"enter value of a"<<endl;
    cin>>a;
    cout<<"enter value of b"<<endl;
    cin>>b;
    c=a+b;
    cout<<"sum is"<<c<<endl;
    cout<<"global c is"<<::c ;
    return 0;
}