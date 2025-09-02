/*
3*x/y – z+k, where x=2, y=3, z=3, k=1
Explain  the precedence of operator in the above expression.
3*x/y – z+k, where x=2, y=3, z=3, k=1    |  left to right associativity
3*2/3 - 3+1                              |   6/3-3+1
6/3 - 3+1                                |   2-3+1
2 - 3+1                                  |   -1+1 
2 - 4                                    |   0
-2                                       |   this is the final answer with right medhod
this is wrong method 
*/
#include<stdio.h>
int main()
{
    int x=2,y=3,z=3,k=1;
    int result=3*x/y - z + k;
    printf("the result is %d\n",result);
    return 0;
}