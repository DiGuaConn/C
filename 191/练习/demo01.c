#include <stdio.h>
//1.输入年份，判断该年为平年闰年。
main() {
	int a;
	printf("输入位数年份: \n");
	scanf("%d",&a);
	if(a%4==0&&a%100!=0 ||a%400==0)
	printf("%d是闰年",a);
	else
	printf("%d是平年",a);
} 
