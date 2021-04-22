#include <stdio.h>
main(){
	int score;
	printf("请输入成绩 :");
	scanf("%d",&score);
	if(score<0 || score>100)
		printf("成绩不合法!");
	else if(score>=90)
		printf("A-优秀");
	else if(score>=80)
		printf("B-良好");
	else if(score>=60)
		printf("C-中等");
	else 
		printf("D-不及格");
		 
}
