#include <stdio.h>
//3.输入一个整数，判断是否为水仙花数(又称阿姆斯特朗数)
main(){
	int i,j,k,n;
	scanf("%d",&n);
	if(n>=100&&n<=999){//水仙花数都是三位数
	i=n/100%10;//分解出百位 
	j=n/10%10;//分解出十位 
	k=n%10; //分解出个位 
	if(n==i*i*i+j*j*j+k*k*k)
	printf("%d是水仙花数",n);
	else printf("该数不是水仙花数");
	} 
	else printf("该数不是3位数,不是水仙花数"); 

	 
} 
