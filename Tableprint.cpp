#include<iostream>
using namespace std;

int main()
{
    int n,m,i,j;
    cout<<"\n Enter range of Number : ";
    cin>>n;
    cin>>m;
    for(i=n; i<=m ;i++)
    {
        cout<<"\n";
        for(j=1; j<=10 ; j++)
        {
            cout<<" -> "<<i*j;

        }
    }
    return 0;
}
