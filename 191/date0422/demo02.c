//����10����������������������ֵ 
#include<stdio.h>
main()
{
	int a[10], i, max;
	printf("����10���������ÿո�������\n");
	for(i=0; i<10; i++)
		scanf("%d", &a[i]);
	//����̨�������
	max=a[0];  //����Ϊ��һ���������� 
	for(i=1; i<10; i++)  //�������������κ�����max�Ƚϣ�
		if(a[i]>max)      //ֻҪ�������µ�����max�� ,
			max=a[i];       //max�͸��¡� 
	printf("������ֵ�� %d\n", max);

}
