#include<stdio.h>
void percentage (float sci,float math,float sans){
    float totalPer=((sci+math+sans)/3);
    printf("%f\n",totalPer);

}
int main()
{
    float sci,math,sans;
    scanf("%f%f%f",&sci,&math,&sans);
    percentage(sci,math,sans);
    return 0;
}