﻿#define _CRT_SECURE_NO_WARNINGS 1

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
//
//#include<math.h>
//
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int num1[9] = { 0 };
//	int count = 0;
//	int tmp = n;
//	int i = 0;
//	while (tmp)
//	{
//		count++;
//		num1[i++] = tmp % 10;
//		tmp /= 10;
//	}
//	int num2[9] = { 0 };
//	int j = 0;
//	int sz = 0;
//	for (i = 0; i <= count - 1; i++)
//	{
//		int flag = 1;
//		for (j = 0; j <= sz; j++)
//		{
//			if (num2[j] == num1[i])
//			{
//				flag = 0;
//				break;
//			}
//		}
//		if (flag)
//		{
//			num2[sz++] = num1[i];
//		}
//	}
//	int ret = 0;
//	for (i = sz - 1; i >= 0; i--)
//	{
//		ret += num2[i] * pow(10, sz - i - 1);
//	}
//	printf("%d\n", ret);
//	return 0;
//}




//-----------------------------------------------
//编写一个函数，计算字符串中含有的不同字符的个数。字符在 ASCII 码范围内(0~127 ，包括 0 和 127)，
//换行表示结束符，不算在字符里。不在范围内的不作统计。多个相同的字符只计算一次
//例如，对于字符串 abaca 而言，有 a、b、c 三种不同的字符，因此输出 3 。
//
//数据范围：1≤n≤500
//
//输入一行没有空格的字符串。
//
//输出 输入字符串 中范围在(0~127，包括0和127)字符的种数。
//
//#include<string.h>
//
//int main()
//{
//	char str1[501] = { 0 };
//	scanf("%s", str1);
//	int len = strlen(str1);
//	char str2[501] = { 0 };
//	int i = 0;
//	int j = 0;
//	int sz = 0;
//	for (i = 0; i < len; i++)
//	{
//		int flag = 1;
//		for (j = 0; j < sz; j++)
//		{
//			if (str2[j] == str1[i])
//			{
//				flag = 0;
//				break;
//			}
//		}
//		if (flag)
//		{
//			str2[sz++] = str1[i];
//		}
//	}
//	printf("%d\n", sz);
//	return 0;
//}




//-----------------------------------------------
//输入一个整数，将这个整数以字符串的形式逆序输出
//程序不考虑负数的情况，若数字含有0，则逆序形式也含有0，如输入为100，则输出为001
//
//数据范围：0≤n≤2^30−1
//
//输入一个int整数
//
//将这个整数以字符串的形式逆序输出
//
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	if (n == 0)
//	{
//		printf("%d", n);
//	}
//	else
//	{
//		int num[10] = { 0 };
//		int sz = 0;
//		int tmp = n;
//		while (tmp)
//		{
//			num[sz++] = tmp % 10;
//			tmp /= 10;
//		}
//		int i = 0;
//		for (i = 0; i < sz; i++)
//		{
//			printf("%d", num[i]);
//		}
//	}
//	return 0;
//}




//-----------------------------------------------
//接受一个只包含小写字母的字符串，然后输出该字符串反转后的字符串。（字符串长度不超过1000）
//
//输入一行，为一个只包含小写字母的字符串。
//
//输出该字符串反转后的字符串。
//
//#include<string.h>
//
//void Reverse_str(char* p)
//{
//	int len = strlen(p);
//	int left = 0;
//	int right = len - 1;
//	while (left < right)
//	{
//		char tmp = p[left];
//		p[left] = p[right];
//		p[right] = tmp;
//		left++;
//		right--;
//	}
//}
//
//int main()
//{
//	char str[1000] = { 0 };
//	gets(str);
//	Reverse_str(str);
//	puts(str);
//	return 0;
//}




//-----------------------------------------------
//将一个英文语句以单词为单位逆序排放。例如“I am a boy”，逆序排放后为“boy a am I”
//
//所有单词之间用一个空格隔开，语句中除了英文字母外，不再包含其他字符
//
//数据范围：输入的字符串长度满足 1≤n≤1000
//
//注意本题有多组输入
//输入一个英文语句，每个单词用空格隔开。保证输入只包含空格和字母。
//
//得到逆序的句子
//
//#include<string.h>
//
//void reverse(char* p, int left, int right)
//{
//	while (left < right)
//	{
//		char tmp = p[left];
//		p[left] = p[right];
//		p[right] = tmp;
//		left++;
//		right--;
//	}
//}
//
//int main()
//{
//	char str[1001] = { 0 };
//	while (gets(str) != NULL)
//	{
//		int p1 = 0;
//		int p2 = 0;
//		while (str[p2] != '\0')
//		{
//			while ((str[p2] != ' ') && (str[p2] != '\0'))
//			{
//				p2++;
//			}
//			reverse(str, p1, p2 - 1);
//			if (str[p2] == ' ')
//			{
//				p2++;
//				p1 = p2;
//			}
//		}
//		reverse(str, 0, strlen(str) - 1);
//		puts(str);
//	}
//	return 0;
//}




