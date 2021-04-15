#include <stdio.h>
#include <string.h>

int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int del = 0, i;
        char st[100000];
        scanf("%s", &st);

        for (i = 0; i < strlen(st) - 1; i++)
        {
            if (st[i] == st[i + 1])
                del++;
            else
                continue;
        }
        printf("%d\n", del);
    }
}
