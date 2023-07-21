#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int returntotbill(void);
    int totamount=returntotbill();
    cout<<"Your total bill amount is"<<totamount<<endl;
    cout<<"Thank you for your order , Do visit again ! "<<endl;
    return 0;

}
int returntotbill()
{
    char ch;
    char item;
    char veg;
    char nonveg;
    int billamount;
    char selectagain;
    cout<<endl;
    cout<<endl;
    cout<<"----------Welcome to Online Food Order----------"<<endl;
    cout<<"--------Please follow below instructions--------"<<endl<<endl;
    cout<<"Step 1 : Please press 's' to start your order"<<endl<<endl;
    cout<<"Step 2 : You can order both veg and non-veg items"<<endl<<endl;
    cout<<"Step 3 : Press 'a' to select veg item"<<endl;
    cout<<"Step 4 : Press 'b' to select non-veg item"<<endl;
    cout<<"Step 5 : You will get your bill after your order"<<endl;
    start:
    cin>>ch;
    if(ch=='s' || ch=='S')
    {
        items:
        cout<<"Please select your choice : "<<endl;
        cout<<"(a) Veg item              (b)Nong-veg item"<<endl;
        cin>>item;
        if(item=='a' || item=='A')
        {
            cout<<"Please Press 1,2,3,4,5 according to your choice "<<endl;
            cout<<"(1)Paneer Tikka : price = Rs-250"<<endl;
            cout<<"(2)Veg pizza : price = Rs-200"<<endl;
            cout<<"(3)Veg chowmein : price = Rs-150"<<endl;
            cout<<"(4)Veg spring roll : price = Rs-200"<<endl;
            cout<<"(5)Veg roll: price = Rs-200"<<endl;
           vegitemlist:
            cin>>veg;
            if(veg=='1')
            {
                billamount+=250;
            }
            else if(veg=='2')
            {
                billamount+=200;
            }
            else if(veg=='3')
            {
                billamount+=150;
            }
            else if(veg=='4')
            {
                billamount+=200;
            }
            else if(veg=='5')
            {
                billamount+=200;
            }
            else{
                cout<<"Please enter a valid option"<<endl;
                goto vegitemlist;
            }

            cout<<"Do you want to add more items yes(y) or no(n) :"<<endl;
            cin>>selectagain;
            if(selectagain=='y' || selectagain=='Y')
            {
                goto items;

            }
            else{
                return billamount; 
            }

        }
        else if(item=='b' || item=='B')
        {
            cout<<"Please Press 1,2,3,4,5 according to your choice "<<endl;
            cout<<"(1)Chicken : price = Rs-350"<<endl;
            cout<<"(2)Non veg pizza  : price = Rs-300"<<endl;
            cout<<"(3)Non veg Burger : price = Rs-350"<<endl;
            cout<<"(4)Non veg spring roll : price = Rs-300"<<endl;
            cout<<"(5)Non veg roll: price = Rs-300"<<endl;
           nonvegitemlist:
            cin>>nonveg;
            if(nonveg=='1')
            {
                billamount+=350;
            }
            else if(nonveg=='2')
            {
                billamount+=300;
            }
            else if(nonveg=='3')
            {
                billamount+=350;
            }
            else if(nonveg=='4')
            {
                billamount+=300;
            }
            else if(nonveg=='5')
            {
                billamount+=300;
            }
            else{
                cout<<"Please enter a valid option"<<endl;
                goto nonvegitemlist;
            }

            cout<<"Do you want to add more items yes(y) or no(n) :"<<endl;
            cin>>selectagain;
            if(selectagain=='y' || selectagain=='Y')
            {
                goto items;

            }
            else{
                return billamount; 
            }
        }
        else{
            cout<<"Please enter a valid option !"<<endl;
            goto items;
        }


    }
    else{
        cout<<"You have entered a wrong value, press s !"<<endl;
        goto start;
    }
    return billamount;
}