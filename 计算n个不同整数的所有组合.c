#include <stdio.h>
 int c(int a[200],int b[200],int n,int len)//a[]Ϊ�������ݺ���������b[]��ʾ�߹����ݺ�ı�ǣ�n��ʾ�߹������ݳ��ȣ�len��ʾ�ܹ������ݳ��� 
 {
     int k;
	 if(n==len)//�ݹ飬���߹��ĳ��ȵ��������ܳ���ʱ�������� 
	 {
	 	printf("--> ");
	 	for(k=0;k<len;k++)
	 	 if(b[k]==1)//��ʾ�߹� 
		  printf("%d ",a[k]);
		  printf("\n");
		return;//�з���ֵ����ʾ���� 
		 }	
	
	 b[n]=1;//����߹���Ϊ1 
	 c(a,b,n+1,len);//�ٷ���ȥ����ԭ���ĺ��� 
	 b[n]=0;
	 c(a,b,n+1,len);
	}
int main()
{
	int a[200],b[200],i,len;
	scanf("%d",&len);//���֣������ַ��ͣ�����%s����%d�� 
	for(i=0;i<len;i++)
	{
		scanf("%d",&a[i]);//ע��д�� 
	}
	c(a,b,0,len);
}
