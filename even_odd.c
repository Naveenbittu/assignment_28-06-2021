/**Write a program with Macro to find even or odd using bitwise operator**/
#include<stdio.h>
#define num 0x7
int main()
{
    if((num&1)==1)
    {
        printf("number is odd\n");
    }
    else
    {
        printf("number is even\n");
    }
}
#if 0
number is odd
#endif // 0
