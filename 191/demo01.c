#include <stdio.h>
#define PI 3.14
main ()
{ int r;
   float h;double v;
   printf("������Բ����ĸ�:");
   scanf("%f",&h);
   for(r=1;r<=10;r++)
   { v=PI*r*r*h;
     if(v>100.0)  break;
     printf("�뾶���� %d,������� %.2f  \n",r,v);
   }
     printf("��ʱr=%d\n",r);
	 getch(); 
 } 
