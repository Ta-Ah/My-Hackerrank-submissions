#include<bits/stdc++.h>

int main()
{
    int n, i, rslt=0;
    scanf("%d", &n);

    int arr[n];
    for (i=0; i<n; i++)
    {
        scanf("%d", &arr[i]);
    }
    
    for (i=0; i<n; i++)
    {
        rslt = rslt^arr[i];
    }
    printf("%d\n", rslt);
}