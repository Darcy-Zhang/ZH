//˳�����룬�������±������ĸ����֣�ֻ�轫�������С��������������������һ��Ȼ�󰤸���������з���ļ��ɡ� 
#include <stdio.h>
int main(void)
{
	int digit[10],result[50];
	int i;
	for(i=0;i<10;i++)
	{
		scanf("%d",&digit[i]);
	}
	for(i=0;i<10;i++)
	{
		if(i!=0&&digit[i]!=0)
		{
			
			result[0]=i;
			digit[i]--;
			break;
		}
	}
	int k=1;
	for(i=0;i<10;i++)
	{
		while(digit[i]!=0)
		{
		result[k]=i;
		k++;
		digit[i]--;
	}
	}
	for(i=0;i<k;i++)
	printf("%d",result[i]);
	return 0;
}