//-----------------------------------------------
//给定 n 个字符串，请对 n 个字符串按照字典序排列。
//
//数据范围：1≤n≤1000  ，字符串长度满足 1≤len≤100
//
//输入第一行为一个正整数n(1≤n≤1000), 下面n行为n个字符串(字符串长度≤100), 字符串中只含有大小写字母。
//
//数据输出n行，输出结果为按照字典序排列的字符串。
//
//#include<stdlib.h>
//#include<string.h>
//
//int cmp_str(const void* e1, const void* e2)
//{
//	return strcmp(*(char(*)[101])e1, *(char(*)[101])e2);
//}
//
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	char str[1000][101] = { 0 };
//	int i = 0;
//	for (i = 0; i < n; i++)
//	{
//		scanf("%s", &str[i][0]);
//	}
//	qsort(str, n, sizeof(str[0]), cmp_str);
//	for (i = 0; i < n; i++)
//	{
//		printf("%s\n", str[i]);
//	}
//	return 0;
//}




//-----------------------------------------------
//输入一个 int 型的正整数，计算出该 int 型数据在内存中存储时 1 的个数。
//
//数据范围：保证在 32 位整型数字范围内
//
//输入一个整数（int类型）
//
//这个数转换成2进制后，输出1的个数
//
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int count = 0;
//	int tmp = n;
//	while (tmp)
//	{
//		if (tmp & 1)
//		{
//			count++;
//		}
//		tmp /= 2;
//	}
//	printf("%d\n", count);
//	return 0;
//}




//-----------------------------------------------
//开发一个坐标计算工具， A表示向左移动，D表示向右移动，W表示向上移动，S表示向下移动。
//从（0, 0）点开始移动，从输入字符串里面读取一些坐标，并将最终输入结果输出到输出文件里面。
//输入：
//合法坐标为A(或者D或者W或者S) + 数字（两位以内）
//坐标之间以; 分隔。
//非法坐标点需要进行丢弃。如AA10;  A1A;  $% $;  YAD; 等。
//下面是一个简单的例子 如：
//A10; S20; W10; D30; X; A1A; B10A11;; A10;
//处理过程：
//起点（0, 0）
//+ A10 = （ - 10, 0）
//+ S20 = (-10, -20)
//+ W10 = (-10, -10)
//+ D30 = (20, -10)
//+ x = 无效
//+ A1A = 无效
//+ B10A11 = 无效
//+ 一个空 不影响
//+ A10 = (10, -10)
//结果 （10， - 10）
//数据范围：每组输入的字符串长度满足：1≤n≤10000，坐标保证满足：-2^31≤x,y≤2^31-1 且数字部分仅含正数
//一行字符串
//最终坐标，以逗号分隔
//
//#include<string.h>
//
//void Func(char* ps, int p1, int p2, int* px, int* py, int ret)
//{
//	if (ps[p1] == 'A')
//	{
//		if (ret == 1)
//		{
//			*px -= ps[p1 + 1] - '0';
//		}
//		else if (ret == 2)
//		{
//			*px -= (ps[p1 + 1] - '0') * 10 + (ps[p1 + 2] - '0');
//		}
//	}
//	if (ps[p1] == 'D')
//	{
//		if (ret == 1)
//		{
//			*px += ps[p1 + 1] - '0';
//		}
//		else if (ret == 2)
//		{
//			*px += (ps[p1 + 1] - '0') * 10 + (ps[p1 + 2] - '0');
//		}
//	}
//	if (ps[p1] == 'W')
//	{
//		if (ret == 1)
//		{
//			*py += ps[p1 + 1] - '0';
//		}
//		else if (ret == 2)
//		{
//			*py += (ps[p1 + 1] - '0') * 10 + (ps[p1 + 2] - '0');
//		}
//	}
//	if (ps[p1] == 'S')
//	{
//		if (ret == 1)
//		{
//			*py -= ps[p1 + 1] - '0';
//		}
//		else if (ret == 2)
//		{
//			*py -= (ps[p1 + 1] - '0') * 10 + (ps[p1 + 2] - '0');
//		}
//	}
//}
//
//void Move(char* ps, int p1, int p2, int* px, int* py)
//{
//	if (p2 - p1 > 2)
//	{
//		return;
//	}
//	if ((p2 - p1 == 1) && ((ps[p1] == 'W') || (ps[p1] == 'A') || (ps[p1] == 'S') || (ps[p1] == 'D')) && (ps[p1 + 1] >= '0' && ps[p1 + 1] <= '9'))
//	{
//		Func(ps, p1, p2, px, py, p2 - p1);
//	}
//	else if ((p2 - p1 == 2) && ((ps[p1] == 'W') || (ps[p1] == 'A') || (ps[p1] == 'S') || (ps[p1] == 'D')) && (ps[p1 + 1] >= '0' && ps[p1 + 1] <= '9') && (ps[p1 + 2] >= '0' && ps[p1 + 2] <= '9'))
//	{
//		Func(ps, p1, p2, px, py, p2 - p1);
//	}
//}
//
//int main()
//{
//	char str[10000] = { 0 };
//	gets(str);
//	int x = 0;
//	int y = 0;
//	int left = 0;
//	int right = 0;
//	while (str[right] != '\0')
//	{
//		while (str[right] != ';')
//		{
//			right++;
//		}
//		Move(str, left, right - 1, &x, &y);
//		right++;
//		left = right;
//	}
//	printf("%d,%d", x, y);
//	return 0;
//}

