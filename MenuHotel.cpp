#include<iostream>
using namespace std;

int main()
{
        int ch,ch2,Qn, total=0;
        do{
            cout<<"\n ~~~~~ Hotel Menu Card ~~~~~";
            cout<<"\n ";
            cout<<"\n| 1. Snacks Menu           |";
            cout<<"\n| 2. Cold Drinks           |";
            cout<<"\n| 3. Hot Drinks Menu       |";
            cout<<"\n| 4. Desert                |";
            cout<<"\n| 5. Get Bill              |";
            cout<<"\n|                          |";
            cout<<"\n Enter Your Choice :      ";
            cin>>ch;

            switch(ch)
            {
            case 1:
                do{
                    cout<<"\n ~~~~ Snacks Menu ~~~~ ";
                    cout<<"\n";
                    cout<<"\n 1. idli         25 RS";
                    cout<<"\n 2. Samosa       20 RS";
                    cout<<"\n 3. Vadapav      15 RS";
                    cout<<"\n 4. Kachori      20 RS";
                    cout<<"\n 5. Poha         25 RS";
                    cout<<"\n 6. Dabeli       20 RS";
                    cout<<"\n 7. Back to Main Menu         ";
                    cout<<"\n";
                    cout<<"\n Enter Your Choice ";
                    cin>>ch2;

                    switch(ch2)
                    {
                    case 1:
                        cout<<"\n Enter Your Quantity ";
                        cin>>Qn;
                        total=total +(Qn * 25);
                        break;
                    case 2:
                        cout<<"\n Enter Your Quantity ";
                        cin>>Qn;
                        total=total +(Qn * 20);
                        break;
                    case 3:
                        cout<<"\n Enter Your Quantity of Item ";
                        cin>>Qn;
                        total=total +(Qn * 15);
                        break;
                    case 4:
                        cout<<"\n Enter Your Quantity of item";
                        cin>>Qn;
                        total=total +(Qn * 20);
                        break;
                    case 5:
                        cout<<"\n Enter Your Quantity of Item ";
                        cin>>Qn;
                        total=total +(Qn * 25);
                        break;
                    case 6:
                        cout<<"\n Enter Your Quantity ";
                        cin>>Qn;
                        total=total +(Qn * 20);
                        break;
                    case 7:
                        break;
                    default:
                        cout<<"\n Anything Else ";
                        break;
                    }

                }while(ch2!=7);

           case 2:
               do{
                     cout<<"\n ~~~~ Cold Drinks Menu ~~~~ ";
                    cout<<"\n";
                    cout<<"\n 1. Coke         20 RS";
                    cout<<"\n 2. Sprite       25 RS";
                    cout<<"\n 3. Pepsi        15 RS";
                    cout<<"\n 4. red Bull     40 RS";
                    cout<<"\n 5. Lassi        25 RS";
                    cout<<"\n 6. Cold Coffee  40 RS";
                    cout<<"\n 7. Back to Main Menu         ";
                    cout<<"\n";
                    cout<<"\n Anything else you want : ";
                    cin>>ch2;

                    switch(ch2)
                    {
                    case 1:
                        cout<<"\n Enter Your Quantity ";
                        cin>>Qn;
                        total=total +(Qn * 20);
                        break;
                    case 2:
                        cout<<"\n Enter Your Quantity ";
                        cin>>Qn;
                        total=total +(Qn * 25);
                        break;
                    case 3:
                        cout<<"\n Enter Your Quantity of Item ";
                        cin>>Qn;
                        total=total +(Qn * 15);
                        break;
                    case 4:
                        cout<<"\n Enter Your Quantity of item";
                        cin>>Qn;
                        total=total +(Qn * 40);
                        break;
                    case 5:
                        cout<<"\n Enter Your Quantity of Item ";
                        cin>>Qn;
                        total=total +(Qn * 25);
                        break;
                    case 6:
                        cout<<"\n Enter Your Quantity ";
                        cin>>Qn;
                        total=total +(Qn * 40);
                        break;
                    case 7:
                        break;
                    default:
                        cout<<"\n Anything Else ";
                        break;
                    }
               }while(ch2!=7);

         case 3:
             do{
                 cout<<"\n ~~~~ Hot Drink Menu ~~~~ ";
                    cout<<"\n";
                    cout<<"\n 1. Tea          10 RS";
                    cout<<"\n 2. Coffee       20 RS";
                    cout<<"\n 3. HotChocolate 45 RS";
                    cout<<"\n 4. Back to Main Menu ";
                    cout<<"\n";
                    cout<<"\n Anything Else DO you want : ";
                    cin>>ch2;

                    switch(ch2)
                    {
                    case 1:
                        cout<<"\n Enter Your Quantity ";
                        cin>>Qn;
                        total=total +(Qn * 10);
                        break;
                    case 2:
                        cout<<"\n Enter Your Quantity ";
                        cin>>Qn;
                        total=total +(Qn * 20);
                        break;
                    case 3:
                        cout<<"\n Enter Your Quantity of Item ";
                        cin>>Qn;
                        total=total +(Qn * 45);
                        break;
                    case 4:
                        break;
                   default:
                        cout<<"\n Anything Else ";
                        break;
                    }
             }while(ch2!=4);
        case 4:
            do{
                 cout<<"\n ~~~~ Deserts Menu ~~~~ ";
                    cout<<"\n";
                    cout<<"\n 1. Ice Cream    25 RS";
                    cout<<"\n 2. GulabJamun   10 RS";
                    cout<<"\n 3. ras Malai    35 RS";
                    cout<<"\n 4. gajar halwa  40 RS";
                    cout<<"\n 5. Basundi       55 RS";
                    cout<<"\n 6. Back to Main Menu         ";
                    cout<<"\n";
                    cout<<"\n Enter Your Choice ";
                    cin>>ch2;

                    switch(ch2)
                    {
                    case 1:
                        cout<<"\n Enter Your Quantity ";
                        cin>>Qn;
                        total=total +(Qn * 25);
                        break;
                    case 2:
                        cout<<"\n Enter Your Quantity ";
                        cin>>Qn;
                        total=total +(Qn * 10);
                        break;
                    case 3:
                        cout<<"\n Enter Your Quantity of Item ";
                        cin>>Qn;
                        total=total +(Qn * 35);
                        break;
                    case 4:
                        cout<<"\n Enter Your Quantity of item";
                        cin>>Qn;
                        total=total +(Qn * 40);
                        break;
                    case 5:
                        cout<<"\n Enter Your Quantity of Item ";
                        cin>>Qn;
                        total=total +(Qn * 55);
                        break;
                    case 6:
                        break;
                    default:
                        cout<<"\n Anything Else ";
                        break;
            }
        }while(ch2!=6);
    case 5:
        cout<<"\n Total Bill  :"<<total;
        cout<<"\nThank You";
        }
    }while(ch!=5);


    return 0;
}
