#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

//-----------------------------------------------
//�����ַ������һ�����ʵĳ��ȣ������Կո�������ַ�������С��5000����ע���ַ���ĩβ���Կո�Ϊ��β��
//����һ�У�����Ҫ������ַ������ǿգ�����С��5000��
//���һ����������ʾ�����ַ������һ�����ʵĳ��ȡ�

#include<string.h>

int get_len(char* pc)
{
	int len = strlen(pc);
	char* left = pc + len - 1;
	char* right = pc + len - 1;
	while ((*(left - 1) != ' ') && (left > pc))
	{
		left--;
	}
	return right - left + 1;
}

int main()
{
	char str[5000] = { 0 };
	str[0] = ' ';
	gets(str);
	int len = get_len(str);
	printf("%d\n", len);
	return 0;
}