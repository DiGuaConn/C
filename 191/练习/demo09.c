#include <stdio.h>
//编程题
//输入n,如果是正数,计算1到n的和
//如果是负数,计算-1到n的和
main()
{
	int n;
	int i;
	int sum = 0;
	scanf("%d",&n);
	if(n>0){
		for(i=1;i<=n;i++){
			sum+=i;
		}
	}else{
		for(i=-1;i>=n;i--){
			sum+=i;
		}
	}
	printf("和为%d\n",sum);
	
	
	
	
 } 
