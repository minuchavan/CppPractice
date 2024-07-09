#include<iostream>
using namespace std;
int main()
{
    int i,j,k,l;
    for(i=0 ; i< 5 ; i++)
    {
        cout<<"\n";
        for(j=i ; j< 5; j++)
        {
            cout<<"*";
        }
        for(k=0; k<(i*2)+1; k++)
        {
            cout<< " ";
        }
        for(l=i; l<5 ; l++)
        {
            cout<<"*";
        }
    }
    return 0;
}
/*
output=
***** *****
****   ****
***     ***
**       **
*         *

*/
