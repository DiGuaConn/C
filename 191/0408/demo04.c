#include <stdio.h>
main(){
	int a,b;
	printf("����һ����λ��");
	scanf("%d\n",&a);
	 b = a%10;
	 printf("%d",b);
	 a = a/10;
	 b = a%10;
	 printf("%d",b);
	 a = a/10;
	 printf("%d\n",a);
	  
}
