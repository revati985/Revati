#include<iostream>
using namespace std;

//int sum(a,b)--> not acceptable
//int sum(int a,b)---> not acceptable
//int sum(int ,int)---> acceptable
//void g(void)---> acceptable

int sum(int a, int b);   //acceptable     //function prototype --->func is present later in code(surety)
void g();                //func prototype

int main(){
    int num1,num2;      //actual parameters
    cout<<"enter first number "<<endl;
    cin>>num1;
    cout<<"enter second number "<<endl;
    cin>>num2;
    cout<<"sum is "<<sum(num1,num2)<<endl;
    g();
   
   return 0;
}
int sum(int a,int b)  //formal parameters (a,b)
{
    int sum= a+b;
    return sum;
}
void g(){
    cout<<"hello, morning!";
}