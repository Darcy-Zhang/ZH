#include <stdio.h>
#include <stdlib.h>
int main(void)
{
	int m,i;
	scanf("%d",&m);//����һ������ 
	char histogram[21][31];//����һ����Ϊ��״ͼ���ַ������� 
	char str[20];//����������ĸ������ 
	int num[20];//�����������ֵ����� 
	if(1<=m<=20){
		for(i=0;i<m;i++){//�����ݴ��������� 
			scanf("%d",&num[i]);
			scanf("%c",&str[i]);
			}
		int shang,xia;//shang��ʾx���Ϸ���������xia��ʾx���·������� 
		shang=0;
		xia=0;
		for(i=0;i<m;i++){
		
			if(num[i]>0&&shang<num[i]){
				shang=num[i];//�ҳ��Ϸ�Ӧ���е����� 
			}
			else if(num[i]<=0&&xia>num[i]){
				xia=num[i];//�ҳ��·�Ӧ���е����� 
			}
	     }
		
		int hang,lie;
		hang=shang-xia+1;//�ܵ����� 
		lie=m;//�ܵ����� 
		int j;
		for(j=0;j<lie;j++){//һ��һ�еĿ����ȶ��н���ѭ�� 
			if(num[j]>0){//���������ִ�����ʱ����� 
				for(i=0;i<hang;i++){//�ٶ��н���ѭ�� 
					if(i<shang-num[j]){//x���Ϸ�Ϊ�ո����� 
						histogram[i][j]=' ';
					}
					else if(i>=shang-num[j]&&i<shang){ 
						if(str[j]==' '||str[j]=='\n'){//���ֺ󲻴���ĸ�����
							histogram[i][j]='+';
						}
						else//���ֺ����ĸ����� 
						    histogram[i][j]=str[j];
					}
					else if(i==shang)//x�� 
						histogram[i][j]='-';
					else//��x���·�Ϊ�ո����� 
					    histogram[i][j]=' ';
				}
				
			}
			else if(num[j]<=0) {//��������С�ڵ�����ʱ����� 
				for(i=0;i<hang;i++){
					if(i<shang){//������С���㣬��x���Ϸ����ǿո� 
						histogram[i][j]=' ';
					}
					else if(i==shang)//x�� 
						histogram[i][j]='-';
					else if(i>shang&&i<=shang-num[j]){
						if(str[j]==' '||str[j]=='\n'){//���ֺ�����ĸ 
							histogram[i][j]='+';
						}
						else//���ֺ�����ĸ 
						    histogram[i][j]=str[j];
					}
					else//�������е��������ǿո� 
					    histogram[i][j]=' ';
				}
			}
		}
		for(i=0;i<hang;i++){//һ��Ҫ��ϸ ֮ǰд��i<shang���ǳٳټ�鲻������ 
		     if(i==shang){
		     	for(j=0;j<lie;j++)
		     	    {
					 if(j==lie-1)
			           {
					   printf("%c",histogram[i][j]);}
			        else
			           {
					   printf("%c-",histogram[i][j]);}
					}
		}
		     else
		        {
				 for(j=0;j<lie;j++)
		            {
					  printf("%c ",histogram[i][j]);}
				}
		    printf("\n");
	    }
	}
	return 0;
	
	     
	
}
