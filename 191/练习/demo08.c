#include <stdio.h>
//求1到n的平方和
main()
{
	int n;
	int i;
	int sum = 0;
	printf("请输入n:");
	scanf("%d",&n);
for(i=1;i<=n;i++){
		sum+=i*i;//sum=sum+i*i;
		}
	printf("平方和为:%d\n",sum);
 } 
