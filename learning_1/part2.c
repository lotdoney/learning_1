#include "stdio.h"
#include "windows.h"
//任务一，static的用法：存储期
/*
int t; //仔细体会t和q不赋初值的区别，其实t是静态存储器的变量默认为0，那么q就不知道了，并且会报错
int main() 
{
	int q;
	
	for (int k=0;k<3;k++)
	{
	 	int i = 2;
		//static int i = 2;
		printf_s("%d", i++);
		printf_s("%d", t);
		printf_s("%d", q);
		
	}	
	system("pause");
	return 0;

}
*/

//任务二 查看一个数的二进制，八进制以及十六进制
//在这里明解C用于了比较严谨的方法，尽管核心代码就只有一句但是还是值得学习的



int contiune(char c[10]) 

{
	int k=0;
	printf_s("左移（0）还是右移（1）还是查看它的二进制（2）八进制（3）十六进制（4）：");
	do
	{
		c[k] = _getch();

	} while (k++, c[k - 1] != '\r');

	putchar('\n');
	return(k);

}



int main() 
{
	unsigned int x=0;
	char c[10] ;
	int k=0;
	puts("请输入一个非负数：");
	scanf_s("%u", &x);
	k=contiune(c);

	printf_s("%c", c[k - 2]);
	system("pause");
	return 0;
}
//计算位数的函数
int count_bits(unsigned int x)
{
	int count = 0;
	while (x)
	{
		if (x & 1U)
		{
			count++;
		}
		x >>= 1;
	}
	return (count);
}
//无符号整型
int int_bits()
{
	return (count_bits(~0U));
}