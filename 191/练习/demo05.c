#include <stdio.h>
//�ж������Ϊ��д��ĸ����Сд��ĸ,����������
main()
{
	char x;
	scanf("%c",&x);
	if(x>='A'&&x<='Z') 
	printf("%cΪ��д",x);
	else if(x>='a'&&x<='z')
	printf("%cΪСд",x);
	else
	printf("����"); 
	 	
 } 
