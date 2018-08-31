#include <stdio.h>
 
#define Max(a, b) (a > b ? a : b)
 
int main()
{
    int t, n, i, total, current, max, l;
    scanf("%d", &t);
    
    while(t--)
    {
        scanf("%d", &n);
        
        char knights[n + 1];
        scanf("%s", &knights);
        
        total = 0;
        for (i = 0; i < n; i++)
        {
            if (knights[i] == 'K') { total++; }
        }
        
        current = 0;
        for (i = 0; i < total; i++)
        {
            if (knights[i] == 'K') { current++; }
        }
        
        max = current;
        l = n + total;
        for ( ; i < l; i++)
        {
            if (knights[i % n] == 'K') { current++; }
            if (knights[i - total] == 'K') { current--; }
            max = Max(max, current);
        }
        
        printf("%d\n", total - max);
    }
}
