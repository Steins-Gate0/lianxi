#include<stdio.h>

int main()
{
	int x = 1189;
	int y = 841;
	char n = 0;
	int i = 0;
	getchar();
	n = getchar()-48;
	for(i=0;i<n;i++)
	{
		if(x>y)x /= 2;else y /= 2;	
	}
	if(x>y) 
	{
		printf("%d\n",x);
		printf("%d\n",y);
	}else {
		printf("%d\n",y);
		printf("%d\n",x);
	}
	
	return 0 ;
}
//............................................
