#include<iostream>
using namespace std;

int main(){
    float a=47;
    float b=48.25;
    cout<<"the value is "<<a+b<<endl;
    cout<<"the value is "<<a+int(b)<<endl;
    cout<<"the value is "<<a+float(b)<<endl;
    cout<<"the value is "<<a+(float)b<<endl;
    return 0;
}