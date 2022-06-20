#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

//-----------------------------------------------
//计算字符串最后一个单词的长度，单词以空格隔开，字符串长度小于5000。（注：字符串末尾不以空格为结尾）
//输入一行，代表要计算的字符串，非空，长度小于5000。
//输出一个整数，表示输入字符串最后一个单词的长度。
//
//#include<string.h>
//
//int get_len(char* pc)
//{
//	int len = strlen(pc);
//	char* left = pc + len - 1;
//	char* right = pc + len - 1;
//	while ((*(left - 1) != ' ') && (left > pc))
//	{
//		left--;
//	}
//	return right - left + 1;
//}
//
//int main()
//{
//	char str[5000] = { 0 };
//	str[0] = ' ';
//	gets(str);
//	int len = get_len(str);
//	printf("%d\n", len);
//	return 0;
//}




//-----------------------------------------------
//写出一个程序，接受一个由字母、数字和空格组成的字符串，和一个字符，然后输出输入字符串中该字符的出现次数。（不区分大小写字母）
//数据范围：1≤n≤1000
//第一行输入一个由字母和数字以及空格组成的字符串，第二行输入一个字符。
//输出输入字符串中含有该字符的个数。（不区分大小写字母）
//
//#include<string.h>
//
//int main()
//{
//	char str[1001] = { 0 };
//	gets(str);
//	char key = 0;
//	scanf("%c", &key);
//	int count = 0;
//	int i = 0;
//	for (i = 0; i < strlen(str); i++)
//	{
//		if (((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z')) && ((key >= 'a' && key <= 'z') || (key >= 'A' && key <= 'Z')))
//		{
//			if ((str[i] == key) || (str[i] + 32 == key) || (str[i] - 32 == key))
//			{
//				count++;
//			}
//		}
//		else
//		{
//			if (str[i] == key)
//			{
//				count++;
//			}
//		}
//	}
//	printf("%d\n", count);
//	return 0;
//}




//-----------------------------------------------
//明明生成了NN个1到500之间的随机整数。请你删去其中重复的数字，即相同的数字只保留一个，
//把其余相同的数去掉，然后再把这些数从小到大排序，按照排好的顺序输出。
//数据范围：1≤n≤1000，输入的数字大小满足：1≤val≤500
//第一行先输入随机整数的个数 N 。 接下来的 N 行每行输入一个整数，代表明明生成的随机数。
//输出多行，表示输入数据处理后的结果
//
//#include<stdlib.h>
//
//int cmp_int(const void* e1, const void* e2)
//{
//	return *(int*)e1 - *(int*)e2;
//}
//
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int arr[1000] = { 0 };
//	int i = 0;
//	for (i = 0; i < n; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	int data[1000] = { 0 };
//	int j = 0;
//	int k = 0;
//	for (i = 0; i < n; i++)
//	{
//		int flag = 1;
//		for (j = 0; j < k; j++)
//		{
//			if (data[j] == arr[i])
//			{
//				flag = 0;
//				break;
//			}
//		}
//		if (flag)
//		{
//			data[k++] = arr[i];
//		}
//	}
//	qsort(data, k, sizeof(data[0]), cmp_int);
//	for (j = 0; j < k; j++)
//	{
//		printf("%d\n", data[j]);
//	}
//	return 0;
//}




//-----------------------------------------------
//输入一个字符串，请按长度为8拆分每个输入字符串并进行输出；
//长度不是8整数倍的字符串请在后面补数字0，空字符串不处理。
//连续输入字符串(每个字符串长度小于等于100)
//依次输出所有分割后的长度为8的新字符串
//
//#include<string.h>
//
//int main()
//{
//    char str[100] = { 0 };
//    while (scanf("%8s", str) != EOF)
//    {
//        int len = 8 - strlen(str);
//        printf("%s", str);
//        for (int i = 0; i < len; i++)
//            printf("0");
//        printf("\n");
//    }
//}
//
//int main()
//{
//	char str[100] = { 0 };
//	while (scanf("%s", str) != EOF)
//	{
//		int len = strlen(str);
//		if (len < 8)
//		{
//			printf("%s", str);
//			int i = 0;
//			for (i = 0; i < 8 - len; i++)
//			{
//				printf("0");
//			}
//			printf("\n");
//		}
//		else
//		{
//			char* left = str;
//			char* right = str;
//			while (*right != '\0')
//			{
//				while ((*right != '\0') && ((right - left) <= 7))
//				{
//					printf("%c", *right);
//					right++;
//				}
//				int i = 0;
//				for (i = 0; i < 8 - (right - left); i++)
//				{
//					printf("0");
//				}
//				printf("\n");
//				left = right;
//			}
//		}
//	}
//	return 0;
//}




