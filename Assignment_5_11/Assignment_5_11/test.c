#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

//дһ��������ӡarr��������ݣ���ʹ�������±꣬ʹ��ָ�롣(arr��һ������һά����)
//
//void Print(int* pa, int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", *(pa + i));
//	}
//}
//
//int main()
//{
//	int arr[] = { 0,1,2,3,4,5,6,7,8,9 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	Print(arr, sz);
//	return 0;
//}




//-----------------------------------------------
//��һ���ַ���str�����ݵߵ��������������
//
//#include<string.h>
//
//void reverse_str(char* left, char* right)
//{
//	while (left < right)
//	{
//		char tmp = *left;
//		*left = *right;
//		*right = tmp;
//		left++;
//		right--;
//	}
//}
//
//int main()
//{
//	char arr[10000] = { 0 };
//	gets(arr);
//	int len = strlen(arr);
//	reverse_str(arr, &arr[len - 1]);
//	printf("%s\n", arr);
//	return 0;
//}




//-----------------------------------------------
//��Sn=a+aa+aaa+aaaa+aaaaa��ǰ5��֮�ͣ�����a��һ������
//���磺2 + 22 + 222 + 2222 + 22222
//
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int sum = 0;
//	int tmp = n;
//	int i = 0;
//	for (i = 0; i < 5; i++)
//	{
//		sum += tmp;
//		tmp *= 10;
//		tmp += n;
//	}
//	printf("%d\n", sum);
//	return 0;
//}




//-----------------------------------------------
//���0��100000֮������С�ˮ�ɻ������������
//��ˮ�ɻ�������ָһ��nλ�������λ���ֵ�n�η�֮��ȷ�õ��ڸ�������
//��:153��1 ^ 3��5 ^ 3��3 ^ 3����153��һ����ˮ�ɻ�������
//
//#include<math.h>
//
//int main()
//{
//	int i = 0;
//	for (i = 0; i <= 100000; i++)
//	{
//		int tmp = i;
//		int count = 0;
//		while (tmp)
//		{
//			count++;
//			tmp /= 10;
//		}
//		tmp = i;
//		int sum = 0;
//		while (tmp)
//		{
//			sum += pow(tmp % 10, count);
//			tmp /= 10;
//		}
//		if (sum == i)
//		{
//			printf("%d ", i);
//		}
//	}
//	return 0;
//}




//-----------------------------------------------
//��ӡ����

int main()
{
	int line = 0;
	scanf("%d", &line);
	int i = 0;
	int j = 0;
	for (i = 0; i <= line; i++)
	{
		for (j = 0; j < line - i; j++)
		{
			printf(" ");
		}
		for (j = 0; j < 2 * i - 1; j++)
		{
			printf("*");
		}
		printf("\n");
	}
	for (i = 0; i < line-1; i++)
	{
		for (j = 0; j <= i; j++)
		{
			printf(" ");
		}
		for (j = 0; j < 2 * (line - i - 1) - 1; j++)
		{
			printf("*");
		}
		printf("\n");
	}
	return 0;
}