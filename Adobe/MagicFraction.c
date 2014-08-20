#include <stdio.h>
#include "Math.h"
int main()
{
    int sum=0;
    int flag =0;
    int t;
    int x,y;
    int squrt;
    int s[100];
    scanf("%d",&t);
    int loop=1;
    while(loop<=t)
    {
    	scanf("%d",&x);
    	scanf("%d",&y);
        sum=0;
    	for (int i=x;i<=y;i++)
    	{
    		squrt=sqrt(i);
            if (squrt == 1)
                sum++;
            else
            {
    		for (int j = 2 ; j <= squrt;j++)
    		{
                
    			if(i %(j*j)!=0)
                    flag=1;
                else
                {
                    flag=0; 
                    break;
                }           
    		}
        }
            if (flag ==1)
                sum++;
    	}
    s[loop]=sum;	
    loop++;
    }

    for (int i=1 ;i<=t ;i++ )
    printf("%d\n",s[i]);
    return 0;
}
