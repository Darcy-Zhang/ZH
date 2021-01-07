#include <stdio.h>
#include <string.h>
struct wordsnumber
{
   char word[20]; //����ÿ�����ʵ���ĸ��������20
   int count;
} wordsnumber[1000]; //�����ṹ�����ͺͶ���ṹ�����,ÿ��wordsnumber�����һ���������ʵ����鲢��¼������ʵĸ�����
int main(void)
{
   char words[1000], c;
   memset(words, 0, sizeof(words));
   int i, len;
   for (i = 0; (c = getchar()) != EOF; i++)
   {
      words[i] = c;
      len = i;
   }
   for (i = 0; i <= len; i++)
   {
      if (words[i] >= 'A' && words[i] <= 'Z')
      {
         words[i] = words[i] + 32;
      }
      else if (words[i] >= 'a' && words[i] <= 'z')
      {
         words[i] = words[i];
      }
      else
         words[i] = ' ';
   } //���ı�ת��Ϊֻ����Сд��ĸ�Ϳո������
   for (i = 0; i < len; i++)
   {
      if (words[i] == ' ' && words[i + 1] == ' ')
      {
         int j;
         for (j = i; j < len; j++)
         {
            words[j] = words[j + 1];
         }
         words[len] = '\0';
         len--;
         i--;
      }
   } //ɾ������Ŀո� ʹ�����뵥��֮��ֻ����һ���ո�
   words[len] = '\0';
   len--;
   int k = 0, n = 0, j;
   for (i = 0; i < 1000; i++)
   {
      if (words[k] == '\0')
      {
         n = i;
         break;
      }
      for (j = 0; j < 20; j++)
      {
         wordsnumber[i].word[j] = words[k];
         k++;
         n = i;
         if (words[k] == ' ')
         {
            k++;
            break;
         }
      }

   } //��ÿ�����ʵ���������������С�
   int m;
   for (m = 0; m < n; m++)
   {
      wordsnumber[m].count = 0;
   } //��ʼ�� ����������ÿ������������ʼ��Ϊ1
   int t, p;
   for (t = 0; t < n; t++)
   {
      for (p = 0; p < n; p++)
      {
         if (strcmp(wordsnumber[t].word, wordsnumber[p].word) == 0)
         {
            wordsnumber[p].count++;
         }
      }
   } //���㵥�ʵĸ�������������ͬ�����������һ

   int maxx = -1;
   int maxn = 0;
   for (i = 0; i < n; i++)
   {
      if (wordsnumber[i].count > maxx)
      {
         maxx = wordsnumber[i].count;
         maxn = i;
      }
      else if (wordsnumber[i].count == maxx && strcmp(wordsnumber[maxn].word, wordsnumber[i].word) < 0)
      {
         maxn = i;
      }
   }

      printf("%s %d\n", wordsnumber[maxn].word, wordsnumber[maxn].count);
   return 0;
}
