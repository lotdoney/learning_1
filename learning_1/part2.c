#include "stdio.h"
#include "windows.h"
#include "conio.h"
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
/*
int count_bits(unsigned int x);
int contiune(char c[10]);
int put_bits(unsigned int x, unsigned int n);
int int_bits();

int main() 
{
	unsigned int x=0;
	char c[10] ;
	int k;
	puts("请输入一个非负数：");
	scanf_s("%u", &x);
	k=contiune(c);
	if (c[k-2]=='0')
	{
		printf_s("%d", x>>1);
	}
	else if (c[k - 2] == '1')
	{
		printf_s("%d", x << 1);
	}
	else if (c[k - 2] == '2')
	{
		put_bits(x,16);
	}
	else if (c[k - 2] == '3')
	{
		printf_s("%06o", x);
	}
	else if (c[k - 2] == '4')
	{
		printf_s("%04X", x);//X十六进制大写，x小写
	}

	system("pause");
	return 0;
}

int put_bits(unsigned int x,unsigned int n) 
{
	int i = int_bits();
	i = (n > i) ? i - 1 : n - 1;

	for (;i>=0;i--)
	{
		putchar(((x >> i)&1U) ? '1' : '0');
	}
	putchar('\n');

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
//选择哪个函数
int contiune(char c[10])
{
	int k = 0;
	printf_s("右移（0）还是左移（1）还是查看它的二进制（2）八进制（3）十六进制（4）：");
	do
	{
		c[k] = _getche();

	} while (k++, c[k - 1] != '\r');

	putchar('\n');
	return(k);

}

*/
//任务三 浮点型的认识
/*
int main() 
{
	float x = 0;
//来对比一下，这两个的区别，在第一个之中我们发现会有误差，改为第二个误差就会消失
//因为计算机不能保证其内部转换为浮点数二进制位没有误差，所以循环变量不要以浮点数为基准
	for (x=0;x<=1.0;x+=0.01)
	{
		printf_s("%f\n", x);
	}
	for (int i = 0; i <= 100; i++)
	{
		x = i / 100;
		printf_s("%f\n", x);
	}
//补充：sizeof(a)/sizeof(a[0])是计算数组长度的方法
	system("pause");
	return 0;

}
*/

//任务四 函数式宏
/*
#define  sqr(x) ((x)*(x)) //可以当做函数来用,sqr()必须紧紧在一起
//加括号的原因是为了保证优先级，保证最函数的意义
#define  diff(x,y) ((x>y)?(x-y):(y-x)) //计算两数之差
#define swap(type,x,y)  do{type t; t = x; x = y; y = t;}while (0)//交换两个数
#define alrt(str)    {putchar('\a');puts(str);} //这个明解里面用的是逗号运算符如下
#define alt(str)  (putchar('\a'),puts(str))

int main() 
{
	int x = 2;
	int y = 0;
	int i = 0;
	int test[4] = { 0 };
	printf_s("%d\n", sqr(x));
	for (i = 0; i < 2; i++)
	{
		scanf_s("%d",&test[i]);
	}
	printf_s("%d\n", diff(test[0],test[1]));
	swap(int , x, y);
	printf_s("%d,%d",x,y );
	if (i == 0)
	//	alrt("hello word")
		alt("hello word");
	else
	//	alrt("yuan")
		alt("yuan");
	system("pause");
	return 0;
}
*/

//任务五 枚举
/*
enum player {messi=1,neymar,hazard ,invalid}; //这样会让变量从1开始计数

void Messi() 
{
	puts("阿根廷足球运动员，场上司职前锋，偶然可以踢踢中场，实况能力值94");
}

void Neymar()
{
	puts("巴西足球运动员，场上司职前锋，在巴萨的时候一度成为梅罗后的第三人，实况能力值94");
}

void Hazard()
{
	puts("比利时足球运动员，场上司职左边锋，盘带很骚很强，实况能力值90");
}

enum  player  select(void)
{
	int tmp;
	tmp = 1;
	do
	{
		if (tmp<messi || tmp>invalid)
		{
			puts("输入错误请重新输入!");
		}	
		printf_s("想了解那个足球运动员的情况：1 Msesi 2 Neymar 3 Hazard 4 结束:");
		scanf_s("%d", &tmp);
	}while (tmp<messi||tmp>invalid);
	return(tmp);
}

int chance() 
{
	int tmpe=1;
	return(tmpe);
}

int main() 
{
	enum player selected;
	do
	{	
		
		switch (selected=select())
		{
		case messi:Messi();
			break;
		case neymar:Neymar();
			break;
		case hazard:Hazard();
			break;
		}
	} while (selected != invalid);
	system("pause");
	return 0;
}
*/

//任务六 递归 递归的用处很大，这里先行了解一下 ，递归会是代码变的比较简洁但是会增加复杂度