///--




//-----------------------------------------------
//密码要求:
//1.长度超过8位
//2.包括大小写字母.数字.其它符号, 以上四种至少三种
//3.不能有长度大于2的包含公共元素的子串重复 （注：其他符号不含空格或换行）
//数据范围：输入的字符串长度满足：1≤n≤100
//输入描述：一组字符串。
//输出描述：如果符合要求输出：OK，否则输出NG
//
//#include<string.h>
//
//int Judge_PW(char* p)
//{
//	char pw_cpy[100] = { 0 };
//	strcpy(pw_cpy, p);
//	int len = strlen(p);
//	if (len <= 8)
//	{
//		return 0;
//	}
//	int num = 0;
//	int ltr_c = 0;
//	int ltr_l = 0;
//	int otr = 0;
//	int i = 0;
//	for (i = 0; i < len; i++)
//	{
//		if (p[i] >= '0' && p[i] <= '9')
//		{
//			num = 1;
//		}
//		else if (p[i] >= 'A' && p[i] <= 'Z')
//		{
//			ltr_c = 1;
//		}
//		else if (p[i] >= 'a' && p[i] <= 'z')
//		{
//			ltr_l = 1;
//		}
//		else
//		{
//			otr = 1;
//		}
//	}
//	if (num + ltr_c + ltr_l + otr < 3)
//	{
//		return 0;
//	}
//	int j = 0;
//	for (i = 0; i < len; i++)
//	{
//		for (j = i + 1; j < len; j++)
//		{
//			if ((pw_cpy[j] == p[i]) && (pw_cpy[j + 1] == p[i + 1]) && (pw_cpy[j + 2] == p[i + 2]))
//			{
//				return 0;
//			}
//		}
//	}
//	return 1;
//}
//
//int main()
//{
//	char pw[100] = { 0 };
//	while (gets(pw) != NULL)
//	{
//		if (Judge_PW(pw))
//		{
//			printf("OK\n");
//		}
//		else
//		{
//			printf("NG\n");
//		}
//	}
//	return 0;
//}




//-----------------------------------------------
//现在有一种密码变换算法。
//九键手机键盘上的数字与字母的对应： 1--1， abc--2, def--3, ghi--4, jkl--5, mno--6, pqrs--7, tuv--8 wxyz--9, 0--0，
// 把密码中出现的小写字母都变成九键键盘对应的数字，如：a 变成 2，x 变成 9.
//而密码中出现的大写字母则变成小写之后往后移一位，如：X ，先变成小写，再往后移一位，变成了 y ，例外：Z 往后移是 a 。
//数字和其它的符号都不做变换。
//数据范围： 输入的字符串长度满足：1≤n≤100
//
//输入一组密码，长度不超过100个字符。
//
//输出密码变换后的字符串
//
//#include<string.h>
//
//int main()
//{
//	char pw[100] = { 0 };
//	gets(pw);
//	int i = 0;
//	for (i = 0; i < strlen(pw); i++)
//	{
//		if (pw[i] >= 'A' && pw[i] <= 'Z')
//		{
//			if (pw[i] == 'Z')
//			{
//				pw[i] = 'a';
//			}
//			else
//			{
//				pw[i] += 33;
//			}
//		}
//		else
//		{
//			if (pw[i] >= 'a' && pw[i] <= 'c')
//			{
//				pw[i] = '2';
//			}
//			else if (pw[i] >= 'd' && pw[i] <= 'f')
//			{
//				pw[i] = '3';
//			}
//			else if (pw[i] >= 'g' && pw[i] <= 'i')
//			{
//				pw[i] = '4';
//			}
//			else if (pw[i] >= 'j' && pw[i] <= 'l')
//			{
//				pw[i] = '5';
//			}
//			else if (pw[i] >= 'm' && pw[i] <= 'o')
//			{
//				pw[i] = '6';
//			}
//			else if (pw[i] >= 'p' && pw[i] <= 's')
//			{
//				pw[i] = '7';
//			}
//			else if (pw[i] >= 't' && pw[i] <= 'v')
//			{
//				pw[i] = '8';
//			}
//			else if (pw[i] >= 'w' && pw[i] <= 'z')
//			{
//				pw[i] = '9';
//			}
//		}
//	}
//	puts(pw);
//	return 0;
//}




