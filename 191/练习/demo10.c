#include <stdio.h>
//编程题
//输出21行字符,奇数行输出3个*号 偶数行输出5个&号



main()
{
	int i;
	for(i=1;i<=21;i++){
		if(i%2==1){
			//奇数行
			printf("***\n"); 
		}else{
			//偶数行
			printf("&&&&&\n"); 
		}
	}
 } 
