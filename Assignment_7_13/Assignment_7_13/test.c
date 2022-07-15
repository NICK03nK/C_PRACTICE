#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

//-----------------------------------------------
//一个数组中只有两个数字是出现一次，其他所有数字都出现了两次。
//编写一个函数找出这两个只出现一次的数字。
//
//void Find_single(int* p, int* k, int sz)
//{
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < sz; i++)
//	{
//		int count = 0;
//		for (j = 0; j < sz; j++)
//		{
//			if (p[j] == p[i])
//			{
//				count++;
//				if (count == 2)
//				{
//					break;
//				}
//			}
//		}
//		if (count != 2)
//		{
//			*k++ = p[i];
//		}
//	}
//}
//
//int main()
//{
//	int arr[] = { 3,9,4,5,1,1,2,0,2,5,3,4 };
//	int key[2] = { 0 };
//	Find_single(arr, key, sizeof(arr) / sizeof(arr[0]));
//	int i = 0;
//	for (i = 0; i < 2; i++)
//	{
//		printf("%d ", key[i]);
//	}
//	return 0;
//}




//-----------------------------------------------
//模拟实现strncpy
//
//#include<assert.h>
//
//char* my_strncpy(char* dst, const char* src, size_t num)
//{
//	assert(dst && src);
//	char* start = dst;
//	while (num--)
//	{
//		*dst++ = *src++;
//	}
//	return start;
//}
//
//int main()
//{
//	char str1[] = "hello nick!";
//	char str2[30] = { 0 };
//	my_strncpy(str2, str1, 5);
//	printf("%s", str2);
//	return 0;
//}




//-----------------------------------------------
//模拟实现strncat

#include<assert.h>

char* my_strncat(char* dst, const char* src, size_t num)
{
	assert(dst && src);
	char* start = dst;
	while (*dst)
	{
		dst++;
	}
	while (num-- && *src)
	{
		*dst++ = *src++;
	}
	*dst = '\0';
	return start;
}

int main()
{
	char str1[30] = "hello ";
	char str2[] = "nick!";
	my_strncat(str1, str2, 3);
	printf("%s", str1);
	return 0;
}