#include<stdio.h>
 
int func (int n)
{
 static int x =0;// static variables in recursion
 if(n>0)
 {
 x++;
 return func(n-1)+ x ;
 }
 return 0;

}

int y = 0; //using global variable
int fun(int n){
    
    if(n>0){
        y++;
        return fun(n-1) +y;
    }
    return 0;
}
int main()
{
 int a = 5;
 printf("Using static variable : %d\n", func(a));
 printf("Using Global variable : %d\n", fun(a));
}