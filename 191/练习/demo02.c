#include <stdio.h>
//2.判断一个非0整数是否为3的倍数





main()
{
	int a;
	printf("输入一个整数: \n");
	scanf("%d",&a);
	if(a%3==0)
	printf("%d是3的倍数",a);
	else
	printf("%d不是3的倍数",a);
} 
