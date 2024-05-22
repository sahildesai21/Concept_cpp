#include<iostream>
using namespace std;
int main()
{
    system("cls");
    int n=7;
    int* s;

    s= &n;
    
    // printimg the value of n 
    cout<<"value of n: "<<n<<endl;

    // printing the address the of n which is stored in s
    cout<<"adddress of n: "<<s<<endl;
    
    // printing the value the of n which is stored in s
    cout<<"value of *s: "<<*s<<endl;
    
    return 0;
};