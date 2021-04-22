#include <stdio.h>
//´óÐ¡Ð´×ÖÄ¸»¥»»
main()
{
	char c;
	scanf("%c",&c); 
	if((c>='A')&&(c<='Z')){
		c+=32;
	}else if((c>='a')&&(c<='z')){
		c-=32;
	}else{
	printf("¸Ã×Ö·û²»ÊÇ×ÖÄ¸\n");
	}
	printf("%c\n",c);
 } 
