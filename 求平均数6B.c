#include <stdio.h>
int main(void)
{
	int n,i;
	scanf("%d",&n);
	float sum=0;//��float������int 
	float result;
	for(i=0;i<n;i++)
	{
		int a[20];
		scanf("%d",&a[i]);
		sum+=a[i];
	}
	result=sum/n;//��������������������������ҲΪ������С������ʡ�ԡ�����������һ��ΪС���������ΪС���� 
	printf("%.2f",result);
	return 0;
}
