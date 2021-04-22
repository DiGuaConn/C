#include <stdio.h>
main()
{
	int num;
	printf("请输入数字 :");
	scanf("%d",&num);
	switch(num)
	{
		case 1:
			printf("111");
			break;
			
		case 2://以此为入口
			printf("222");
			break;//跳出switch
			
		case 3:
			printf("333");
			break;
			
		default: //所有case都未匹配时执行
			printf("000");
	}
}
