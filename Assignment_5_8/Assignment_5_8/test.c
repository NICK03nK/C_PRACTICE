#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

//����int��32λ������m��n�Ķ����Ʊ���У��ж��ٸ�λ(bit)��ͬ
//
//int main()
//{
//	int m = 0;
//	int n = 0;
//	scanf("%d %d", &a, &b);
//	int ret = a ^ b;
//	int count = 0;
//	int i = 0;
//	for (i = 0; i < 32; i++)
//	{
//		int tmp = ret & 1;
//		if (tmp)
//		{
//			count++;
//		}
//		ret >>= 1;
//	}
//	printf("%d", count);
//	return 0;
//}




//-----------------------------------------------
//��ȡһ���������������������е�ż��λ������λ���ֱ��ӡ������������
// 
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int i = 0;
//	int ret1 = n;
//	printf("����λ:");
//	for (i = 0; i < 32 / 2; i++)
//	{
//		int tmp1 = ret1 & 1;
//		printf("%d ", tmp1);
//		ret1 >>= 2;
//	}
//	printf("\n");
//	int ret2 = n >> 1;
//	printf("ż��λ:");
//	for (i = 0; i < 32 / 2; i++)
//	{
//		int tmp2 = ret2 & 1;
//		printf("%d ", tmp2);
//		ret2 >>= 2;
//	}
//	printf("\n");
//	return 0;
//}




//-----------------------------------------------
//дһ���������ز����������� 1 �ĸ���
// 
//int Count_Binary_1(int n)
//{
//	int count = 0;
//	int i = 0;
//	for (i = 0; i < 32; i++)
//	{
//		int tmp = n & 1;
//		if (tmp)
//		{
//			count++;
//		}
//		n >>= 1;
//	}
//	return count;
//}
//
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int ret = Count_Binary_1(n);
//	printf("%d\n", ret);
//	return 0;
//}




//-----------------------------------------------
//����������������������ʱ������

int main()
{
	//1.
	/*int a = 3;
	int b = -5;
	printf("����ǰ:a = %d  b = %d\n", a, b);
	a = a + b;
	b = a - b;
	a = a - b;
	printf("������:a = %d  b = %d\n", a, b);*/

	//2.
	int a = 3;
	int b = -5;
	printf("����ǰ:a = %d  b = %d\n", a, b);
	a = a ^ b;
	b = a ^ b;
	a = a ^ b;
	printf("������:a = %d  b = %d\n", a, b);
	return 0;
}