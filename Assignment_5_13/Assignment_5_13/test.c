#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

//����ˮ��1ƿ��ˮ1Ԫ��2����ƿ���Ի�һƿ��ˮ����20Ԫ�����Զ�����ˮ

int main()
{
	int n = 0;
	scanf("%d", &n);
	int bottle = n;
	int count = n;
	while (bottle >= 2)
	{
		count += bottle / 2;
		bottle = bottle / 2 + bottle % 2;
	}
	printf("%d\n", count);
	return 0;
}