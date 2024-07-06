#include<iostream>
using namespace std;
int main()
{
    string str;
    cout<<"\n Enter String : ";
    cin>>str;
    cout<<"\n The Enter String is : "<<str;

    str="Technologies";
    cout<<"\n Changed string is : "<<str;
    for(int i=0 ;str[i]!='\0';i++)
        cout<<"\n "<<str[i];
    return 0;


}
//OUTPUT OF PROGRAM :
// Enter String : Minal

// The Enter String is : Minal
 //Changed string is : Technologies
 //T
 //e
 //c
 //h
 //n
 //o
 //l
 //o
 //g
 //i
 //e
 //s