//-----------------------------------------------
//某商店规定：三个空汽水瓶可以换一瓶汽水，允许向老板借空汽水瓶（但是必须要归还）。
//小张手上有n个空汽水瓶，她想知道自己最多可以喝到多少瓶汽水。
//数据范围：输入的正整数满足：1≤n≤100
//
//注意：本题存在多组输入。输入的 0 表示输入结束，并不用输出结果。
//
//输入文件最多包含 10 组测试数据，每个数据占一行，仅包含一个正整数 n（ 1 <= n <= 100 ），
//表示小张手上的空汽水瓶数。n = 0 表示输入结束，你的程序不应当处理这一行。
//
//对于每组测试数据，输出一行，表示最多可以喝的汽水瓶数。如果一瓶也喝不到，输出0。
//
//int main()
//{
//	int n = 0;
//	while (scanf("%d", &n), n != 0)
//	{
//		int count = 0;
//		while (n >= 3)
//		{
//			count += n / 3;
//			n = n / 3 + n % 3;
//		}
//		if ((n > 0) && (3 - n == 1))
//		{
//			count++;
//		}
//		printf("%d\n", count);
//	}
//	return 0;
//}




//-----------------------------------------------
//实现删除字符串中出现次数最少的字符，若出现次数最少的字符有多个，则把出现次数最少的字符都删除。
//输出删除这些单词后的字符串，字符串中其它字符保持原来的顺序。
//
//数据范围：输入的字符串长度满足：1≤n≤20 ，保证输入的字符串中仅出现小写字母
//
//字符串只包含小写英文字母, 不考虑非法输入，输入的字符串长度小于等于20个字节。
//
//删除字符串中出现次数最少的字符后的字符串。
//
//#include<string.h>
//
//int main()
//{
//	char str[21] = { 0 };
//	gets(str);
//	int len = strlen(str);
//	int flag[26] = { 0 };
//	int i = 0;
//	for (i = 0; i < len; i++)
//	{
//		flag[str[i] - 'a']++;
//	}
//	int min = 20;
//	for (i = 0; i < 26; i++)
//	{
//		if (flag[i] && flag[i] < min)
//		{
//			min = flag[i];
//		}
//	}
//	for (i = 0; i < len; i++)
//	{
//		if (flag[str[i] - 'a'] > min)
//		{
//			printf("%c", str[i]);
//		}
//	}
//	return 0;
//}




//-----------------------------------------------
//编写一个程序，将输入字符串中的字符按如下规则排序。
//规则 1 ：英文字母从 A 到 Z 排列，不区分大小写。
//如，输入： Type 输出： epTy
//规则 2 ：同一个英文字母的大小写同时存在时，按照输入顺序排列。
//如，输入： BabA 输出： aABb
//规则 3 ：非英文字母的其它字符保持原来的位置。
//如，输入： By ? e 输出： Be ? y
//数据范围：输入的字符串长度满足：1≤n≤1000
//输入描述：输入字符串
//输出描述：输出字符串
//
//#include<string.h>
//
//int main()
//{
//	char str[1001] = { 0 };
//	gets(str);
//	char ltr[1001] = { 0 };
//	int index = 0;
//	char i = 0;
//	int j = 0;
//	for (i = 'a'; i <= 'z'; i++)
//	{
//		for (j = 0; j < strlen(str); j++)
//		{
//			if ((str[j] == i) || ((str[j] + 32 == i) && (str[j] >= 'A' && str[j] <= 'Z')))
//			{
//				ltr[index++] = str[j];
//			}
//		}
//	}
//	for (j = 0, index = 0; j < strlen(str); j++)
//	{
//		if ((str[j] >= 'A' && str[j] <= 'Z') || (str[j] >= 'a' && str[j] <= 'z'))
//		{
//			str[j] = ltr[index++];
//		}
//	}
//	puts(str);
//	return 0;
//}




