#include <stdio.h>
main(){
	int score;
	printf("������ɼ� :");
	scanf("%d",&score);
	if(score<0 || score>100)
		printf("�ɼ����Ϸ�!");
	else if(score>=90)
		printf("A-����");
	else if(score>=80)
		printf("B-����");
	else if(score>=60)
		printf("C-�е�");
	else 
		printf("D-������");
		 
}
