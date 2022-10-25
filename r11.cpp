#include<iostream>
using namespace std;

int main(){
    int age;
    cout<<"enter your age"<<endl;
    cin>>age;
    if(age<2){
        cout<<"1st option"<<endl;
    }
    else if(age>=18){
        cout<<"2nd option"<<endl;
    }
    return 0;
}