//-----------------------------------------------
//定义一个单词的“兄弟单词”为：交换该单词字母顺序（注：可以交换任意次），而不添加、删除、修改原有的字母就能生成的单词。
//兄弟单词要求和原来的单词不同。例如： ab 和 ba 是兄弟单词。 ab 和 ab 则不是兄弟单词。
//现在给定你 n 个单词，另外再给你一个单词 x ，让你寻找 x 的兄弟单词里，按字典序排列后的第 k 个单词是什么？
//注意：字典中可能有重复单词。
//
//数据范围：1≤n≤1000，输入的字符串长度满足：1≤len(str)≤10，1≤k < n
//
//输入描述：输入只有一行。 先输入字典中单词的个数n，再输入n个单词作为字典单词。 然后输入一个单词x 最后后输入一个整数k
//
//输出描述：第一行输出查找到x的兄弟单词的个数m 第二行输出查找到的按照字典顺序排序后的第k个兄弟单词，没有符合第k个的话则不用输出。
//
//#include<string.h>
//#include<stdlib.h>
//
//int cmp_str(const void* e1, const void* e2)
//{
//	return strcmp(*(char(*)[11])e1, *(char(*)[11])e2);
//}
//
//int main()
//{
//	int n = 0;
//	char str[1001][11] = { 0 };
//	char wrd[11] = { 0 };
//	int k = 0;
//	scanf("%d", &n);
//	int i = 0;
//	for (i = 0; i < n; i++)
//	{
//		scanf("%s", str[i]);
//	}
//	scanf("%s", wrd);
//	scanf("%d", &k);
//	char bro[1001][11] = { 0 };
//	int j = 0;
//	int count = 0;
//	int tmp1[26] = { 0 };
//	for (i = 0; i < strlen(wrd); i++)
//	{
//		tmp1[wrd[i] - 'a']++;
//	}
//	for (i = 0; i < n; i++)
//	{
//		int tmp2[26] = { 0 };
//		for (j = 0; j < strlen(str[i]); j++)
//		{
//			tmp2[str[i][j] - 'a']++;
//		}
//		if (strcmp(str[i], wrd))
//		{
//			int flag = 1;
//			for (j = 0; j < 26; j++)
//			{
//				if ((tmp1[j] != tmp2[j]))
//				{
//					flag = 0;
//					break;
//				}
//			}
//			if (flag)
//			{
//				strcpy(bro[count++], str[i]);
//			}
//		}
//	}
//	qsort(bro, count, sizeof(bro[0]), cmp_str);
//	printf("%d\n", count);
//	if (bro[k - 1][0])
//	{
//		printf("%s\n", bro[k - 1]);
//	}
//	return 0;
//}




//-----------------------------------------------
//对输入的字符串进行加解密，并输出。
//加密方法为：
//当内容是英文字母时则用该英文字母的后一个字母替换，同时字母变换大小写, 如字母a时则替换为B；字母Z时则替换为a；
//当内容是数字时则把该数字加1，如0替换1，1替换2，9替换0；
//其他字符不做变化。
//解密方法为加密的逆过程。
//数据范围：输入的两个字符串长度满足：1≤n≤1000  ，保证输入的字符串都是只由大小写字母或者数字组成
//输入描述：
//第一行输入一串要加密的密码
//第二行输入一串加过密的密码
//输出描述：
//第一行输出加密后的字符
//第二行输出解密后的字符
//
//#include<string.h>
//
//void Encrypt(char* p)
//{
//	int i = 0;
//	for (i = 0; i < strlen(p); i++)
//	{
//		if (p[i] >= 'A' && p[i] <= 'Z')
//		{
//			if (p[i] == 'Z')
//			{
//				p[i] = 'a';
//			}
//			else
//			{
//				p[i] += 33;
//			}
//		}
//		else if (p[i] >= 'a' && p[i] <= 'z')
//		{
//			if (p[i] == 'z')
//			{
//				p[i] = 'A';
//			}
//			else
//			{
//				p[i] -= 31;
//			}
//		}
//		else if (p[i] >= '0' && p[i] <= '9')
//		{
//			if (p[i] == '9')
//			{
//				p[i] = '0';
//			}
//			else
//			{
//				p[i] += 1;
//			}
//		}
//	}
//}
//
//void Decode(char* p)
//{
//	int i = 0;
//	for (i = 0; i < strlen(p); i++)
//	{
//		if (p[i] >= 'A' && p[i] <= 'Z')
//		{
//			if (p[i] == 'A')
//			{
//				p[i] = 'z';
//			}
//			else
//			{
//				p[i] += 31;
//			}
//		}
//		else if (p[i] >= 'a' && p[i] <= 'z')
//		{
//			if (p[i] == 'a')
//			{
//				p[i] = 'Z';
//			}
//			else
//			{
//				p[i] -= 33;
//			}
//		}
//		else if (p[i] >= '0' && p[i] <= '9')
//		{
//			if (p[i] == '0')
//			{
//				p[i] = '9';
//			}
//			else
//			{
//				p[i] -= 1;
//			}
//		}
//	}
//}
//
//int main()
//{
//	char str1[1001] = { 0 };
//	gets(str1);
//	char str2[1001] = { 0 };
//	gets(str2);
//	Encrypt(str1);
//	Decode(str2);
//	puts(str1);
//	puts(str2);
//	return 0;
//}




