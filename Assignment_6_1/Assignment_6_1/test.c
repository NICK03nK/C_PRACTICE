#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

//�ַ�����ת���
//дһ���������ж�һ���ַ����Ƿ�Ϊ����һ���ַ�����ת֮����ַ�����
//���磺����s1 = AABCD��s2 = BCDAA������1
//����s1 = abcd��s2 = ACBD������0.
//AABCD����һ���ַ��õ�ABCDA
//AABCD���������ַ��õ�BCDAA
//AABCD����һ���ַ��õ�DAABC

#include<string.h>

int Is_same_str(char* ps1, char* ps2)
{
	char* p1 = ps1;
	char* p2 = ps2;
	int len1 = strlen(p1);
	int len2 = strlen(p2);
	strncat(p1, p1, len1);
	if (len1 != len2)
	{
		return 0;
	}
	while (*p1 != '\0')
	{
		if (*p1 == *p2)
		{
			p2++;
			p1++;
		}
		else
		{
			p1++;
		}
		if (*p2 == '\0')
		{
			break;
		}
	}
	if (*p2 == '\0')
	{
		return 1;
	}
	else
	{
		return 0;
	}
}

int main()
{
	char s1[20] = { 0 };
	char s2[20] = { 0 };
	gets(s1);
	gets(s2);
	int ret = Is_same_str(s1, s2);
	if (ret)
	{
		printf("Is the same string\n");
	}
	else
	{
		printf("Isn't the same string\n");
	}
	return 0;
}




//-----------------------------------------------
//��ϰʹ�ÿ⺯����qsort����������͵�����
//
//#include<stdlib.h>
//#include<string.h>
//
////��������
////int cmp_int(const void* e1, const void* e2)
////{
////	return (*(int*)e1 - *(int*)e2);
////}
//
////����ṹ������
//struct Stu
//{
//	char name[20];
//	int age;
//};
//
//int cmp_Stu_name(const void* e1, const void* e2)
//{
//	return strcmp(((struct Stu*)e1)->name, ((struct Stu*)e2)->name);
//}
//
//int cmp_Stu_age(const void* e1, const void* e2)
//{
//	return ((struct Stu*)e1)->age - ((struct Stu*)e2)->age;
//}
//
//int main()
//{
//	/*int arr[10] = { 9,8,7,6,5,4,3,2,1,0 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	qsort(arr, sz, sizeof(arr[0]), cmp_int);*/
//
//	struct Stu Sarr[] = { {"zhangsan",10},{"lisi",30},{"wangwu",20} };
//	int sz = sizeof(Sarr) / sizeof(Sarr[0]);
//	/*qsort(Sarr, sz, sizeof(Sarr[0]), cmp_Stu_name);*/
//	qsort(Sarr, sz, sizeof(Sarr[0]), cmp_Stu_age);
//
//	return 0;
//}




//-----------------------------------------------
//ģ��qsort�Ĺ���ʵ��һ��ͨ�õ�ð������
//
//int cmp_int(const void* e1, const void* e2)
//{
//	return (*(int*)e1 - *(int*)e2);
//}
//
//void Swap(char* p1, char* p2, int width)
//{
//	int i = 0;
//	for (i = 0; i < width; i++)
//	{
//		char tmp = *p1;
//		*p1 = *p2;
//		*p2 = tmp;
//		p1++;
//		p2++;
//	}
//}
//
//void BubbleSort(void* base, int sz, int width, int(*cmp)(const void* e1, const void* e2))
//{
//	int end = sz;
//	int i = 0;
//	while (end >= 2)
//	{
//		int flag = 1;
//		for (i = 1; i < end; i++)
//		{
//			if (cmp((char*)base + (i - 1) * width, (char*)base + i * width) > 0)
//			{
//				Swap((char*)base + (i - 1) * width, (char*)base + i * width, width);
//				flag = 0;
//			}
//		}
//		if (flag)
//		{
//			break;
//		}
//		end--;
//	}
//}
//
//int main()
//{
//	int arr[10] = { 9,8,7,6,5,4,3,2,1,0 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	BubbleSort(arr, sz, sizeof(arr[0]), cmp_int);
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}




//-----------------------------------------------
//�ú���ָ������ʵ�ּ򵥼�����
//
//void menu()
//{
//	printf("************************************\n");
//	printf("*****     1.Add      2.Sub     *****\n");
//	printf("*****     3.Mul      4.Div     *****\n");
//	printf("*****          0.Exit          *****\n");
//	printf("************************************\n");
//}
//
//int Add(int x, int y)
//{
//	return x + y;
//}
//
//int Sub(int x, int y)
//{
//	return x - y;
//}
//
//int Mul(int x, int y)
//{
//	return x * y;
//}
//
//int Div(int x, int y)
//{
//	return x / y;
//}
//
//int main()
//{
//	int(*pfArr[])(int, int) = { 0,Add,Sub,Mul,Div };
//	int input = 0;
//	do
//	{
//		menu();
//		printf("��ѡ�����>>");
//		scanf("%d", &input);
//		if (input == 0)
//		{
//			printf("<�˳�������>\n");
//		}
//		else if (input >= 1 && input <= 4)
//		{
//			int x = 0;
//			int y = 0;
//			printf("����������������>>");
//			scanf("%d %d", &x, &y);
//			int ret = pfArr[input](x, y);
//			printf("%d\n", ret);
//		}
//		else
//		{
//			printf("<ѡ�����������ѡ��>\n");
//		}
//	} while (input);
//	return 0;
//}