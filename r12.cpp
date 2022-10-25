#include<iostream>
using namespace std;
 
int main(){
    int age;
    cout<<"type your age"<<endl;
    cin>>age;
    
    switch (age)
    {
    case 18:
        cout<<"you are 18"<<endl;
        break;
    case 22:
        cout<<"you are 22"<<endl;
        break;
    case 1:
        cout<<"you are 1"<<endl;
        break;

    default:
    cout<<"no special case"<<endl;
        break;
    }

cout<<"over with switch";
return 0;
}