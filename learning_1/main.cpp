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