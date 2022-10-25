#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"enter the number you want table of"<<endl;
    cin>>n;
    int i=1;
    do{
        cout<<n<<"*"<<i<<"="<<n*i<<endl;
        i++;
    } while(i<11);
    return 0;
}