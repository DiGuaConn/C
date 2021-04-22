#include <stdio.h>
//求数列2/1+3/2+5/3+8/5+13/8.......前20项之和
main()
{
	double a = 1.0;
	double b = 2.0;
	double c; 
	double sum = 0.0;
	int n;
	for(n=1;n<=20;n++){
		c = a+b;
		sum = sum+b/a;
		a=b;
		b=c;
	}
	printf("%1f",sum);
 } 
