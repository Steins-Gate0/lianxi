#include<stdio.h>

//int main()
//{
//	int m = 0; //钱
//	int b = 0; // 汽水
//	int emp = 0;  //空瓶子
//	int num = 0;
//	
//	scanf("%d",&m);
//	b = m;
//	m -= m;				给钱一共可一喝多少瓶汽水（一瓶一块，俩空瓶换一瓶）			
//	num += b;
//	while(b>=2)
//	{
//		b -= 2;
//		b++;
//		num++;	
//
//	}
//	printf("一共%d",num);
//	
//}

//   ....................   

int main()
{
	int arr[] = {1,2,3,4,5,6,7,8,9};
	int i = 0;
	int sz = sizeof(arr)/sizeof(arr[0]);
	for(i=0;i<sz;i++)
	{
		if(arr[i]%2==0)//如果是偶数则换成奇数
		{
			int j = i+1;//从自身+1开始找
			for(;j<sz;j++)//找奇数
			{
				if(arr[j]%2==1)//找到后将其对换位置
				{
					int tmp = 0;                                //将一组数的奇数放在前面，偶数放在后面
					tmp = arr[j];
					arr[j] = arr[i];
					arr[i] = tmp;
					break;
				}
			}
			if(j==sz)
				break;
		}
	}
	for(i=0;i<sz;i++)
	{
		printf("%d",arr[i]);
	}
	
}