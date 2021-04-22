#include <stdio.h> 
#include <math.h>
//输入一个正数x,求x的平方根 
main()//主函数 
{
	float x;
	double y;
	printf("input x:");
	scanf("%f",&x);
	y = sqrt(x);
	printf("sqrt(%-7.2f)=%7.2f \n",x,y);
}
