#include <stdio.h>
#include <math.h>
int main()
{
    int q;
    scanf("%d", &q);
    while (q--)
    {
        long long int n, rslt;
        scanf("%lld", &n);

        rslt = (pow(2, 32) - 1) - n;
        printf("%lld\n", rslt);
    }
}
