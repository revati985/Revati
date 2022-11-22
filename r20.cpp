#include<iostream>
using namespace std;

int main(){
    //array
    int totalmarks[]={20,15,15,30};
    int submarks[5];
    submarks[0]=18;
    submarks[1]=11;
    submarks[2]=13;
    submarks[3]=26;

    // cout<<"these are your subjects marks as eng,phy,chem,maths resp. "<<endl;
    // cout<<"total marks are as: "<<endl;
    // cout<<totalmarks[0]<<endl;
    // cout<<totalmarks[1]<<endl;
    // cout<<totalmarks[2]<<endl;
    // cout<<totalmarks[3]<<endl;
    // cout<<"your marks are: "<<endl;
    // cout<<submarks[0]<<endl;
    // cout<<submarks[1]<<endl;
    // cout<<submarks[2]<<endl;
    // cout<<submarks[3]<<endl;

    //for loop

    for(int i=0; i<4; i++)
    cout<<submarks[i]<<endl;

    //while loop

    int i=0;
    while(i<4){
        cout<<submarks[i]<<endl;
        i++;
    }
    // do-while loop

    do{
        cout<<submarks[i]<<endl;
        i++;
    }while(i<4);
    return 0;
}
