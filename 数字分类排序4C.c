#include <stdio.h>
#include <string.h>
#include <stdlib.h>
void sort(int a[],int n)//��С�������� 
{
  int i,j,t;
  for(i=0;i<n-1;i++)
   for(j=0;j<n-1-i;j++)
     if(a[j]>a[j+1])
       {t=a[j];
    a[j]=a[j+1];
    a[j+1]=t;
    }
}
int main(void)
{
	int i,n;
	scanf("%d",&n);
	getchar();
	for(i=0;i<n;i++)
	{
		int k,x,m;
		m=0;
		int a[20]={0};
		int b[20]={0};
        int d;
		int cnt=0;
		while(1)
		{
		scanf("%d",&x);
		int d=getchar();
		a[cnt]=x;
		cnt++;
		if(d=='\n')
        break;}
		//��������Ԫ��
		for(k=0;k<cnt;k++)
		{
			if((a[k]%2)!=0)//�ж������е�Ԫ���Ƿ�Ϊ���� 
			{
				b[m]=a[k];
				m++;//��ԭ�����е�������ֵ����һ�������� 
			}
		}
		int q;
		sort(b,m);
		for(q=0;q<m;q++)
		printf("%d ",b[q]);
		int p,e;
		e=0;
		int c[20];
		for(p=0;p<cnt;p++)
		{
			if(a[p]%2==0)//�ж������е�Ԫ���Ƿ�Ϊż�� 
			{
				c[e]=a[p];
				e++;//��ԭ�����ż����ֵ����һ�������� 
			}
		}
		int t;
		sort(c,e);
		for(t=0;t<e-1;t++)
		printf("%d ",c[t]);
		printf("%d\n",c[e-1]);//�����˸����з������֡��������Ѹ��oj 
		}
		return 0;
}
