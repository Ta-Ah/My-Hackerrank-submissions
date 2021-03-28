#include <stdio.h>
int main()
{
    int l, r, xor, max = 0, ptr = 0;
    scanf("%d %d", &l, &r);

    xor = l ^ r;
    while (xor)
    {
        max = max + (1 << ptr);
        xor = xor >> 1;
        ptr++;
    }
    printf("%d\n", max);
}