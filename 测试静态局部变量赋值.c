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


/* 上面的代码会编译出错，报“initializer element is not constant”
  原因是存储在全局区的变量只能用常量来初始化，不能用变量，如 c=a+b error */
