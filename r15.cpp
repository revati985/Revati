#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"enter the number you want table of"<<endl;
    cin>>n; 

    int i=1;
    for(int i=1; i<11; i++)
    cout<<n<<"*"<<i<<"="<<n*i<<endl;
    return 0;
}
