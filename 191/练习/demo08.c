#include <stdio.h>
//��1��n��ƽ����
main()
{
	int n;
	int i;
	int sum = 0;
	printf("������n:");
	scanf("%d",&n);
for(i=1;i<=n;i++){
		sum+=i*i;//sum=sum+i*i;
		}
	printf("ƽ����Ϊ:%d\n",sum);
 } 
