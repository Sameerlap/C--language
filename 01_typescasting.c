#include<stdio.h>
int main()
{
    int a=50;
    float b=34.56;
    a=(int)b; // type casting mean covert one data type to another data types
    b=(float)a;
    printf("the value of b is %d\n",a);
    printf("the value of a is %f\n",b);
    return 0;
}