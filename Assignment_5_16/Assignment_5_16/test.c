#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

//������ѭ������
//VS����������������Ĵ��룬��ͼ����������������
//
//int main()
//{
//    int i = 0;
//    int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//    for (i = 0; i <= 12; i++)
//    {
//        arr[i] = 0;
//        printf("hello bit\n");
//    }
//    return 0;
//}




//-----------------------------------------------
//ģ��ʵ�ֿ⺯��strlen
//
//int my_strlen(const char* pa)
//{
//	char* start = pa;
//	while (*pa != '\0')
//	{
//		pa++;
//	}
//	return pa - start;
//}
//
//int main()
//{
//	char arr[] = "keep moving";
//	int len = my_strlen(arr);
//	printf("%d\n", len);
//	return 0;
//}




//-----------------------------------------------
//ģ��ʵ�ֿ⺯��strcpy
//
//char* my_strcpy(char* dest, const char* src)
//{
//	char* ret = dest;
//	while (*dest++ = *src++)
//	{
//		;
//	}
//	return ret;
//}
//
//int main()
//{
//	char arr1[20] = { 0 };
//	char arr2[] = "keep moving";
//	printf("%s\n", my_strcpy(arr1, arr2));
//	return 0;
//}




//-----------------------------------------------
//��������ʹ����ȫ����λ��ż��ǰ��
//����һ���������飬ʵ��һ��������
//�����������������ֵ�˳��ʹ�����������е�����λ�������ǰ�벿�֣�
//����ż��λ������ĺ�벿��

void Swap(int* p1, int* p2)
{
	int tmp = *p1;
	*p1 = *p2;
	*p2 = tmp;
}

void Exchange(int* pa, int sz)
{
	int odd = 0;
	int even = sz - 1;
	while (odd < even)
	{
		while (odd < even && pa[odd] % 2 != 0)
		{
			odd++;
		}
		while (odd < even && pa[even] % 2 == 0)
		{
			even--;
		}
		if (odd < even)
		{
			Swap(&pa[odd], &pa[even]);
		}
	}
}

int main()
{
	int arr[] = { 0,0,4,3,5,7,2,6,9,1,8,1,3,7,7 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	Exchange(arr, sz);
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}
	return 0;
}