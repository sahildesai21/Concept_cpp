/*
instead of calling the the same function repeatdly( whenever we run the code or complie). 
inline function will replce the normal function code with inline function code in compile time(when run the code once). so, that 
only once the function will get complied and returns the value wherever function has been called.
NOTE: the will no change in the ouput.  
*/
#include<iostream>
using namespace std;
inline int product(int a,int b){
    return a*b;
}
int main()
{
    system("cls");
    int a,b;
    cout<<"Enter a and b: ";
    cin>>a>>b;
    cout<<"Product of a and b: "<<product(a,b)<<endl;
    cout<<"Product of a and b: "<<product(a,b)<<endl;
    cout<<"Product of a and b: "<<product(a,b)<<endl;
    cout<<"Product of a and b: "<<product(a,b)<<endl;
    cout<<"Product of a and b: "<<product(a,b)<<endl;
    cout<<"Product of a and b: "<<product(a,b)<<endl;
    cout<<"Product of a and b: "<<product(a,b)<<endl;
    cout<<"Product of a and b: "<<product(a,b)<<endl;
    cout<<"Product of a and b: "<<product(a,b)<<endl;
    cout<<"Product of a and b: "<<product(a,b)<<endl;
    cout<<"Product of a and b: "<<product(a,b)<<endl;
    cout<<"Product of a and b: "<<product(a,b)<<endl;
    cout<<"Product of a and b: "<<product(a,b)<<endl;
    cout<<"Product of a and b: "<<product(a,b)<<endl;
    cout<<"Product of a and b: "<<product(a,b)<<endl;

};