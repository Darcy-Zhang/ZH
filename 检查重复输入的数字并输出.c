#include <stdio.h>
#define true 1
#define false 0
typedef int bool; 
int main(void)
{
	bool digitseen[10] = {false};//���ò���ʽȫ����Ϊfalse 
	int digit;
	long n;//��ȷ��������ʲô���� ,Ϊlong���� 
	
	printf("�������ݣ�");
	scanf("%ld", &n);
	while (n > 0)
	{
	   	digit = n % 10;//ȡ�࣬�ҵ���λ���� �����ż������ʵ�֡� 
	   	if (digitseen[digit])
	   	break;
	   	digitseen[digit]=true; //��¼״̬��������ֹ��� 
	   	n /= 10;//�Ƶ���һλ���� 
	}
	if(n>0)
	 printf("�ظ��������ǣ�%ld", digit);
	else
	 printf("û���ظ������֡�"); 
	 return 0;
	
 } 
