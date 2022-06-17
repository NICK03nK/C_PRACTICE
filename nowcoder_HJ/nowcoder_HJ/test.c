#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

//-----------------------------------------------
//计算字符串最后一个单词的长度，单词以空格隔开，字符串长度小于5000。（注：字符串末尾不以空格为结尾）
//输入一行，代表要计算的字符串，非空，长度小于5000。
//输出一个整数，表示输入字符串最后一个单词的长度。

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