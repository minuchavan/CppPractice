#include<iostream>
using namespace std;
int main()
{
    int num,i;
    cout<<"\n Enter Number : ";
    cin>>num;
    for( i=1; i*i<=num ; i++)
    {
        if((i*i)==num)
        {
             cout<<"\n The number is perfect Square ";
             break;
        }
    }
     if((i*i)!=num)
        {
          cout<<"\n not a perfect square ";
        }

    return 0;
}
