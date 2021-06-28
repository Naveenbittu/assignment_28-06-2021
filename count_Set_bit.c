/**Write a program to count set bits.**/
#include<stdio.h>
#define num 0x12345678

int main()
{
   // unsigned int num;
    int count=0;
    int i;
    for(i=0;i<32;i++)
    {
        if((num>>i)&0x1)
            count++;

    }
    printf("count=%d\n",count);
}
#if 0
count=13
#endif // 0
