#include<iostream>
using namespace std;
//struct 
    typedef struct employee    //typedef: struct employee---> ep
    {
        /* data */
        int eID;
        char favchar;
        float salary;
    } ep;
int main(){
   ep revati;
   revati.eID=2;
   revati.favchar='f';
   revati.salary=12000000;
   cout<<revati.eID<<endl;
   cout<<revati.favchar<<endl;
   cout<<revati.salary<<endl;
   ep renu;
   ep reva;
   cout<<"enter renu eID"<<endl;
   cin>>renu.eID;
   cout<<"enter reva salary"<<endl;
   cin>>reva.salary;
   return 0;

}
