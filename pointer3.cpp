// pointer  array

#include<iostream>
using namespace std;
  
int main()
{
    int arr[10]={5,8};
    cout<<"addres of 0 index:  "<<arr<<endl;
    cout<<"addres of 0 index:  "<<&arr[0]<<endl;
    int *p=&arr[1];
    cout<<"first:  "<<p<<endl;
    cout<<"second:  "<<*p<<endl;
    // cout<<"second:  "<<*p[2]<<endl;

    cout<<"before:  "<<p<<endl;
    cout<<"before:  "<<*p<<endl;
    *p=*p +2;
    arr[1]=arr[1]+2;
    cout<<"after:  "<<p<<endl;
    cout<<"after:  "<<*p<<endl;

    int array[10] {12,13,18};
    cout<<"----> "<<array<<endl;
    cout<<"----> "<<*array<<endl;
    cout<<"----> "<<*array +1<<endl;
    cout<<"----> "<<array[2]<<endl; // array[i]==*(array+i)
    cout<<"----> "<<*(array +2)<<endl;

    cout<<"----> "<<1[array]<<endl;


    
    return 0;
}