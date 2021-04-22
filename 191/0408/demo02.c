#include <stdio.h>
main()
{
	char a,b,c;
	printf("ÇëÊäÈëÈı¸ö×Ö·û:");
	a = getchar(); 
	b = getchar(); 
	c = getchar(); 
	printf("%5c%5c%5c\n",a,b,c);
	printf("%5d%5d%5d\n",a,b,c);
	putchar(c);
	putchar(b);
	putchar(a);
	
}

