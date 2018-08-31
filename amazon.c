#include<stdio.h>

int max(int a,int b)
{
	 return(a>b?a:b);
}
int lcm(int a,int b)
{
	
	if(b%a==0)
	  return b;
	else
	{
	int i=2;
	int lcm;
   while(1)
   {
   	 int l=b*i;
   	 if(l%a==0)
   	    return l;
   	 i++;
   }
  }
}
void main()
{
	int ha=7,hb=9;
	int c=0;
    int ma=max(ha,hb);
    if(ma==hb)
    {
    	int lc=lcm(ha,hb);
      	if(lc==hb)
    	{
    		c=lc/ha;
    		c=c-1;
    		printf("c=%d",c);
		}
		else
		{
			int t1=ha;
			hb=(lc/hb)*hb;//20
			ha=(lc/hb)*ha;//8
			c=lc/hb;//2
			c=c-1;//1
			c=c+(hb-ha)/t1;//1+3=4
			printf("c=%d",c);			
		}
    	
	}
	else
	{
	 	int lc=lcm(hb,ha);
    	if(lc==ha)
    	{
    		c=lc/hb;
    		c=c-1;
     		printf("c=%d",c);
		}
		else
		{
			int t1=hb;
			hb=(lc/ha)*hb;//20
			ha=(lc/ha)*ha;//8
			c=lc/ha;//2
			c=c-1;//1
			c=c+(ha-hb)/t1;//1+3=4
			printf("c=%d",c);			
		}
}}
