/*��ͬ��Ԫ��
����:����һ���������飬ͳ�Ʋ�ͬ��Ԫ�صĸ�����
����:ÿ������ռһ�У�ÿ�ȸ���������n����30���������n���������Կո�ָ���
���:���ռһ��,�Իس������������ͬ��Ԫ�صĸ�����*/
#include <stdio.h>
#include <string.h>
int main(void)
{
    
    
        int n, i;
        while(scanf("%d",&n)!=EOF)//while���治�ܸ��ֺţ����� 
        {                         //�̶�д����·  û�й涨д���ٸ� û�й涨���� 
		if(n<=30)
        {int digit[100];
        for(i=0; i<n; i++)
        {
            scanf("%d",&digit[i]);
        }
        /*int j,len;
        len=n;
        for(i=0; i<n; i++)
        {
            for(j=i+1; j<n; j++)
            {
                if(digit[j]==digit[i])
                {
                    len--;
                }
            }
        }
        printf("%d\n",len);*/
        int j,temp;
        for(i=0; i<n-1; i++)
            for(j=0; j<n-1-i; j++)
                if(digit[j]>digit[j+1])
                {
                    temp=digit[j];
                    digit[j]=digit[j+1];
                    digit[j+1]=temp;
                }
        int count=0;
        for(i=0; i<n; i++)
        {   if(digit[i]!=digit[i+1])
                count++;
				}
        printf("%d\n",count);
        memset(digit, 0, sizeof(digit));
		}
    }
    return 0;
}


 
