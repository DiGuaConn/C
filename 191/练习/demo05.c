#include <stdio.h>
//判断输入的为大写字母还是小写字母,或者其他。
main()
{
	char x;
	scanf("%c",&x);
	if(x>='A'&&x<='Z') 
	printf("%c为大写",x);
	else if(x>='a'&&x<='z')
	printf("%c为小写",x);
	else
	printf("其他"); 
	 	
 } 
