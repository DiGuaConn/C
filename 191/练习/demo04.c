#include <stdio.h>
#include <math.h>
//һԪ���η����Ƿ��н�,�м���,�ֱ��Ƕ��١�
main()
{
	float a,b,c,x1,x2,delta;
	printf("������һԪ���η���abc��ֵ\n");//y=a*x^2+b*x+c
	scanf("%f,%f,%f",&a,&b,&c);
	delta = b*b-4*a*c;
	if(delta>0){
		printf("�÷�����������:\n");
		x1 = (-b+sqrt(delta))/(2.0*a);
		x2 = (-b-sqrt(delta))/(2.0*a);
		printf("x1 = %f\n",x1);
		printf("x2 = %f\n",x2);
	 }else if(delta==0){
	 	printf("�÷�����Ψһ�Ľ�: \n");
	 	x1 = (-b+sqrt(delta))/(2.0*a);
	 	x2 = x1;
	 	printf("x1 = %f\n",x1);
		printf("x2 = %f\n",x2);
	 }else printf("�÷����޽�! \n");
 } 
