#include <stdio.h>
//��Сд��ĸ����
main()
{
	char c;
	scanf("%c",&c); 
	if((c>='A')&&(c<='Z')){
		c+=32;
	}else if((c>='a')&&(c<='z')){
		c-=32;
	}else{
	printf("���ַ�������ĸ\n");
	}
	printf("%c\n",c);
 } 
