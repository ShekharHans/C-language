#include<stdio.h>

int main()
{
    int num;
    int num1,num2;
    scanf("%d%d",&num1,&num2); //to taking input from user we use scanf function
    int add=num1+num2;
    int sub=num1-num2;
    int mul=num1*num2;
    int div=num1/num2;
    int reminder=num1%num2;
    printf("%d\n",add);
    printf("%d\n",sub);
    printf("%d\n",mul);
    printf("%d\n",div);
    printf("%d\n",reminder);
    return 0;
}