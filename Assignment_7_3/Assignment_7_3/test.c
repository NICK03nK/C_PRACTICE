#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

//-----------------------------------------------
//ģ��ʵ��strlen
//
//#include<assert.h>
//
////size_t my_strlen(const char* p)//������
////{
////	assert(p);
////	size_t count = 0;
////	while (*p)
////	{
////		count++;
////		p++;
////	}
////	return count;
////}
//
////size_t my_strlen(const char* p)//ָ���ָ��
////{
////	assert(p);
////	char* start = p;
////	while (*p)
////	{
////		p++;
////	}
////	return p - start;
////}
//
//size_t my_strlen(const char* p)//�ݹ�
//{
//	assert(p);
//	if (*p)
//	{
//		return 1 + my_strlen(p + 1);
//	}
//	else
//	{
//		return 0;
//	}
//}
//
//int main()
//{
//	char str[] = "hello nick!";
//	int len = my_strlen(str);
//	printf("%d\n", len);
//	return 0;
//}




//-----------------------------------------------
//ģ��ʵ��strcpy
//
//#include<assert.h>
//
//char* my_strcpy(char* dst, const char* src)
//{
//	assert(dst && src);
//	char* start = dst;
//	while (*dst++ = *src++)
//	{
//		;
//	}
//	return start;
//}
//
//int main()
//{
//	char str1[20] = { 0 };
//	char str2[] = "hello nick!";
//	my_strcpy(str1, str2);
//	printf("%s\n", str1);
//	return 0;
//}




//-----------------------------------------------
//ģ��ʵ��strcat

#include<assert.h>

char* my_strcat(char* dst, const char* src)
{
	assert(dst && src);
	char* start = dst;
	while (*dst)
	{
		dst++;
	}
	while (*dst++ = *src++)
	{
		;
	}
	return start;
}

int main()
{
	char str1[20] = "hello ";
	char str2[] = "nick!";
	my_strcat(str1, str2);
	printf("%s\n", str1);
	return 0;
}