#include <stdio.h>
int main(void)
{
	float i, max;
	
	printf("����ֹͣ�������ݲ�����ȽϽ��������0�������ɡ�\n������һ������");
	scanf("%f", &i);
	
	while(i > 0) {
		printf("������һ����: ");
		scanf("%f", &i); 
		if (i > max){
			max = i;
			}
		if (i <= 0)
		   break;
	}
	printf("�������ǣ�%f", max);
	return 0;
 } 
