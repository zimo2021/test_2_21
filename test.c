#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
//int main()
//{
//	int arr[] = {};
//	srand((unsigned)time(NULL));
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int i = 0;
//	int j = 0;
//	int count = 1;
//	for (i = 0; i < sz - 1;i++)
//	{
//		for (j = i + 1; j < sz; j++)
//
//		{
//			if (arr[i] == arr[j])
//			{
//				count++;
//				arr[j] = rand();
//			}
//		}
//		if (count >= 2)
//		{
//			printf("%d ", arr[i]);
//		}
//		count = 1;
//	}
//	return 0;
//}��������������������������������������������������������
//����һ���������� nums ��һ������Ŀ��ֵ target�������ڸ��������ҳ� ��ΪĿ��ֵ ���� ���� ���������������ǵ������±ꡣ
//int main()
//{
//	int arr[] = { 2,3,4,5,6 };
//	int target = 5;
//	int i = 0;
//	int j = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for (i = 0; i < sz - 1; i++)
//	{
//		for (j = i+1; j < sz; j++)
//		{
//			if (arr[i] + arr[j] == target)
//			{
//				printf("%d %d", i, j);
//				break;
//			}
//		}
//	}
//	return 0;
//}����������������������������������������������������
/*���룺l1 = [2,4,3], l2 = [5,6,4]
�����[7, 0, 8]
���ͣ�342 + 465 = 807.*/
//int main()
//{
//	int arr1[] = { 1,5,6,3 };
//	int arr2[] = { 2,5,1,5 };
//	int arr3[] = { 0 };
//	int sz = sizeof(arr1) / sizeof(arr1[0]);
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		if (i == 0)
//		{
//			arr3[i] = (arr1[i] + arr2[i]) % 10;
//		}
//		else
//		{
//			arr3[i] = (arr1[i] + arr2[i]) % 10 + (arr1[i - 1] + arr2[i - 1]) / 10;
//		}
//		printf("arr3[%d]=%d", i, arr3[i]);
//	}
//	
//	return 0;
//}������������������������������������������������
//����һ���ַ����������ҳ����в������ظ��ַ��� ��Ӵ� �ĳ��ȡ�
/*���磺����: s = "abcabcbb"
		���: 3
		���� : ��Ϊ���ظ��ַ�����Ӵ��� "abc"�������䳤��Ϊ 3��*/
//int sum(char* arr)
//{
//	int count = 0;
//	while (*arr)
//	{
//		if (*arr != ' ')
//		{
//			count++;
//		}
//		arr += 1;
//	}
//	return count;
//}
//void dispel(char arr[],int sz)
//{
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < sz - 1; i++)
//	{
//		for (j = i + 1; j < sz; j++)
//		{
//			if (arr[i] == arr[j])
//			{
//				arr[j] = ' ';
//			}
//		}
//	}
//}
//int main()
//{
//	char arr[] = "abcabcbb";
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	dispel(arr,sz);
//	int ret = sum(arr);
//	printf("%d\n", ret);
//}������������������������������������������������������������
/*����������СΪ m �� n �����򣨴�С�������� nums1 �� nums2�������ҳ������������������������λ����
  ���룺nums1 = [1,3], nums2 = [2]
  �����2.00000
  ���ͣ��ϲ����� = [1,2,3] ����λ�� 2 */
