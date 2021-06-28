/**Write a program to find the given number is 2 power or not.**/
#include<stdio.h>
int main()
{
    int num;
    printf("enter the number\n");
    scanf("%d",&num);
    if(num&&(!(num&(num-1))))
    {
        printf("power of 2");
    }
    else{
        printf("its not");
    }
}

#if 0
num=61
power of 2
#endif // 0
