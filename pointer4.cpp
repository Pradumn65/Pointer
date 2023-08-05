// pointer in character array
#include<iostream>
using namespace std;
  
int main()
{
    int arr[10]={5,8,10};
    char ch[10]="abcde";

    cout<<arr<<endl;
    cout<<ch<<endl;
    char *c=&ch[0];
    // print entire string
    cout<<c<<endl;

    return 0;
}