//void plus(int sz2, int arr2[],int j)
//{
//	int arr3[6] = { 0 };
//	int i = 0;
//	for (i = 0; i < sz2; i++)
//	{
//		if (i < j)
//		{
//			arr3[i] = arr2[i];
//		}
//		else
//		{
//			arr3[i+1] = arr2[i];
//		}
//	}
//	for (i = 0; i <= sz2; i++)
//	{
//		arr2[i] = arr3[i];
//	}
//}
//void recbn(int arr1[], int arr2[], int sz1,int sz2)
//{
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < sz1; i++)
//	{
//		for (j = 0; j < sz2; j++)
//		{
//			if (arr1[i] < arr2[j])
//			{
//				plus(sz2, arr2,j);
//				arr2[j] = arr1[i];
//				break;
//			}
//			if (j == sz2 - 1)
//			{
//				arr2[j + 1] = arr1[i];
//				break;
//			}
//		}
//		sz2 += 1;
//	}
//}
//int main()
//{
//	int arr1[] = { 1,5,6 };
//	int arr2[] = { 2,4,8 };
//	int sz1 = sizeof(arr1) / sizeof(arr1[0]);
//	int sz2 = sizeof(arr2) / sizeof(arr2[0]);
//	recbn(arr1, arr2, sz1,sz2);
//	int i = 0;
//	for (i = 0; i < 6; i++)
//	{
//		printf("arr2[%d]=%d\n", i, arr2[i]);
//	}
//	return 0;
//}   ��û���꣬�����
//����������������������������������������������������������������
//������С��  
/* ��
int a=0;
a�ĵ�ַΪ0x00 00 00 00 14
���䴢�淽ʽΪ00 00 00 14��Ϊ��˴���
���䴢�淽ʽΪ14 00 00 00��ΪС�˴���
*/
//дһ�������жϻ����Ĵ�С��
//int main()
//{
//	int a = 1;
//	char* p =(char*)&a;
//	if (*p == 1)
//	{
//		printf("С��\n");//��ΪС��
//	}
//	else
//	{
//		printf("���\n");
//	}
//	return 0;
//}
//��װΪ����
//int check()
//{
//	int i = 1;
//	return *(char*)&i;
//}
//int main()
//{
//	int ret=check();
//	if (ret == 1)
//	{
//		printf("С��\n");
//	}
//	else
//	{
//		printf("���\n");
//	}
//	return 0;
//}
//int main()
//{
//	char a = -1;
//	signed char b = -1;
//	unsigned char c = -1;
//	printf("a=%d b=%d c=%d", a, b, c);//a=-1 b=-1 c=255
//	//ԭ��a,b,c�е�������ͬ Ϊ��11111111 ����ȡ�����ķ�ʽ��ͬ��a,bΪ�з�������1��ʾ����λ��%dȡ����Ϊ���Σ�Ҫ���������������λ��ͬ��ǰ�油24λ1��cΪ�޷�������ǰ�油0
//	return 0;
//}
//int main()
//{
//	char a = -128;
//	char b = 128;//char���ʹ治��128�����Ϊ127��127+1������Ϊ��10000000 Ϊ-128 ��a��ͬ
//	printf("%u %u", a,b);//%u��ӡ�޷������� %d��ӡ�з�������  �����ͬΪ��4294967168
//	return 0;
//}
//int main()
//{
//	char arr[1000];
//	int i = 0;
//	for (i = 0; i < 1000; i++)
//	{
//		arr[i] = -1 - i;
//	}
//	printf("%d", strlen(arr));//255  strlen����0��ֹͣ����
//	return 0;
//}
//int main()
//{
//	int i = 0;
//	for (i = 0; i <= 255; i++)
//	{
//		printf("haha\n");//���޴�ӡ  ��Ϊchar��ֻ�ܴ���255����
//	}
//	return 0;
//}��������������������������������������������������������
//float ���͵Ĵ��淽ʽ�����ʱ�׼��
/*
(-1)^s*M*2^E
sΪ����λ  MΪ��������λ�ɴ���1С��2���� EΪ�ƶ���λ��
��5.5  ������λΪ101.1  ����(-1)^0*1.011*2^2
��ʮ��λ����λ�洢��ʽΪ sռһλ Ϊ0 ��E+127���������ô棩��ռ8λ Ϊ00000010 ����1.011��1�������011 ��0
����Ϊ0100 0000 1011 0000 0000 0000 0000 0000
ʮ�����ƣ�4 0    b     0   0    0    0    0
*/
//int main()
//{
//	float f = 5.5;//00 00 b0 40(40 b0 00 00)
//
//	return 0;
//}��������������������������������������������������������������������
//int main()
//{
//	int a = 9;
//	float* p = (float*)&a;
//	printf("%d\n", a);//9
//	printf("%f\n", *p);//0
//	*p = 9.0;
//	printf("%d\n", a);//������
//	printf("%f\n", *p);//9.000000  �漰��һ����ȡ������
//	return 0;
//}
//int main()
//{
//	char arr1[] = "abcdef";
//	char arr2[] = "abcdef";
//	char* p1= "abcdef";
//	char* p2= "abcdef";
//	if (arr1 == arr2)
//	{
//		printf("��\n");
//	}
//	else
//	{
//		printf("��\n");
//	}
//	if (p1 == p2)
//	{
//		printf("��\n");
//	}
//	else
//	{
//		printf("��\n");//���Ϊ �� ��  arr1 �� arr2��ַ��ͬ ����ֵ��ͬ  ��p1 ��p2Ϊָ�� ��arr1��arr2������ͬ ����ʹ��ͬһָ�� ��p1=p2
//	}
//	return 0;
//}