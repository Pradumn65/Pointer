// poointer with function

#include<iostream>
using namespace std;
void print(int *p){
    cout<<"--->"<<p<<endl;
    cout<<"--->"<<*p<<endl; 
    
}

void update(int *p)
{
    // p=p+1;
    *p=*p+1;
}
  
int main()
{
    int a=5;
    int *p=&a;
    print(p);
    print(&a);

    
    cout<<"before  "<<*p<<endl;
    update(p);
    
    cout<<"after  "<<*p<<endl;
  


    
    return 0;
}