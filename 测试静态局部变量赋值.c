#include <stdio.h>

int a = 1,b = 2;
int c = a+b;
 
int my(int a)
{
	static int count = a;
	
	return count+a;
}

int main()
{
	printf("%d\n%d\n", my(4), my(5));
	
	return 0;
}


/* ����Ĵ��������������initializer element is not constant��
  ԭ���Ǵ洢��ȫ�����ı���ֻ���ó�������ʼ���������ñ������� c=a+b error */
