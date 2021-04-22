#include <stdio.h>
#include <math.h>
main()
{
	float a,b,c,p,s;
	printf("«Î ‰»Îabcµƒ÷µ:");
	scanf("%f%f%f\n",&a,&b,&c);
	p = (a+b+c)/2.0;
	s = sqrt(p*(p-a)*(p-b)*(p-c));
	printf("a=%7.2f,b=%7.2f,c=%7.2f,s=%7.2f",a,b,c,s);
}
