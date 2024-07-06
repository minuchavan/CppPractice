#include<iostream>
using namespace std;

int main()
{
    string str;
    cout<<"\n Enter your string ";
    cin>>str;
    cout<<"\n The string is : "<<str;
    str=str.append("technologies");
    cout<<"\n "<<str.length();
    cout<<"\n Changed string is : "<<str;
    for(int i=0 ;str[i]!='\0';i++)
        cout<<"\n "<<str[i];
    return 0;
}

/* Output:


 Enter your string minal

 The string is : minal
 17
 Changed string is : minaltechnologies
 m
 i
 n
 a
 l
 t
 e
 c
 h
 n
 o
 l
 o
 g
 i
 e
 s






*/
