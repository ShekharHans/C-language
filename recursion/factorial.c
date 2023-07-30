#include<stdio.h>
int factorial(int n){
    if (n==0)
    {
        return 1;
    }
    int output=factorial(n-1);
    int fact=output*n;
    return fact;
}
int main()
{
    int n;
    scanf("%d",&n);
    int output=factorial(n);
    printf("%d",output);
    return 0;
}