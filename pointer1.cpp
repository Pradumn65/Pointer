// basic concept of pointer
// pointer is used to store the address of varaible


#include<iostream>
using namespace std;
  
int main()
{
    int c=5;
    int *p=&c;

    cout<<"first  "<<c<<endl;
    cout<<"second  "<<*p<<endl;
    cout<<"third  "<<p<<endl;
    cout<<"fourth  "<<&c<<endl;
    cout<<"fifth  "<<&p<<endl;

    // cout<<"value of p before:  "<<p<<endl;
    // p=p+1;
    // cout<<"value of p after: "<<p<<endl;
    
    cout<<"value of c before:  "<<c<<endl;
    cout<<"value of c before:  "<<*p<<endl;
    *p=*p+5;
    cout<<"value of c after:  "<<c<<endl;
    cout<<"value of c after:  "<<*p<<endl;

    cout<<"value of c before:  "<<c<<endl;
    cout<<"value of c before:  "<<*p<<endl;
    c=*p+5;
    cout<<"value of c after:  "<<c<<endl;
    cout<<"value of c after:  "<<*p<<endl;

    double k=10;
    double *ptr=&k;
    cout<<"size of k:  "<<sizeof(k)<<endl;
    cout<<"size of pointer:  "<<sizeof(ptr); 

    return 0;
}