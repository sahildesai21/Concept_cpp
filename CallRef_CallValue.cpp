/*
when to use pointer: 
1. If pointer arithmetic or passing a NULL pointer is needed. For example, for arrays (Note that accessing an array is implemented using pointer arithmetic).
2. To implement data structures like a linked list, a tree, etc. and their algorithms. This is so because, in order to point to different cells, we have to use the concept of pointers.  

When to use refereance:
In function parameters and return types.
*/
#include<iostream>
using namespace std;
void swapbyCall_By_Value(int x,int y){     //Call by Value
    int temp=x;                            //here it will just copy/pass the value to the function 
    x=y;                                
    y=temp;
}

void swapbyCall_by_Ref_1(int *x,int *y){    //call by Refereance method 2 (using pointer concept)
    int temp=*x;                            //here it will copy,pass and also store the address of the variable to the function  
    *x=*y;                   
    *y=temp;
}

void swapbyCall_by_Ref_2(int &x,int &y){   //Call by reference method 1 (using primary refeance concept)
    int temp=x;                             //here it will copy/pass the address of the value to the function 
    x=y;
    y=temp;
}
int main()
{
    system("cls");
    int a=5,b=10;
    cout<<"Call by Value: before swap a="<<a<<" b="<<b<<endl;
    swapbyCall_By_Value(a,b);
    cout<<"Call by Value: after swap a="<<a<<" b="<<b<<endl<<endl;     //Output will not get changed

    cout<<"Call by Ref by method 1: before swap a="<<a<<" b="<<b<<endl;
    swapbyCall_by_Ref_1(&a,&b);
    cout<<"Call by Ref by method 1: after swap a="<<a<<" b="<<b<<endl<<endl;    //Output will get changed
    
    cout<<"Call by Ref by method 2: before swap a="<<a<<" b="<<b<<endl;
    swapbyCall_by_Ref_2(a,b); //can be also written as (&a,&b)
    cout<<"Call by Ref by method 2: after swap a="<<a<<" b="<<b<<endl<<endl;    //Output will get changed
    return 0;
};
