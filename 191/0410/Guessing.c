#include <stdio.h>
#include <math.h>
#include <stdlib.h>

main()
{
	int num = rand(); //1��1000
		int guess;
		do {
			printf("�°�!");
			scanf("%d\n",&guess);
		
			if(guess==0) {
				break;
			}
			if(guess>num) {
				printf("̫����");
			}else if(guess<num){
				printf("̫С��");
			}
		}while(guess!=num); //2
		if(guess==num) {
			printf("��ϲ�㣬�¶���!");
		}else {
			printf("�´�������!");
		}
	
}
		
	//	System.out.println(num); //����
		
		//1)do.while�﷨ 2)��Ҫ�� 3)�Ĵ� 4)�˳�/��С 5)��ϲ/�´�     
		
		
		 
