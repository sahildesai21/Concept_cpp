// 
/*
if you are asigning the value to the normal varialbe using pointer var.. (ptr=x) then synatx will be: *pointer=&variable.
if you are asigning the value to the pointer varialbe using normal var.. (x=ptr) then synatx will be: variable=*pointer.
if you are asigning the value just to the pointer varialbe then synatx will be: *pointer=Value(No.).
if you are asigning the value just to the normal varialbe then synatx will be: varible=Value(No.): like normally asigning the value.
note: 1. While using/typeing the pointer varialbe always use with the star symbol: *pointer.

when to use pointer: 
1. If pointer arithmetic or passing a NULL pointer is needed. For example, for arrays (Note that accessing an array is implemented using pointer arithmetic).
2. To implement data structures like a linked list, a tree, etc. and their algorithms. This is so because, in order to point to different cells, we have to use the concept of pointers.  

*/
#include<iostream>
using namespace std;
int main()
{
    int x=10;
     cout<<"value of x = "<<x<<endl;        //just printing the value of x.
    
     int* ptr=&x;
     cout<<"value of ptr = "<<ptr<<endl;    //printing the Address of x variable by the ptr.

     *ptr=20;
     cout<<"value of x = "<<x<<endl;        //just printing the value of x after asigning the value by ptr.

     x=30;
     cout<<"value of ptr = "<<*ptr<<endl;   //printing the value of x variable by the ptr.

     x=40;
     x=*ptr;
     cout<<"value of x = "<<x<<endl;        //just printing the value of x.
     cout<<"value of x = "<<ptr<<endl;      //printing the Address of x variable by the ptr.
     cout<<"value of x = "<<*ptr<<endl;     //printing the value of x variable by the ptr.

    return 0;
};
