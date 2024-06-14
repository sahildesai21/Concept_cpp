#include<iostream>
using namespace std;
int main()
{
    int x=10;
    cout<<"the value of x: "<<x<<endl;

    int& ref= x;        //passes the Address of x to the ref.
    
    ref=20;
    cout<<"the value of x: "<<x<<endl;      //changing the value of ref and this changes the value of x.

    x=30;
    cout<<"the value of ref: "<<ref<<endl;      //changing the value of x and this changes the value of ref.

    return 0;
};