#include <stdio.h>

int getOddOccurrence(int ar[], int ar_size)
{
    int res = 0;
    for (int i = 0; i < ar_size; i++)
        res = res ^ ar[i];

    return res;
}

int main()
{
    int ar[] = {2, 3, 5, 4, 5, 2, 4, 3, 5, 2, 4, 4, 2};
    int n = sizeof(ar) / sizeof(ar[0]);

   printf("odd_num=%d", getOddOccurrence(ar, n));
    return 0;
}
#if 0
odd_num=5
#endif // 0
