// (c*1.8)+32=f 
#include<stdio.h>
void convert(float c){
    float fer=c*(9.0/5.0)+32;
    printf("%f",fer);
}
int main()
{
    float c;
    scanf("%f",&c);
    convert(c);
    // printf("%f",output);
    return 0;
}