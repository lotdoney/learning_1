#include "stdio.h"
#include "windows.h"

/*
//任务1 ：逆向显示数字——————do while 应用
int main()
{
	int  put_num=0;
	
	int count=0;
	while (1)
	{
		
		do 
		{
			printf_s("请输入一个整数(0-1000000)：");
			scanf_s("%d", &put_num);
			//由于不知道输入的位数，那么我们下面直接使用do while来逆输出
		} while (put_num<0 ||put_num >1000000);
		
		printf_s("您输入的数字的逆序是：");
		do 
		{
			printf_s("%d", put_num % 10);
			put_num = put_num / 10;
			count++;
		} while (put_num>0);
		printf_s("\n位数是：%d位", count);
		printf_s("\n");
		
	}
	system("pause");
	return 0;

}
*/
/*
//任务二：do while 应用 输入非负两个整数计算之间的数之和（包括他俩）

int main()
{
	int puta = 0;
	int putb = 0;
	int count = 0 ;
	int sum = 0;
	do
	{
		printf_s("请输入第一个数:");
		scanf_s("%d", &puta);
		printf_s("请输入第二个数:");
		scanf_s("%d", &putb);
	} while (puta < 0 || putb < 0);
	count = abs(puta - putb);
	do 
	{
		sum = sum + puta;
		puta++;
		count--;
	} while (count>=0);
	printf_s("总和为：%d\n", sum);			
	
	system("pause");
	return 0;
}
*/

/*
//任务三：输入的数字求平均值和总和 while

int main() 
{
	int num1 = 0;
	int count = 1;
	int sum = 0;
	int temp = 0;
	printf_s("输入整数的个数是多少个：\n");
	scanf_s("%d", &num1);
	while (num1)
	{
		printf_s("N%d:", count);
		scanf_s("%d",&temp);
		sum +=temp;
		count++;
		num1--;
	}
	printf_s("sum :%d\n", sum);
	printf_s("ava: %.2f\n",(double)sum / (count-1));
	system("pause");
	return 0;
}
*/

/*
//任务四：for和while等结合的多重循环 
int main()
{
	int jude=0;
	int count = 0;
	int i;
	char str1[] = { 0 };
	char str2[] = "yes";
	do
	{
		do
		{
			printf_s("请输入一个非负整数：");
			scanf_s("%d", &jude);
		} while (jude < 0);

		for (i = 0; i < jude; i++)
		{
			putchar('*');
		}
		putchar('\n');
	
		printf_s("go on? yes or no :\n");
		scanf_s("%s", str1);
		if (strcmp(str1,str2) == 0)
		{
			count = 0;
		}
		else 
		{
			count = 1;
		}

	} while ( count == 0);

	return 0;
}
*/