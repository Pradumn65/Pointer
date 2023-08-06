//pointer array with function

#include<iostream>
using namespace std;
int sum(int *arr,int size)
{
    int sum=0;
    for (int i=0;i<size; i++)
    {
        sum+=*(arr+i);

    }
    return sum;
}

 int getsum(int arr[],int size)
{
    int sum=0;
    for (int i=0;i<size; i++)
    {
        sum+=arr[i];

    }
    return sum;
} 
int main()
{
    int arr[10]={1,2,3,4,5};
    cout<<"total sum:   "<<sum(arr,5)<<endl;
    cout<<"total sum:   "<<getsum(arr,5)<<endl;
    // we can also send the specific part of array as parameter 
    cout<<"total sum:   "<<sum(arr+2,3)<<endl;
    return 0;
}


  
