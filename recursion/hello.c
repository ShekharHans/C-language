#include<stdio.h>
void hello(int n){
    if (n==0)
    {
        return;
    }
    if (n>=1)
    {
        
    printf("Hello World\n");
    }
    hello(n-1);
    
}
int main()
{
    int n=5;
    hello(n);
    return 0;
}