#include "stdio.h"
#include "windows.h"
#include "conio.h"
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
	puts("������һ���Ǹ�����");
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
		printf_s("%04X", x);//Xʮ�����ƴ�д��xСд
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
		c[k] = _getche();

	} while (k++, c[k - 1] != '\r');

	putchar('\n');
	return(k);

}

*/
//������ �����͵���ʶ
/*
int main() 
{
	float x = 0;
//���Ա�һ�£��������������ڵ�һ��֮�����Ƿ��ֻ�������Ϊ�ڶ������ͻ���ʧ
//��Ϊ��������ܱ�֤���ڲ�ת��Ϊ������������λû��������ѭ��������Ҫ�Ը�����Ϊ��׼
	for (x=0;x<=1.0;x+=0.01)
	{
		printf_s("%f\n", x);
	}
	for (int i = 0; i <= 100; i++)
	{
		x = i / 100;
		printf_s("%f\n", x);
	}
//���䣺sizeof(a)/sizeof(a[0])�Ǽ������鳤�ȵķ���
	system("pause");
	return 0;

}
*/

//������ ����ʽ��
/*
#define  sqr(x) ((x)*(x)) //���Ե�����������,sqr()���������һ��
//�����ŵ�ԭ����Ϊ�˱�֤���ȼ�����֤���������
#define  diff(x,y) ((x>y)?(x-y):(y-x)) //��������֮��
#define swap(type,x,y)  do{type t; t = x; x = y; y = t;}while (0)//����������
#define alrt(str)    {putchar('\a');puts(str);} //������������õ��Ƕ������������
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

//������ ö��
/*
enum player {messi=1,neymar,hazard ,invalid}; //�������ñ�����1��ʼ����

void Messi() 
{
	puts("����͢�����˶�Ա������˾ְǰ�棬żȻ���������г���ʵ������ֵ94");
}

void Neymar()
{
	puts("���������˶�Ա������˾ְǰ�棬�ڰ�����ʱ��һ�ȳ�Ϊ÷�޺�ĵ����ˣ�ʵ������ֵ94");
}

void Hazard()
{
	puts("����ʱ�����˶�Ա������˾ְ��߷棬�̴���ɧ��ǿ��ʵ������ֵ90");
}

enum  player  select(void)
{
	int tmp;
	tmp = 1;
	do
	{
		if (tmp<messi || tmp>invalid)
		{
			puts("�����������������!");
		}	
		printf_s("���˽��Ǹ������˶�Ա�������1 Msesi 2 Neymar 3 Hazard 4 ����:");
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

//������ �ݹ� �ݹ���ô��ܴ����������˽�һ�� ���ݹ���Ǵ����ıȽϼ�൫�ǻ����Ӹ��Ӷ�

