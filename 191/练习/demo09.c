#include <stdio.h>
//�����
//����n,���������,����1��n�ĺ�
//����Ǹ���,����-1��n�ĺ�
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
	printf("��Ϊ%d\n",sum);
	
	
	
	
 } 
