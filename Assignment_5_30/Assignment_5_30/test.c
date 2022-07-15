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

int Find_Key(int a[10][10], int x, int y, int k, int* kx, int* ky)
{
	int i = 0;
	int j = y - 1;
	while (i < x && j >= 0)
	{
		if (a[i][j] < k)
		{
			i++;
		}
		else if (a[i][j] > k)
		{
			j--;
		}
		else
		{
			*kx = i;
			*ky = j;
			return 1;
		}
	}
	*kx = -1;
	*ky = -1;
	return 0;
}

int main()
{
	int arr[10][10] = { 0 };
	int x = 0;
	int y = 0;
	scanf("%d %d", &x, &y);
	int i = 0;
	int j = 0;
	for (i = 0; i < x; i++)
	{
		for (j = 0; j < y; j++)
		{
			scanf("%d", &arr[i][j]);
		}
	}
	int key = 0;
	scanf("%d", &key);
	int kx = -1;
	int ky = -1;
	if (Find_Key(arr, x, y, key, &kx, &ky))
	{
		printf("�ҵ��ˣ����±�Ϊ>>%d %d\n", kx, ky);
	}
	else
	{
		printf("�Ҳ���\n");
	}
	return 0;
}