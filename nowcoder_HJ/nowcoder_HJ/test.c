#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

//-----------------------------------------------
//�����ַ������һ�����ʵĳ��ȣ������Կո�������ַ�������С��5000����ע���ַ���ĩβ���Կո�Ϊ��β��
//����һ�У�����Ҫ������ַ������ǿգ�����С��5000��
//���һ����������ʾ�����ַ������һ�����ʵĳ��ȡ�
//
//#include<string.h>
//
//int get_len(char* pc)
//{
//	int len = strlen(pc);
//	char* left = pc + len - 1;
//	char* right = pc + len - 1;
//	while ((*(left - 1) != ' ') && (left > pc))
//	{
//		left--;
//	}
//	return right - left + 1;
//}
//
//int main()
//{
//	char str[5000] = { 0 };
//	str[0] = ' ';
//	gets(str);
//	int len = get_len(str);
//	printf("%d\n", len);
//	return 0;
//}




//-----------------------------------------------
//д��һ�����򣬽���һ������ĸ�����ֺͿո���ɵ��ַ�������һ���ַ���Ȼ����������ַ����и��ַ��ĳ��ִ������������ִ�Сд��ĸ��
//���ݷ�Χ��1��n��1000
//��һ������һ������ĸ�������Լ��ո���ɵ��ַ������ڶ�������һ���ַ���
//��������ַ����к��и��ַ��ĸ������������ִ�Сд��ĸ��
//
//#include<string.h>
//
//int main()
//{
//	char str[1001] = { 0 };
//	gets(str);
//	char key = 0;
//	scanf("%c", &key);
//	int count = 0;
//	int i = 0;
//	for (i = 0; i < strlen(str); i++)
//	{
//		if (((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z')) && ((key >= 'a' && key <= 'z') || (key >= 'A' && key <= 'Z')))
//		{
//			if ((str[i] == key) || (str[i] + 32 == key) || (str[i] - 32 == key))
//			{
//				count++;
//			}
//		}
//		else
//		{
//			if (str[i] == key)
//			{
//				count++;
//			}
//		}
//	}
//	printf("%d\n", count);
//	return 0;
//}




//-----------------------------------------------
//����������NN��1��500֮����������������ɾȥ�����ظ������֣�����ͬ������ֻ����һ����
//��������ͬ����ȥ����Ȼ���ٰ���Щ����С�������򣬰����źõ�˳�������
//���ݷ�Χ��1��n��1000����������ִ�С���㣺1��val��500
//��һ����������������ĸ��� N �� �������� N ��ÿ������һ�������������������ɵ��������
//������У���ʾ�������ݴ����Ľ��
//
//#include<stdlib.h>
//
//int cmp_int(const void* e1, const void* e2)
//{
//	return *(int*)e1 - *(int*)e2;
//}
//
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int arr[1000] = { 0 };
//	int i = 0;
//	for (i = 0; i < n; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	int data[1000] = { 0 };
//	int j = 0;
//	int k = 0;
//	for (i = 0; i < n; i++)
//	{
//		int flag = 1;
//		for (j = 0; j < k; j++)
//		{
//			if (data[j] == arr[i])
//			{
//				flag = 0;
//				break;
//			}
//		}
//		if (flag)
//		{
//			data[k++] = arr[i];
//		}
//	}
//	qsort(data, k, sizeof(data[0]), cmp_int);
//	for (j = 0; j < k; j++)
//	{
//		printf("%d\n", data[j]);
//	}
//	return 0;
//}




//-----------------------------------------------
//����һ���ַ������밴����Ϊ8���ÿ�������ַ��������������
//���Ȳ���8���������ַ������ں��油����0�����ַ���������
//���������ַ���(ÿ���ַ�������С�ڵ���100)
//����������зָ��ĳ���Ϊ8�����ַ���
//
//#include<string.h>
//
//int main()
//{
//    char str[100] = { 0 };
//    while (scanf("%8s", str) != EOF)
//    {
//        int len = 8 - strlen(str);
//        printf("%s", str);
//        for (int i = 0; i < len; i++)
//            printf("0");
//        printf("\n");
//    }
//}
//
//int main()
//{
//	char str[100] = { 0 };
//	while (scanf("%s", str) != EOF)
//	{
//		int len = strlen(str);
//		if (len < 8)
//		{
//			printf("%s", str);
//			int i = 0;
//			for (i = 0; i < 8 - len; i++)
//			{
//				printf("0");
//			}
//			printf("\n");
//		}
//		else
//		{
//			char* left = str;
//			char* right = str;
//			while (*right != '\0')
//			{
//				while ((*right != '\0') && ((right - left) <= 7))
//				{
//					printf("%c", *right);
//					right++;
//				}
//				int i = 0;
//				for (i = 0; i < 8 - (right - left); i++)
//				{
//					printf("0");
//				}
//				printf("\n");
//				left = right;
//			}
//		}
//	}
//	return 0;
//}




//-----------------------------------------------
//д��һ�����򣬽���һ��ʮ�����Ƶ������������ֵ��ʮ���Ʊ�ʾ��
//����һ��ʮ�����Ƶ���ֵ�ַ�����
//�������ֵ��ʮ�����ַ�������ͬ��Ĳ���������\n������
//
//int main()
//{
//	int n = 0;
//	scanf("%x", &n);
//	printf("%d\n", n);
//	return 0;
//}
//
//#include<string.h>
//#include<math.h>
//
//int convert_16_10(char* p)
//{
//	int len = strlen(p);
//	int key = 0;
//	int i = 0;
//	for (i = len - 1; i >= 2; i--)
//	{
//		if (p[i] >= 'A' && p[i] <= 'F')
//		{
//			key += (int)((p[i] - 55) * pow(16, len - i - 1));
//		}
//		else
//		{
//			key += (int)((p[i] - '0') * pow(16, len - i - 1));
//		}
//	}
//	return key;
//}
//
//int  main()
//{
//	char num[50] = { 0 };
//	scanf("%s", num);
//	int ret = convert_16_10(num);
//	printf("%d\n", ret);
//	return 0;
//}