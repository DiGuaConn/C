#include <stdio.h>
main()
{
	int num;
	printf("���������� :");
	scanf("%d",&num);
	switch(num)
	{
		case 1:
			printf("111");
			break;
			
		case 2://�Դ�Ϊ���
			printf("222");
			break;//����switch
			
		case 3:
			printf("333");
			break;
			
		default: //����case��δƥ��ʱִ��
			printf("000");
	}
}