//-----------------------------------------------
//对字符串中的所有单词进行倒排。
//说明：
//1、构成单词的字符只有26个大写或小写英文字母；
//2、非构成单词的字符均视为单词间隔符；
//3、要求倒排后的单词间隔符以一个空格表示；如果原字符串中相邻单词间有多个间隔符时，倒排转换后也只允许出现一个空格间隔符；
//4、每个单词最长20个字母；
//数据范围：字符串长度满足：1≤n≤10000
//输入描述：
//输入一行，表示用来倒排的句子
//输出描述：
//输出句子的倒排结果
//
//#include<string.h>
//
//void reverse(char* p, int left, int right)
//{
//	while (left < right)
//	{
//		char tmp = p[left];
//		p[left] = p[right];
//		p[right] = tmp;
//		left++;
//		right--;
//	}
//}
//
//int main()
//{
//	char str[10001] = { 0 };
//	gets(str);
//	int left = 0;
//	int right = 0;
//	while (str[right] != '\0')
//	{
//		while ((str[right] >= 'A' && str[right] <= 'Z') || (str[right] >= 'a' && str[right] <= 'z'))
//		{
//			right++;
//		}
//		reverse(str, left, right - 1);
//		while ((str[right] != '\0') && !((str[right] >= 'A' && str[right] <= 'Z') || (str[right] >= 'a' && str[right] <= 'z')))
//		{
//			right++;
//		}
//		left = right;
//	}
//	reverse(str, 0, strlen(str) - 1);
//	int i = 0;
//	for (i = 0; i < strlen(str); i++)
//	{
//		if ((str[i] >= 'A' && str[i] <= 'Z') || (str[i] >= 'a' && str[i] <= 'z'))
//		{
//			printf("%c", str[i]);
//		}
//		else if ((str[i + 1] >= 'A' && str[i + 1] <= 'Z') || (str[i + 1] >= 'a' && str[i + 1] <= 'z'))
//		{
//			printf(" ");
//		}
//	}
//	return 0;
//}




//-----------------------------------------------<HJ_32>
//Catcher是MCA国的情报员，他工作时发现敌国会用一些对称的密码进行通信，比如
//像这些ABBA，ABA，A，123321，但是他们有时会在开始或结束时加入一些无关的
//字符以防止别国破解。比如进行下列变化 ABBA->12ABBA, ABA->ABAKK, 123321->51233214。
//因为截获的串太长了，而且存在多种可能的情况（abaaab可看作是aba, 或baaab的加密形式），
//Cathcer的工作量实在是太大了，他只能向电脑高手求助，你能帮Catcher找出最长的有效密码串吗？
//数据范围：字符串长度满足：1≤n≤2500
//输入描述：
//输入一个字符串（字符串的长度不超过2500）
//输出描述：
//返回有效密码串的最大长度
//
//#include<string.h>
//
//void reverse(char* p)
//{
//    int left = 0;
//    int right = strlen(p) - 1;
//    while (left < right)
//    {
//        char tmp = p[left];
//        p[left] = p[right];
//        p[right] = tmp;
//        left++;
//        right--;
//    }
//}
//
//int main()
//{
//    char str[2501] = { 0 }, tmp1, tmp2;
//    gets(str);
//    int count = 0;
//    int i = 0;
//    int len = strlen(str);
//    char strre[2501] = { 0 };
//    strcpy(strre, str);
//    reverse(strre);
//    for (int i = 0; i < len; i++)
//    {
//        for (int j = 0; j <= i; j++)
//        {
//            tmp1 = str[len - i + j];
//            str[len - i + j] = 0;
//            tmp2 = strre[len - j];
//            strre[len - j] = 0;
//            if (strcmp(strre + i - j, str + j) == 0)
//                count = len - i;
//            str[len - i + j] = tmp1;
//            strre[len - j] = tmp2;
//            if (count != 0)
//                break;
//        }
//        if (count != 0)
//            break;
//    }
//    printf("%d\n", count);
//    return 0;
//}




//-----------------------------------------------
//原理：ip地址的每段可以看成是一个0 - 255的整数，把每段拆分成一个二进制形式组合起来，然后把这个二进制数转变成
//一个长整数。
//举例：一个ip地址为10.0.3.193
//每段数字             相对应的二进制数
//10                   00001010
//0                    00000000
//3                    00000011
//193                  11000001
//组合起来即为：00001010 00000000 00000011 11000001, 转换为10进制数就是：167773121，即该IP地址转换后的数字就是它了。
//数据范围：保证输入的是合法的 IP 序列
//输入
//1 输入IP地址
//2 输入10进制型的IP地址
//输出
//1 输出转换成10进制的IP地址
//2 输出转换后的IP地址
//
//#include<string.h>
//#include<math.h>
//
//long long IP_to_IP10(char* p)
//{
//
//	char* left = p + strlen(p) - 1;
//	char* right = p + strlen(p) - 1;
//	int IP_2[32] = { 0 };
//	int i = 0;
//	while (left >= p)
//	{
//		while ((left >= p) && (*left != '.'))
//		{
//			left--;
//		}
//		int sz = 0;
//		int ret = 0;
//		while (left < right)
//		{
//			ret += (int)(((*right) - '0') * pow(10, sz++));
//			right--;
//		}
//		int len = 0;
//		int tmp = ret;
//		while (tmp)
//		{
//			len++;
//			tmp /= 2;
//		}
//		tmp = ret;
//		int j = 0;
//		while (j < 8)
//		{
//			if (j < len)
//			{
//				IP_2[i++] = tmp & 1;
//				tmp /= 2;
//			}
//			else
//			{
//				IP_2[i++] = 0;
//			}
//			j++;
//		}
//		left--;
//		right = left;
//	}
//	long long key = 0;
//	for (i = 0; i < 32; i++)
//	{
//		key += (long long)(IP_2[i] * pow(2, i));
//	}
//	return key;
//}
//
//void reverse(int* p, int left, int right)
//{
//	while (left < right)
//	{
//		int tmp = p[left];
//		p[left] = p[right];
//		p[right] = tmp;
//		left++;
//		right--;
//	}
//}
//
//void IP10_to_IP(long long IP10)
//{
//	int IP_2[32] = { 0 };
//	long long tmp = IP10;
//	int i = 0;
//	while ((i < 32) && (tmp))
//	{
//		IP_2[i++] = tmp & 1;
//		tmp /= 2;
//	}
//	int left = 0;
//	int right = 0;
//	while (right < 32)
//	{
//		int j = 0;
//		while ((j < 8) && (right < 32))
//		{
//			right++;
//			j++;
//		}
//		reverse(IP_2, left, right - 1);
//		left = right;
//	}
//	reverse(IP_2, 0, 31);
//	i = 0;
//	int point = 3;
//	while (i < 32)
//	{
//		int j = 0;
//		int ret = 0;
//		while ((j < 8) && (i < 32))
//		{
//			ret += (int)(IP_2[i++] * pow(2, j));
//			j++;
//		}
//		printf("%d", ret);
//		if (point--)
//		{
//			printf(".");
//		}
//	}
//}
//
//int main()
//{
//	char IP[16] = { 0 };
//	gets(IP);
//	long long IP10 = 0;
//	scanf("%lld", &IP10);
//	long long key = IP_to_IP10(IP);
//	printf("%lld\n", key);
//	IP10_to_IP(IP10);
//	return 0;
//}




