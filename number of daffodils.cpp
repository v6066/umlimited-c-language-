#include<stdio.h>
int main()
{
	int hand=0;
	int in=0;
	int end=0;
	for(int i=100;i<1000;++i)
	{
		hand=i/100;
		in=(i-(hand*100))/10;
		end=i%10;
		hand=(hand*hand*hand);
		in=(in*in*in);
		end=(end*end*end);
		if(i==(hand+in+end))
		{
			printf("三位水仙花数:%d\n",i);
		}
	}
	getchar();
	return 0;
 } 
