#include "stdio.h"
#include "windows.h"
//����һ��static���÷����洢��
/*
int t; //��ϸ���t��q������ֵ��������ʵt�Ǿ�̬�洢���ı���Ĭ��Ϊ0����ôq�Ͳ�֪���ˣ����һᱨ��
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

//����� �鿴һ�����Ķ����ƣ��˽����Լ�ʮ������
//����������C�����˱Ƚ��Ͻ��ķ��������ܺ��Ĵ����ֻ��һ�䵫�ǻ���ֵ��ѧϰ��

int count_bits(unsigned int x);
int contiune(char c[10]);
int put_bits(unsigned int x, unsigned int n);

int main() 
{
	unsigned int x=0;
	char c[10] ;
	int k;
	puts("������һ���Ǹ�����");
	scanf_s("%u", &x);
	k=contiune(c);
	if (c[k-2]=='0')
	{
		printf_s("%d", x>>2);
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
		putchar(((x >> i)&1U) ? '\1' : '0');
		
	}


}

//����λ���ĺ���
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
//�޷�������
int int_bits()
{
	return (count_bits(~0U));
}
//ѡ���ĸ�����
int contiune(char c[10])

{
	int k = 0;
	printf_s("���ƣ�0���������ƣ�1�����ǲ鿴���Ķ����ƣ�2���˽��ƣ�3��ʮ�����ƣ�4����");
	do
	{
		c[k] = _getch();

	} while (k++, c[k - 1] != '\r');

	putchar('\n');
	return(k);

}