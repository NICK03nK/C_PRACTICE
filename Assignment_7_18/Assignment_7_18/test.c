#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

//-----------------------------------------------
//дһ���꣬ģ��offsetof������ṹ����ĳ����������׵�ַ��ƫ�ƣ�������˵��
//
//#define OFFSETOF(TYPE,M_NAME) (size_t)&(((TYPE*)0)->M_NAME)
//
//struct S
//{
//	char c1;
//	int i;
//	char c2;
//};
//
//int main()
//{
//	struct S s = { 0 };
//	printf("%zu\n", OFFSETOF(struct S, c1));
//	printf("%zu\n", OFFSETOF(struct S, i));
//	printf("%zu\n", OFFSETOF(struct S, c2));
//	return 0;
//}




//-----------------------------------------------
//дһ���꣬���Խ�һ�������Ķ�����λ������λ��ż��λ������

#define MOVE_BIT(n) (((n&0xaaaaaaaa)>>1)+((n&0x55555555)<<1))

int main()
{
	int n = 0;
	scanf("%d", &n);
	printf("%d\n", MOVE_BIT(n));
	return 0;
}