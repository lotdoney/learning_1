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

/*
// 任务五，数组 ,建立班级成绩分布表10个人，0-60,60-80,80-90,90-100

#include "conio.h"
void login();
void loading();
void manager();
int main() 
{
   char use ;
	do 
	{
		login();
		loading();
		system("cls");
		
		puts(" *******************欢迎进入管理系统*********************");
		printf_s("开始使用请按i，返回登录界面请按q");//这里就简单意思一下，要是和实际的系统一样怕是有些难（需要使用多线程）
		use = _getch();
		if (use == 'q')
		{
			system("cls");
		}
	} while (use=='q');
	putchar('\n');
	manager();
	system("pause");
	return 0;
}

void login()
{
	//int test[5];
	// test[5] = { 0,0,0,1,2 };这样复制的方法是错误的 ,并且数组之间不可直接复制
	char hide;
	char str1[1000];
	char str2[5] = "yuan";
	int a[5];
	int jude = 0;
	char passwd;
	char pass[100];
	char pass1[100] = "3802380";
	int i = 0;
	printf_s("                            请输入用户名和登录密码\n");
	do
	{
		printf_s("请输入用户名：");
		scanf_s("%s", str1, 40);
		printf_s("请输入密码(按1不显示，按2显示)：");
		hide = _getch();//不显示的复制		
		if (hide == '1')
		{
			for (i = 0; i < 20; i++)
			{
				pass[i] = _getch(); //注意一下，vs里面使用的是_getch(),
				if (pass[i] == '\r') break;
				putchar('*');
			}
		}
		else
		{
			for (i = 0; i < 20; i++)
			{
				pass[i] = _getche(); //注意一下，vs里面使用的是_getch(),
				if (pass[i] == '\r') break;
				
			}

		}
		pass[i] = '\0'; //因为下面要进行字符串比较，所以要赋值一个结尾
		if (strcmp(str1, str2) == 0 && strcmp(pass1,pass) ==0 )
		{
			putchar('\n');
			puts("登录成功！");
			jude = 1;
		}
		else
		{
			putchar('\n');
			puts("用户名或密码错误，请重新登录！");
			jude = 0;
		}


	} while (!jude);

}

void loading() 
{
	printf_s("正在登录");
	for (int k=0;k<3;k++)
	{
		
		Sleep(500);
		printf_s("..");
	}
	
}

void manager() 
{
	int num = 0 ;
	int flag = 1;
	int k = 0;
	int grade[100] ;
	int fenbu[100] = { 0 };
	int i=0;
	int sum = 0;
do 
{
	printf_s("请输入班级学生人数：");
	scanf_s("%d", &num);
	if (num>=1 && num <=20)
	{
		flag = 1;
	}
	else
	{
		puts("范围为1-20");
		flag = 0;
	}
} while (!flag);

puts("请按照学号一次录入考试成绩");

for (; num > 0; num--)
{
	do
	{
		printf_s("%d号：", k+1);
		scanf_s("%d", &grade[k]);
		
		if (grade[k] < 0 || grade[k] > 100)
		{
			puts("输入错误！");
		}
		
	} while (grade[k] < 0 || grade[k] > 100);
	sum += grade[k];	
	fenbu[grade[k]/10]++; //比较有技巧的地方，可以避免麻烦的统计，让数组的标号作为有用的东西

	k++; //k++放在最后面的
}
printf_s("平均分是：%.2f\n",(double)sum/k);
puts("   分布图   ");
printf_s("100:");

for (i = 0; i < fenbu[10]; i++)
{
	putchar('*');
}
putchar('\n');

for (int i =9;i>0;i--) 
{
	printf_s("%d-%d:", i * 10, i * 10 + 9);
	for (int j=0;j<fenbu[i];j++)
	{
		putchar('*');
	
	}
	putchar('\n');
}

}
*/

