#include<iostream>
using namespace std;

//for(initialization; condition; updation)

int main(){
    for(int i=0; i<9; i++)
    {
      if(i=2){
        continue;
      }
    cout<<i<<endl;
    }
    return 0;
}