//-----------------------------------------------
//Lily上课时使用字母数字图片教小朋友们学习英语单词，每次都需要把这些图片按照大小（ASCII码值从小到大）排列收好。
//Lily使用的图片使用字符"A"到"Z"、"a"到"z"、"0"到"9"表示。
//数据范围：每组输入的字符串长度满足：1≤n≤1000
//输入描述：
//一行，一个字符串，字符串中的每个字符表示一张Lily使用的图片。
//输出描述：
//Lily的所有图片按照从小到大的顺序输出
//
//#include<stdlib.h>
//#include<string.h>
//
//int cmp_char(const void* e1, const void* e2)
//{
//	return *(char*)e1 - *(char*)e2;
//}
//
//int main()
//{
//	char str[1001] = { 0 };
//	gets(str);
//	qsort(str, strlen(str), sizeof(str[0]), cmp_char);
//	puts(str);
//	return 0;
//}




//-----------------------------------------------
//蛇形矩阵是由1开始的自然数依次排列成的一个矩阵上三角形。
//例如，当输入5时，应该输出的三角形为：
//1 3 6 10 15
//2 5 9 14
//4 8 13
//7 12
//11
//输入描述：
//输入正整数N（N不大于100）
//输出描述：
//输出一个N行的蛇形矩阵。
//
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int arr[100][100] = { 0 };
//	int row = 0;
//	int i = 0;
//	int j = 0;
//	int num = 1;
//	for (i = 0; i < n; i++)
//	{
//		row = i;
//		for (j = 0; row >= 0 && j <= i; row--, j++)
//		{
//			arr[row][j] = num++;
//		}
//	}
//	for (i = 0; i < n; i++)
//	{
//		for (j = 0; j < n - i; j++)
//		{
//			printf("%d ", arr[i][j]);
//		}
//		printf("\n");
//	}
//	return 0;
//}




//-----------------------------------------------
//有一种技巧可以对数据进行加密，它使用一个单词作为它的密匙。下面是它的工作原理：
//首先，选择一个单词作为密匙，如TRAILBLAZERS。如果单词中包含有重复的字母，只保留
//第1个，将所得结果作为新字母表开头，并将新建立的字母表中未出现的字母按照正常字母表顺序加入新字母表。如下所示：
//A B C D E F G H I J K L M N O P Q R S T U V W X Y Z
//T R A I L B Z E S C D F G H J K M N O P Q U V W X Y(实际需建立小写字母的字母表，此字母表仅为方便演示）
//上面其他用字母表中剩余的字母填充完整。在对信息进行加密时，信息中的每个字母被固定于顶上那行，并用下面那行的对
//应字母一一取代原文的字母(字母字符的大小写状态应该保留)。
//因此，使用这个密匙， Attack AT DAWN(黎明时攻击)就会被加密为Tpptad TP ITVH。
//请实现下述接口，通过指定的密匙和明文得到密文。
//数据范围：1≤n≤100，保证输入的字符串中仅包含小写字母
//输入描述：
//先输入key和要加密的字符串
//输出描述：
//返回加密后的字符串
//
//#include<string.h>
//
//void RMV_duplicate(char* p)
//{
//	char tmp[27] = { 0 };
//	int i = 0;
//	int j = 0;
//	int k = 0;
//	for (i = 0; i < strlen(p); i++)
//	{
//		int flag = 1;
//		for (j = 0; j < k; j++)
//		{
//			if (tmp[j] == p[i])
//			{
//				flag = 0;
//				break;
//			}
//		}
//		if (flag)
//		{
//			tmp[k++] = p[i];
//		}
//	}
//	memset(p, 0, strlen(p));
//	strcpy(p, tmp);
//}
//
//void RMK_alphabet(char* k, char* a)
//{
//	int index[26] = { 0 };
//	int i = 0;
//	for (i = 0; i < strlen(k); i++)
//	{
//		a[i] = k[i];
//		index[k[i] - 'a']++;
//	}
//	int j = 0;
//	for (j = 0; j < 26 && i < 26; j++)
//	{
//		if (index[j] == 0)
//		{
//			a[i++] = j + 'a';
//		}
//	}
//}
//
//void Encrypt(char* s, char* a)
//{
//	int i = 0;
//	for (i = 0; i < strlen(s); i++)
//	{
//		s[i] = a[s[i] - 'a'];
//	}
//}
//
//int main()
//{
//	char key[27] = { 0 };
//	gets(key);
//	char str[101] = { 0 };
//	gets(str);
//	RMV_duplicate(key);
//	char alphabet[27] = { 0 };
//	RMK_alphabet(key, alphabet);
//	Encrypt(str, alphabet);
//	puts(str);
//	return 0;
//}




