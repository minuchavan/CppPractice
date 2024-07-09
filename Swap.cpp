#include<iostream>
using namespace std;

 void swap_byAddress(int *a, int *b)
{
    int temp;
    temp =*a;
    *a=*b;
    *b=temp;

}
void swap_byref(int &a,int &b)
{
    int temp;
    temp=a;
    a=b;
    b=temp;
}
int main()
{
    int num1=75;
    int num2=45;

    swap_byAddress(&num1, &num2);
    cout<<"\n num1 ="<<num1<<" num2 ="<<num2;

    swap_byref(num1, num2);
     cout<<"\n num1 ="<<num1<<" num2 ="<<num2;
     return 0;
}


