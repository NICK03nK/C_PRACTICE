#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

//�ݹ鷽ʽʵ�ִ�ӡһ��������ÿһλ
//
//void Print(int n)
//{
//	if (n > 9)
//	{
//		Print(n / 10);
//	}
//	printf("%d ", n % 10);
//}
//
//int main()
//{
//	int num = 0;
//	scanf("%d", &num);
//	Print(num);
//	return 0;
//}



//----------------------------------------------
//�ݹ�ͷǵݹ�ֱ�ʵ����n�Ľ׳ˣ���������������⣩
//
//����
//int Fac(int n)
//{
//	int ret = 1;
//	int i = 0;
//	for (i = 1; i <= n; i++)
//	{
//		ret *= i;
//	}
//	return ret;
//}


//�ݹ�
//int Fac(int n)
//{
//	if (n > 1)
//	{
//		return Fac(n - 1) * n;
//	}
//	return 1;
//}
//
//
//int main()
//{
//	int num = 0;
//	scanf("%d", &num);
//	int n = Fac(num);
//	printf("%d\n", n);
//	return 0;
//}



//----------------------------------------------
//�ݹ�ͷǵݹ�ֱ�ʵ��strlen
// 
//����
//int my_strlen(char* str)
//{
//	int count = 0;
//	while (*str != '\0')
//	{
//		count++;
//		str++;
//	}
//	return count;
//}


//�ݹ�
//int my_strlen(char* str)
//{
//	if (*str != '\0')
//	{
//		return 1 + my_strlen(str + 1);
//	}
//	else
//	{
//		return 0;
//	}
//}
//
//
//int main()
//{
//	char arr[] = "focus on your target!";
//	int ret = my_strlen(arr);
//	printf("%d\n", ret);
//	return 0;
//}




//----------------------------------------------
//��дһ������ reverse_string(char * string)���ݹ�ʵ�֣�
//ʵ�֣��������ַ����е��ַ��������У����������ӡ
//Ҫ�󣺲���ʹ��C�������е��ַ�����������

#include<string.h>

void reverse_string(char* str)
{
	int len = strlen(str);
	int tmp = *str;
	*str = *(str + len - 1);
	*(str + len - 1) = '\0';
	if (strlen(str + 1) >= 2)
	{
		reverse_string(str + 1);
	}
	*(str + len - 1) = tmp;
}

int main()
{
	char arr[] = "abcdef";
	reverse_string(arr);
	printf("%s\n",arr);
	return 0;
}




//----------------------------------------------
//дһ���ݹ麯��DigitSum(n)������һ���Ǹ����������������������֮��
// 
//int DigitSum(int n)
//{
//	if (n > 9)
//	{
//		return DigitSum(n / 10) + n % 10;
//	}
//	return n % 10;
//}
//
//
//int main()
//{
//	int num = 0;
//	scanf("%d", &num);
//	int ret = DigitSum(num);
//	printf("%d\n", ret);
//	return 0;
//}



//----------------------------------------------
//��дһ������ʵ��n��k�η���ʹ�õݹ�ʵ��
// 
//int my_pow(int num, int k)
//{
//	if (k > 1)
//	{
//		return my_pow(num, k - 1) * num;
//	}
//	return num;
//}
//
//int main()
//{
//	int num = 0;
//	int k = 0;
//	scanf("%d %d", &num, &k);
//	int ret = my_pow(num, k);
//	printf("%d\n", ret);
//	return 0;
//}




//----------------------------------------------
//�ݹ�ͷǵݹ�ֱ�ʵ�����n��쳲�������
// 
//����
//int Fib(int n)
//{
//	int a = 1;
//	int b = 1;
//	int c = 1;
//	while (n >= 3)
//	{
//		c = a + b;
//		a = b;
//		b = c;
//		n--;
//	}
//	return c;
//}


//�ݹ�
//int Fib(int n)
//{
//	if (n >= 3)
//	{
//		return Fib(n - 1) + Fib(n - 2);
//	}
//	return 1;
//}
//
//int main()
//{
//	int num = 0;
//	scanf("%d", &num);
//	int ret = Fib(num);
//	printf("%d\n", ret);
//	return 0;
//}