//-----------------------------------------------
//有一种兔子，从出生后第3个月起每个月都生一只兔子，小兔子长到第三个月后每个月又生一只兔子。
//例子：假设一只兔子第3个月出生，那么它第5个月开始会每个月生一只兔子。
//一月的时候有一只兔子，假如兔子都不死，问第n个月的兔子总数为多少？
//数据范围：输入满足：1≤n≤31
//输入描述：
//输入一个int型整数表示第n个月
//输出描述：
//输出对应的兔子总数

//int main()
//{
//
//	return 0;
//}




//-----------------------------------------------
//假设一个球从任意高度自由落下，每次落地后反跳回原高度的一半; 再落下, 求它在第5次落地时，共经历多少米？第5次反弹多高？
//数据范围：输入的小球初始高度满足：1≤n≤1000  ，且保证是一个整数
//输入描述：
//输入起始高度，int型
//输出描述：
//分别输出第5次落地时，共经过多少米以及第5次反弹多高。
//注意：你可以认为你输出保留六位或以上小数的结果可以通过此题。
//
//int main()
//{
//	int H = 0;
//	scanf("%d", &H);
//	double s = 0.0;
//	double h = 0.5 * H;
//	int count = 4;
//	while (count--)
//	{
//		s += 2 * h;
//		h *= 0.5;
//	}
//	printf("%lf\n%lf\n", s + H, h);
//	return 0;
//}






//-----------------------------------------------
//输入一行字符，分别统计出包含英文字母、空格、数字和其它字符的个数。
//数据范围：输入的字符串长度满足：1≤n≤1000
//输入描述：
//输入一行字符串，可以有空格
//输出描述：
//统计其中英文字符，空格字符，数字字符，其他字符的个数
//
//#include<string.h>
//
//int main()
//{
//	char str[1001] = { 0 };
//	gets(str);
//	int ltr = 0;
//	int blnk = 0;
//	int num = 0;
//	int otr = 0;
//	int i = 0;
//	for (i = 0; i < strlen(str); i++)
//	{
//		if ((str[i] >= 'A' && str[i] <= 'Z') || (str[i] >= 'a' && str[i] <= 'z'))
//		{
//			ltr++;
//		}
//		else if (str[i] == ' ')
//		{
//			blnk++;
//		}
//		else if (str[i] >= '0' && str[i] <= '9')
//		{
//			num++;
//		}
//		else
//		{
//			otr++;
//		}
//	}
//	printf("%d\n%d\n%d\n%d\n", ltr, blnk, num, otr);
//	return 0;
//}




//-----------------------------------------------
//现有n种砝码，重量互不相等，分别为 m1, m2, m3…mn ；
//每种砝码对应的数量为 x1, x2, x3...xn 。现在要用这些砝码去称物体的重量(放在同一侧)，问能称出多少种不同的重量。
//注：称重重量包括 0
//数据范围：每组输入数据满足：1≤n≤10，1≤mi≤2000，1≤xi≤10
//输入描述：
//对于每组测试数据：
//第一行：n --- 砝码的种数(范围[1, 10])
//第二行：m1 m2 m3 ... mn --- 每种砝码的重量(范围[1, 2000])
//第三行：x1 x2 x3 ....xn --- 每种砝码对应的数量(范围[1, 10])
//输出描述：
//利用给定的砝码可以称出的不同的重量数

int main()
{
	int n = 0;
	int weight[10] = { 0 };
	int num[10] = { 0 };
	int count = 0;
	int i = 0;
	for (i = 0; i < n; i++)
	{
		scanf("%d", &weight[i]);
	}
	for (i = 0; i < n; i++)
	{
		scanf("%d", &num[i]);
	}
	
	return 0;
}