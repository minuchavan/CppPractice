#include<iostream>
using namespace std;
int main()
{
    int arr[10]={10,12,13,43,56,32,89,65,23,55};
    int sum=0;
    float avg;
    for(int i=0 ; i<10 ; i++)
    {
        sum=sum+arr[i];
    }
    avg=sum/10.0;
    cout<<"\n Sum of Array is : "<<sum;
    cout<<"\n Avg of Array is : "<<avg;
    return 0;
}
