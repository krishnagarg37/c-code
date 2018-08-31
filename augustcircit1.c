#include<stdio.h>
#include<math.h>
void main()
{
     int t;
     scanf("%d",&t);
     while(t--)
     {
          long long int d,a,m,b,x;
          scanf("%lld%lld%lld%lld%lld",&d,&a,&m,&b,&x);
          
          if (d >= x)
                  printf("0\n");
    
          else
                {
                  long long int result,temp,rem;
                    result = (x -d) / ((a * m) + b);
                   
                    temp = result * ((a *m) +b);
                     
                    result *= m + 1L;
    
                    rem = x -d;
                    
                    if (temp != 0)
                    rem = (x - d) % temp;
                    if (rem == 0)
                      printf("%lld\n",result);
 
                    else
                    printf("%lld\n",result +(long)ceil((rem /(double)a)));
 
                 }
 
        }
}