//-----------------------------------------------
//写出一个程序，接受一个十六进制的数，输出该数值的十进制表示。
//输入一个十六进制的数值字符串。
//输出该数值的十进制字符串。不同组的测试用例用\n隔开。
//
//int main()
//{
//	int n = 0;
//	scanf("%x", &n);
//	printf("%d\n", n);
//	return 0;
//}
//
//#include<string.h>
//#include<math.h>
//
//int convert_16_10(char* p)
//{
//	int len = strlen(p);
//	int key = 0;
//	int i = 0;
//	for (i = len - 1; i >= 2; i--)
//	{
//		if (p[i] >= 'A' && p[i] <= 'F')
//		{
//			key += (int)((p[i] - 55) * pow(16, len - i - 1));
//		}
//		else
//		{
//			key += (int)((p[i] - '0') * pow(16, len - i - 1));
//		}
//	}
//	return key;
//}
//
//int  main()
//{
//	char num[50] = { 0 };
//	scanf("%s", num);
//	int ret = convert_16_10(num);
//	printf("%d\n", ret);
//	return 0;
//}




//-----------------------------------------------<error>
//输入一个正整数，按照从小到大的顺序输出它的所有质因子（重复的也要列举）（如180的质因子为2 2 3 3 5 ）
//
//int main()
//{
//	long n = 0;
//	scanf("%ld", &n);
//	int i = 0;
//	for (i = 2; i <= n; i++)
//	{
//		while (n % i == 0)
//		{
//			printf("%d ", i);
//			n /= i;
//		}
//	}
//	return 0;
//}




//-----------------------------------------------
//写出一个程序，接受一个正浮点数值，输出该数值的近似整数值。
//如果小数点后数值大于等于 0.5, 向上取整；小于 0.5 ，则向下取整。
//数据范围：保证输入的数字在 32 位浮点数范围内
//输入一个正浮点数值
//输出该数值的近似整数值
//
//#include<math.h>
//
//int main()
//{
//	double num = 0.0;
//	scanf("%lf", &num);
//	double tmp = num - (int)num;
//	int ret = 0;
//	if (tmp >= 0.5)
//	{
//		ret = (int)ceil(num);
//	}
//	else
//	{
//		ret = (int)floor(num);
//	}
//	printf("%d\n", ret);
//	return 0;
//}




//-----------------------------------------------
//数据表记录包含表索引index和数值value（int范围的正整数），请对表索引相同的记
//录进行合并，即将相同索引的数值进行求和运算，输出按照index值升序进行输出。
//
//0 <= index <= 11111111
//1 <= value <= 100000
//
//先输入键值对的个数n（1 <= n <= 500）
//接下来n行每行输入成对的index和value值，以空格隔开
//
//输出合并后的键值对（多行）
//
//#include<stdlib.h>
//
//int Remove_Duplication(int* p1, int* p2, int n)
//{
//	int i = 0;
//	int j = 0;
//	int k = 0;
//	for (i = 0; i < n; i++)
//	{
//		int flag = 1;
//		for (j = 0; j < k; j++)
//		{
//			if (p2[j] == p1[i])
//			{
//				flag = 0;
//				break;
//			}
//		}
//		if (flag)
//		{
//			p2[k++] = p1[i];
//		}
//	}
//	return k;
//}
//
//int cmp_int(const void* e1, const void* e2)
//{
//	return *(int*)e1 - *(int*)e2;
//}
//
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int index1[500] = { 0 };
//	int value1[500] = { 0 };
//	int index2[500] = { 0 };
//	int value2[500] = { 0 };
//	int i = 0;
//	for (i = 0; i < n; i++)
//	{
//		scanf("%d %d", &index1[i], &value1[i]);
//	}
//	int size = Remove_Duplication(index1, index2, n);
//	qsort(index2, size, sizeof(index2[0]), cmp_int);
//	int j = 0;
//	for (i = 0; i < size; i++)
//	{
//		for (j = 0; j < n; j++)
//		{
//			if (index1[j] == index2[i])
//			{
//				value2[i] += value1[j];
//			}
//		}
//		printf("%d %d\n", index2[i], value2[i]);
//	}
//	return 0;
//}




//-----------------------------------------------
//输入一个 int 型整数，按照从右向左的阅读顺序，返回一个不含重复数字的新的整数。
//保证输入的整数最后一位不是 0 。
//
//数据范围：1≤n≤10^8
//
//输入一个int型整数
//
//按照从右向左的阅读顺序，返回一个不含重复数字的新的整数

#include<math.h>

int main()
{
	int n = 0;
	scanf("%d", &n);
	int num1[9] = { 0 };
	int count = 0;
	int tmp = n;
	int i = 0;
	while (tmp)
	{
		count++;
		num1[i++] = tmp % 10;
		tmp /= 10;
	}
	int num2[9] = { 0 };
	int j = 0;
	int sz = 0;
	for (i = 0; i <= count - 1; i++)
	{
		int flag = 1;
		for (j = 0; j <= sz; j++)
		{
			if (num2[j] == num1[i])
			{
				flag = 0;
				break;
			}
		}
		if (flag)
		{
			num2[sz++] = num1[i];
		}
	}
	int ret = 0;
	for (i = sz - 1; i >= 0; i--)
	{
		ret += num2[i] * pow(10, sz - i - 1);
	}
	printf("%d\n", ret);
	return 0;
}