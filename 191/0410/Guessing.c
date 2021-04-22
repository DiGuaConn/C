#include <stdio.h>
#include <math.h>
#include <stdlib.h>

main()
{
	int num = rand(); //1到1000
		int guess;
		do {
			printf("猜吧!");
			scanf("%d\n",&guess);
		
			if(guess==0) {
				break;
			}
			if(guess>num) {
				printf("太大了");
			}else if(guess<num){
				printf("太小了");
			}
		}while(guess!=num); //2
		if(guess==num) {
			printf("恭喜你，猜对了!");
		}else {
			printf("下次再来吧!");
		}
	
}
		
	//	System.out.println(num); //作弊
		
		//1)do.while语法 2)三要素 3)改错 4)退出/大小 5)恭喜/下次     
		
		
		 
