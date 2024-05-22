//Code for typecasting: typecasting is used to change the datatype of the variable 
#include<iostream>
using namespace std;
int main()
{
    float n=22.22;
    cout<<"The value of n is: "<<int(n)<<endl;
    cout<<"The value of n is: "<<(int)n<<endl;
    cout<<"The value of n is: "<<float(n)<<endl;

    int a= int(n);
    cout<<"The value of n is: "<<(int)a<<endl;
    cout<<"The value of n is: "<<float(a)<<endl;
    return 0;
};