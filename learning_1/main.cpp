#include "stdio.h"
#include "windows.h"

/*
//����1 ��������ʾ���֡�����������do while Ӧ��
int main()
{
	int  put_num=0;
	
	int count=0;
	while (1)
	{
		
		do 
		{
			printf_s("������һ������(0-1000000)��");
			scanf_s("%d", &put_num);
			//���ڲ�֪�������λ������ô��������ֱ��ʹ��do while�������
		} while (put_num<0 ||put_num >1000000);
		
		printf_s("����������ֵ������ǣ�");
		do 
		{
			printf_s("%d", put_num % 10);
			put_num = put_num / 10;
			count++;
		} while (put_num>0);
		printf_s("\nλ���ǣ�%dλ", count);
		printf_s("\n");
		
	}
	system("pause");
	return 0;

}
*/
/*
//�������do while Ӧ�� ����Ǹ�������������֮�����֮�ͣ�����������

int main()
{
	int puta = 0;
	int putb = 0;
	int count = 0 ;
	int sum = 0;
	do
	{
		printf_s("�������һ����:");
		scanf_s("%d", &puta);
		printf_s("������ڶ�����:");
		scanf_s("%d", &putb);
	} while (puta < 0 || putb < 0);
	count = abs(puta - putb);
	do 
	{
		sum = sum + puta;
		puta++;
		count--;
	} while (count>=0);
	printf_s("�ܺ�Ϊ��%d\n", sum);			
	
	system("pause");
	return 0;
}
*/

/*
//�������������������ƽ��ֵ���ܺ� while

int main() 
{
	int num1 = 0;
	int count = 1;
	int sum = 0;
	int temp = 0;
	printf_s("���������ĸ����Ƕ��ٸ���\n");
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
//�����ģ�for��while�Ƚ�ϵĶ���ѭ�� 
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
			printf_s("������һ���Ǹ�������");
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
// �����壬���� ,�����༶�ɼ��ֲ���10���ˣ�0-60,60-80,80-90,90-100

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
		
		puts(" *******************��ӭ�������ϵͳ*********************");
		printf_s("��ʼʹ���밴i�����ص�¼�����밴q");//����ͼ���˼һ�£�Ҫ�Ǻ�ʵ�ʵ�ϵͳһ��������Щ�ѣ���Ҫʹ�ö��̣߳�
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
	// test[5] = { 0,0,0,1,2 };�������Ƶķ����Ǵ���� ,��������֮�䲻��ֱ�Ӹ���
	char hide;
	char str1[1000];
	char str2[5] = "yuan";
	int a[5];
	int jude = 0;
	char passwd;
	char pass[100];
	char pass1[100] = "3802380";
	int i = 0;
	printf_s("                            �������û����͵�¼����\n");
	do
	{
		printf_s("�������û�����");
		scanf_s("%s", str1, 40);
		printf_s("����������(��1����ʾ����2��ʾ)��");
		hide = _getch();//����ʾ�ĸ���		
		if (hide == '1')
		{
			for (i = 0; i < 20; i++)
			{
				pass[i] = _getch(); //ע��һ�£�vs����ʹ�õ���_getch(),
				if (pass[i] == '\r') break;
				putchar('*');
			}
		}
		else
		{
			for (i = 0; i < 20; i++)
			{
				pass[i] = _getche(); //ע��һ�£�vs����ʹ�õ���_getch(),
				if (pass[i] == '\r') break;
				
			}

		}
		pass[i] = '\0'; //��Ϊ����Ҫ�����ַ����Ƚϣ�����Ҫ��ֵһ����β
		if (strcmp(str1, str2) == 0 && strcmp(pass1,pass) ==0 )
		{
			putchar('\n');
			puts("��¼�ɹ���");
			jude = 1;
		}
		else
		{
			putchar('\n');
			puts("�û�����������������µ�¼��");
			jude = 0;
		}


	} while (!jude);

}

void loading() 
{
	printf_s("���ڵ�¼");
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
	printf_s("������༶ѧ��������");
	scanf_s("%d", &num);
	if (num>=1 && num <=20)
	{
		flag = 1;
	}
	else
	{
		puts("��ΧΪ1-20");
		flag = 0;
	}
} while (!flag);

puts("�밴��ѧ��һ��¼�뿼�Գɼ�");

for (; num > 0; num--)
{
	do
	{
		printf_s("%d�ţ�", k+1);
		scanf_s("%d", &grade[k]);
		
		if (grade[k] < 0 || grade[k] > 100)
		{
			puts("�������");
		}
		
	} while (grade[k] < 0 || grade[k] > 100);
	sum += grade[k];	
	fenbu[grade[k]/10]++; //�Ƚ��м��ɵĵط������Ա����鷳��ͳ�ƣ�������ı����Ϊ���õĶ���

	k++; //k++����������
}
printf_s("ƽ�����ǣ�%.2f\n",(double)sum/k);
puts("   �ֲ�ͼ   ");
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
 //��������������������Ļ�

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
		puts("�������һ�������Ǽ��м��еģ�");
		printf_s("��:");
		scanf_s("%d", &o);
		printf_s("��:");
		scanf_s("%d", &p);
		if (0 < 0 || p < 0)
		{
			printf_s("�������");
		}

	} while (0 < 0 || p < 0);

	do
	{
		puts("������ڶ��������Ǽ��м��еģ�");
		printf_s("��:");
		scanf_s("%d", &t);
		printf_s("��:");
		scanf_s("%d", &u);
		if (0 < 0 || p < 0)
		{
			printf_s("�������");
		}
		if (p != t)
		{
			puts("��������㶼������Ҫ����һ���ſɼ���");
		}

	} while (0 < 0 || p < 0 || p != t);

	puts("��һ������");
	for (int j = 0; j < o; j++)
	{
		printf_s("�������%d��", j + 1);
		for (int i = 0; i < p; i++)
		{
			scanf_s("%d", &a[j][i]);
		}
	}
	puts("�ڶ�������");
	for (int j = 0; j < t; j++)
	{
		printf_s("�������%d��", j + 1);
		for (int i = 0; i < u; i++)
		{
			scanf_s("%d", &b[j][i]);
		}
	}

	puts("��һ������");
	for (int j = 0; j < o; j++)
	{
		
		for (int i = 0; i < p; i++)
		{
			printf_s("%d ", a[j][i]);
		}
		putchar('\n');
	}
	puts("������ĵڶ��������ǣ�");
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

//�����ߣ��þ����ܼ�������ٵķ������ҳ�1000���ڵ�����
//����һ�����ǰ��չ�����
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
	printf("�����ˣ�%d��", count1);
	system("pause");
	return 0;
} */

//������ ������2�����ż�������ų��ģ�������������Ҫ����ż��
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
	printf("�����ˣ�%d��", count1);
	system("pause");
	return 0;

}
*/

//�����������磬һ�������ܱ�3��������û�б�Ҫ���ܲ��ܱ�3�ı����������������ǲ���
//һֱ�������������������Ϳ�����
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
	printf("�����ˣ�%d��", count1);
	system("pause");
	return 0;
}
*/

//�����ģ��Ҿ�������һ�£�Ҫ�ǽ��Ͳ����׿���ȥ�ο�������C���Գ���ƪ���Ȿ���120ҳ
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
		for (i = 1; count1++,a[i]*a[i] <= num; i++)//��Ҳ���������
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
	printf("�����ˣ�%d��", count1);
	system("pause");
	return 0;
}
*/

int main( ) 
{



	system("pause");
	return 0;
}