#include <stdio.h>
main(){
	int a,b;
	printf("输入一个三位数");
	scanf("%d\n",&a);
	 b = a%10;
	 printf("%d",b);
	 a = a/10;
	 b = a%10;
	 printf("%d",b);
	 a = a/10;
	 printf("%d\n",a);
	  
}