/*
 //任务六，计算两个矩阵的积

void putit();
void calcu();

	int o = 0;
	int p = 0;
	int t = 0;
	int u = 0;
	int a[100][100] = { 0 };
	int b[100][100] = { 0 };
	int c[100][100] = { 0 };

int main() 

{
	
	putit( );
	calcu( );
	
	system("pause");
	return 0;

}

void putit() 
{
	
	do
	{
		puts("请输入第一个矩阵是几行几列的：");
		printf_s("行:");
		scanf_s("%d", &o);
		printf_s("列:");
		scanf_s("%d", &p);
		if (0 < 0 || p < 0)
		{
			printf_s("输入错误！");
		}

	} while (0 < 0 || p < 0);

	do
	{
		puts("请输入第二个矩阵是几行几列的：");
		printf_s("行:");
		scanf_s("%d", &t);
		printf_s("列:");
		scanf_s("%d", &u);
		if (0 < 0 || p < 0)
		{
			printf_s("输入错误！");
		}
		if (p != t)
		{
			puts("矩阵的运算都不懂吗？要行列一样才可计算");
		}

	} while (0 < 0 || p < 0 || p != t);

	puts("第一个矩阵：");
	for (int j = 0; j < o; j++)
	{
		printf_s("请输入第%d行", j + 1);
		for (int i = 0; i < p; i++)
		{
			scanf_s("%d", &a[j][i]);
		}
	}
	puts("第二个矩阵：");
	for (int j = 0; j < t; j++)
	{
		printf_s("请输入第%d行", j + 1);
		for (int i = 0; i < u; i++)
		{
			scanf_s("%d", &b[j][i]);
		}
	}

	puts("第一个矩阵：");
	for (int j = 0; j < o; j++)
	{
		
		for (int i = 0; i < p; i++)
		{
			printf_s("%d ", a[j][i]);
		}
		putchar('\n');
	}
	puts("您输入的第二个矩阵是：");
	for (int j = 0; j < t; j++)
	{
		
		for (int i = 0; i < u; i++)
		{
			printf_s("%d ", b[j][i]);
		}
		putchar('\n');
	}


}

void calcu() 
{

	for (int i =0;i<o;i++)
	{
		for (int j=0;j<u;j++)
		{
			for (int k = 0; k < t; k++)
			{
				c[i][j] += a[i][k] * b[k][j];	
			}		
		}	
	}
	
	for (int j = 0; j < o; j++)
	{

		for (int i = 0; i < u; i++)
		{
			printf_s("%d ", c[j][i]);
		}
		putchar('\n');
	}


} */


/*
//任务七，用尽可能计算次数少的方法来找出1000以内的质数
//方法一，就是按照规则来
/*int main() 
{
	int a[1000] = { 0 };
	int count = 0;
	int i = 1;
  unsigned	long count1 = 0;
	for (int num=2;num<=1000;num++)
		  {
		  for (i =2;i<num;i++)
		  {
			  count1++;
			  if ( num % i == 0 )
			  {
				  break;
			  }
			
		  }
		 if (num ==i)
		 {
			 a[count] = num;
			 count++;
		 }
		  }
	for (int i=0;i<count;i++) 
	{
		printf_s("%d\n", a[i]);
	}
	printf("计算了：%d次", count1);
	system("pause");
	return 0;
} */

//方法二 ，除了2以外的偶数可以排除的，并且奇数不需要除以偶数
/*
int main() 
{
	int a[1000] = { 0 };
	int count = 0;
	int count1 = 0;
	int num = 2;
	int i = 3;
	printf("%d\n", num++);

	for (;num<=1000;num+=2)
	{
		for (i =3;i<num;i+=2)
		{
			count1++;
			if (num%i==0)
			{
				break;
			}

		}
		if (num ==i)
		{
			a[count] = num;
			count++;
		}
	}

	for (int j = 0; j < count; j++)
	{
		printf_s("%d\n", a[j]);
	}
	printf("计算了：%d次", count1);
	system("pause");
	return 0;

}
*/

//方法三，比如，一个数不能被3整除，就没有必要看能不能被3的倍数整除，所以我们不用
//一直除以奇数，除以质数就可以了
/*
int main()
{
	int a[1000] = { 0 };
	int count = 0;
	int i = 1;
	unsigned long count1 = 0;

	a[count++] = 2;
	a[count++] = 3;
	for (int num = 5; num <= 1000; num+=2)
	{
		for (i = 1; i <count ; i++)
		{
			count1++;
			if (num % a[i] == 0)
			{
				break;
			}

		}
		if (count == i)
		{
			a[count++] = num;	
		}
	}
	for (int i = 0; i < count; i++)
	{
		printf_s("%d\n", a[i]);
	}
	printf("计算了：%d次", count1);
	system("pause");
	return 0;
}
*/

//方法四，我尽量解释一下，要是解释不明白可以去参考《明解C语言初级篇》这本书的120页
/*
int main()
{
	int a[1000] ;
	int count = 0;
	int i = 1;
	unsigned long count1 = 0;
	
	a[count++] = 2;
	a[count++] = 3;
	for (int num = 5; num <= 1000; num += 2)
	{
		int flag = 0;
		for (i = 1; count1++,a[i]*a[i] <= num; i++)//这也算计算量的
		{
			count1++;
			if (num % a[i] == 0)
			{
				flag = 1;
				break;
			}
			
		}
		if (flag == 0)
		{
			a[count++] = num;
		}
	}
	for (int i = 0; i < count; i++)
	{
		printf_s("%d\n", a[i]);
	}
	printf("计算了：%d次", count1);
	system("pause");
	return 0;
}
*/

