#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

//���������������е����У����������кϲ�Ϊһ���������в����
//
//int main()
//{
//	int m = 0;
//	int n = 0;
//	scanf("%d %d", &m, &n);
//	int arr1[1000] = { 0 };
//	int arr2[1000] = { 0 };
//	int i = 0;
//	for (i = 0; i < m; i++)
//	{
//		scanf("%d", &arr1[i]);
//	}
//	for (i = 0; i < n; i++)
//	{
//		scanf("%d", &arr2[i]);
//	}
//	i = 0;
//	int j = 0;
//	while (i < m && j < n)
//	{
//		if (arr1[i] < arr2[j])
//		{
//			printf("%d ", arr1[i]);
//			i++;
//		}
//		else
//		{
//			printf("%d ", arr2[j]);
//			j++;
//		}
//	}
//	if (i == m)
//	{
//		for (; j < n; j++)
//		{
//			printf("%d ", arr2[j]);
//		}
//	}
//	else if (j == n)
//	{
//		for (; i < m; i++)
//		{
//			printf("%d ", arr1[i]);
//		}
//	}
//	return 0;
//}




//-----------------------------------------------
//С����ϲ�����֣�����ϲ��0��1�������ڵõ���һ���������ÿλ�������0��1��
//���ĳһλ���������Ͱ������1�������ż������ô�Ͱ������0������ش������õ������Ƕ���
//
//#include<math.h>
//
//int main()
//{
//    int n = 0;
//    scanf("%d", &n);
//    int ret = 0;
//    int i = 0;
//    for (i = 0; n > 0; i++)
//    {
//        int tmp = n % 10;
//        if (tmp % 2 == 0)
//        {
//            tmp = 0;
//        }
//        else
//        {
//            tmp = 1;
//        }
//        ret += tmp * pow(10, i);
//        n /= 10;
//    }
//    printf("%d\n", ret);
//    return 0;
//}




//-----------------------------------------------
//KiKiѧϰ��ѭ����BoBo��ʦ��������һϵ�д�ӡͼ������ϰ���������Ǵ�ӡ�á�*����ɵĴ��ո�ֱ��������ͼ��
//
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < n; i++)
//	{
//		for (j = 0; j < n - i - 1; j++)
//		{
//			printf("  ");
//		}
//		for (j = 0; j <= i; j++)
//		{
//			printf("* ");
//		}
//		printf("\n");
//	}
//	return 0;
//}




//-----------------------------------------------
//KiKi�ǳ�ϲ����������һ�ҵ�����������һ���·������˽⵽
//��������ǡ�˫11����11��11�գ�������·���7�ۣ���˫12�� ��12��12�գ�
//������·���8�ۣ�������Ż�ȯ���Զ����50Ԫ���Ż�ȯֻ����˫11��˫12ʹ�ã�
//��KiKi����������Ǯ��

//���룺һ�У��ĸ����֣���һ������ʾС�����е��·��۸񣬵ڶ��͵����������ֱ��ʾ
//������·ݡ���������ڡ����ĸ�������ʾ�Ƿ����Ż�ȯ�����Ż�ȯ��1��ʾ�����Ż�ȯ��0��ʾ��
//ע���������ڱ�ֻ֤�С�˫11���͡�˫12��

//�����һ�У�С��ʵ�ʻ���Ǯ����������λС����������ʾ����Ҫָ���̼ҵ�����Ǯ��

int main()
{
	double price = 0.0;
	int month = 0;
	int day = 0;
	int ticket = 0;
	double pay = 0.0;
	scanf("%lf %d %d %d", &price, &month, &day, &ticket);
	if (month == 11 && day == 11)
	{
		pay = 0.7 * price;
	}
	else if (month == 12 && day == 12)
	{
		pay = 0.8 * price;
	}
	if (ticket)
	{
		pay -= 50;
	}
	if (pay < 0)
	{
		pay = 0.0;
	}
	printf("%.2lf", pay);
	return 0;
}