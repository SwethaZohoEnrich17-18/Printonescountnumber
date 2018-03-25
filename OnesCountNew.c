#include <stdio.h>
void main()
{
    int n, ones, i;
    scanf("%d", &n);
    ones = 0;
    for(i=0; i<32; i++)
    {
        if(n & 1)
            ones++;
        n >>= 1;
    }
    printf("%d", ones);
}