//任务八，使用函数让代码更加的整洁，输入一个数逆向输出
/*
int scan_unit( )
{
	int num;

	do 
	{
		puts("请输入一个数字（0-100000）：");
		scanf_s("%d", &num);

	} while (num <0 ||num>100000);

	return (num);
}

int resver(int k) 
{
	int temp =0 ;
	while (k > 0) 
	{
		temp = temp * 10 + k % 10; //逆向转化固定式子
		k = k / 10;
	}
	
	return(temp);

}



int main( ) 
{ 
	int no;

	no = scan_unit();
	printf_s("%d", resver(no));
	system("pause");
	return 0;
}
*/

//任务九 数组的传递函数 ,只需要传递数组名,并且不需要所谓的返回值，因为当输入数组时就已经改变了

/*
int eng[5] = { 0 };
int math[5] = { 0 };

void scan_unit() 
{
	extern int eng[5];
	extern int  math[5];

	printf_s("请输出英语和数学成绩：\n");
	for (int i=0;i<5;i++)
	{
		do 
		{
			printf_s("[%d]", i + 1);
			printf_s("英语：");
			scanf_s("%d", &eng[i]);
			printf_s("   数学：");
			scanf_s("%d", &math[i]);
		} while (eng[i]<0||eng[i]>100||math[i]<0||math[i]>100);
	
	}
	

}


int maxof( const int vc[], int no)   //int maxof(int *vc ,int no) ,为了防止在函数内更改，所以加个const
{

	int max = 0;
	for (int  i = 0; i < no; i++)
	{
		if (vc[i]>max)
		{
			max = vc[i];
		}

	}

	return (max);
}

int main() 
{
	scan_unit();
	
	printf_s("eng max:%d", maxof(eng, 5));
	printf_s("eng max:%d", maxof(math, 5));

	
	system("pause");
	return 0;

}
*/

//任务十 哨兵查找法 ，大致意思放到要查找的数字到末尾，一定能找到再比较就可以
/*
int searchs(int vc[], int key, int no)
{
	int i = 0;
	vc[no] = key;
	i = no;
	no = 0;

	while (vc[no] != key)
	{
		no++;
	}

	return(no == i ? -1 : no); //比较简单的判断用一下

}

int main()
{
	int no[5];
	int flag;
	for (int i = 0; i < 5; i++)
	{
		printf_s("输入%d:", i + 1);
		scanf_s("%d", &no[i]);
	}

	flag = searchs(no, 50, 5);
	if (flag == -1)
	{
		printf_s("no\n");
	}
	else
	{
		printf_s("find it ! %d", no[flag]);
	}


	system("pause");
	return 0;
}

*/
//练习，因为千万的练习比较简单就没怎写6-10
/*
int calcu(const int a[2][3],const int b[3][4],int c[2][4]) 
{
	for (int i=0;i<2;i++)
	{
		for (int k=0;k<4;k++)
		{
			for (int d=0;d<3;d++)
			{
			 c[i][k]+=a[i][d] * b[d][k];
			}
		}
	}
}*/
//6-11 学生成绩处理
/*
int grade1[5][3];

void scan_unit();
void maxof(int vc[5][3],int va[3]);

void avarage(int ac[5][3], double av[5]);


int main() 
{
	extern int grade1[5][3];
	int maxfen[3] = { 0 };
	double ava[5] = { 0 };
	scan_unit();
	maxof(grade1,maxfen);
	avarage(grade1, ava);
	for (int k = 0; k < 3; k++)
	{
		printf_s("%d\n", maxfen[k]);
	}

	for (int i=0;i<5;i++)
	{
		printf_s("第%d个同学：", i + 1);
		printf_s("%.2f", ava[i]);
		putchar('\n');
	}



	system("pause");
	return 0;

}

void scan_unit()
{
	extern int grade1[5][3];

	for (int i = 0; i < 5; i++)
	{
		printf_s("请输入第%d个学生的成绩：\n", i + 1);
		for (int j = 0; j < 3; j++)
		{
			do
			{
				if (j == 0)
				{
					printf_s("语文：");
				}
				else if (j == 1)
				{
					printf_s("数学：");
				}
				else if (j == 2)
				{
					printf_s("英语：");
				}
				scanf_s("%d", &grade1[i][j]);
				if (grade1[i][j] < 0 || grade1[i][j]>100)
				{
					printf_s("请重新输入第%d个学生的成绩：\n", i + 1);
				}
			} while (grade1[i][j] < 0 || grade1[i][j]>100);

		}
	}


}
void  maxof(int vc[5][3],int va[3])
{

	
	for (int i=0;i<3;i++)
	{
		for (int j=0;j<5;j++)
		{
			if (vc[j][i]>va[i])
			{
				va[i] = vc[j][i];
			}
		
		}
	}

	puts("语数外最高分：");

}
void avarage(int ac[5][3], double av[5])
{

	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			av[i] += ac[i][j];
		}
		av[i] = av[i] / 3;
	}

}
*/