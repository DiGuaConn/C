#include <stdio.h>
#include <math.h>
#define PI 3.1415926

main()
{
	float x;
	printf("����һ���Ƕ���:  ");
	scanf("%f",&x);
	printf("������Ϊ: %7.1f\n",sin(x*PI*180));
}
