#include<stdio.h>
int sum(int n){
    if (n==0)
    {
        return 0;
    }
    int sumNum1=sum(n-1);
    int sumN=sumNum1+n;
    return sumN;
}
int main()
{
    int n;
    scanf("%d",&n);
    int output=sum(n);
    printf("%d",output);
    return 0;
}