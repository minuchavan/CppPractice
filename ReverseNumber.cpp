#include<iostream>
using namespace std;
int main()
{
    int rev_num=0,rem,num;
    cout<<"\n enter a number ";
    cin>>num;
    while(num>0)
    {
        rem=num%10;
        rev_num=rev_num*10 +rem;
        num=num/10;
    }
    cout<<"\n Reverse number is : "<<rev_num;
    return 0;
}
