#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

//�ַ�������
//ʵ��һ�����������������ַ����е�k���ַ�
//ABCD����һ���ַ��õ�BCDA
//ABCD���������ַ��õ�CDAB
//
//#include<string.h>
//
//void reverse(char* left, char* right)
//{
//	while (left < right)
//	{
//		char tmp = *left;
//		*left = *right;
//		*right = tmp;
//		left++;
//		right--;
//	}
// }
//
//void rotate_str(char* p, int k, int len)
//{
//	//����
//	reverse(p, p + len - 1);
//	reverse(p + len - k, p + len - 1);
//	reverse(p, p + len - k - 1);
//
//	//����
//	/*reverse(p, p + len - 1);
//	reverse(p, p + k - 1);
//	reverse(p + k, p + len - 1);*/
//}
//
//int main()
//{
//	char arr[20] = { 0 };
//	gets(arr);
//	int k = 0;
//	scanf("%d", &k);
//	int len = strlen(arr);
//	k %= len;
//	rotate_str(arr, k, len);
//	puts(arr);
//	return 0;
//}




//-----------------------------------------------
//���Ͼ���
//��һ�����־��󣬾����ÿ�д������ǵ����ģ�������ϵ����ǵ�����
//���д�����������ľ����в���ĳ�������Ƿ���ڡ�
//Ҫ��ʱ�临�Ӷ�С��O(N)