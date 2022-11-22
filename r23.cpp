#include<iostream>
using namespace std;
//union

union money     //4 is the max size bit (shared among all), suppose
{
    /* data */
    int rice;   //4
    char car;   //1
    float pounds;    //4
};

//union
int main(){
    union money m1;
    m1.rice=3;
    m1.car='c';        //stores for once as union is used
    cout<<m1.rice;     //gives garbage output value
   
   return 0;
}
//enum
int main(){
    enum meal {breakfast,lunch,dinner};    //alocate them in order as 0,1,2
    cout<<breakfast<<endl;
    cout<<lunch<<endl;
    return 0;
}