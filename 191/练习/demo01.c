#include <stdio.h>
//1.������ݣ��жϸ���Ϊƽ�����ꡣ
main() {
	int a;
	printf("����λ�����: \n");
	scanf("%d",&a);
	if(a%4==0&&a%100!=0 ||a%400==0)
	printf("%d������",a);
	else
	printf("%d��ƽ��",a);
} 
