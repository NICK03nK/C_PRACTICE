#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

//������A�е����ݺ�����B�е����ݽ��н�����������һ����
//
//int main()
//{
//	char arr1[11] = "hello bit!";
//	char arr2[11] = "HELLO BIT!";
//	printf("����ǰ\n");
//	printf("arr1 >> %s\n", arr1);
//	printf("arr2 >> %s\n", arr2);
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		char tmp = arr1[i];
//		arr1[i] = arr2[i];
//		arr2[i] = tmp;
//	}
//	printf("������\n");
//	printf("arr1 >> %s\n", arr1);
//	printf("arr2 >> %s\n", arr2);
//	return 0;
//}




//-----------------------------------------------
//����һ���������飬��ɶ�����Ĳ���
//1.ʵ�ֺ���init() ��ʼ������Ϊȫ0
//2.ʵ��print()  ��ӡ�����ÿ��Ԫ��
//3.ʵ��reverse()  �����������Ԫ�ص����á�

void Init(int* a,int sz)
{
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		a[i] = 0;
	}
}

void Print(const int* a, int sz)
{
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		printf("%d ", a[i]);
	}
	printf("\n");
}

void Reverse(int* a, int sz)
{
	int left = 0;
	int right = sz - 1;
	while (left < right)
	{
		int tmp = a[left];
		a[left] = a[right];
		a[right] = tmp;
		left++;
		right--;
	}
}

int main()
{
	int arr[] = { 1,2,3,4,5,6,7 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	Print(arr,sz);
	Reverse(arr, sz);
	Print(arr, sz);
	Init(arr,sz);
	Print(arr,sz);
	return 0;
}