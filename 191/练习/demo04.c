#include <stdio.h>
#include <math.h>
//一元二次方程是否有解,有几个,分别是多少。
main()
{
	float a,b,c,x1,x2,delta;
	printf("请输入一元二次方程abc的值\n");//y=a*x^2+b*x+c
	scanf("%f,%f,%f",&a,&b,&c);
	delta = b*b-4*a*c;
	if(delta>0){
		printf("该方程有两个解:\n");
		x1 = (-b+sqrt(delta))/(2.0*a);
		x2 = (-b-sqrt(delta))/(2.0*a);
		printf("x1 = %f\n",x1);
		printf("x2 = %f\n",x2);
	 }else if(delta==0){
	 	printf("该方程有唯一的解: \n");
	 	x1 = (-b+sqrt(delta))/(2.0*a);
	 	x2 = x1;
	 	printf("x1 = %f\n",x1);
		printf("x2 = %f\n",x2);
	 }else printf("该方程无解! \n");
 } 
