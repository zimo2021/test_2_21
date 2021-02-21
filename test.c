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
//}————————————————————————————
//给定一个整数数组 nums 和一个整数目标值 target，请你在该数组中找出 和为目标值 的那 两个 整数，并返回它们的数组下标。
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
//}——————————————————————————
/*输入：l1 = [2,4,3], l2 = [5,6,4]
输出：[7, 0, 8]
解释：342 + 465 = 807.*/
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
//}————————————————————————
//给定一个字符串，请你找出其中不含有重复字符的 最长子串 的长度。
/*例如：输入: s = "abcabcbb"
		输出: 3
		解释 : 因为无重复字符的最长子串是 "abc"，所以其长度为 3。*/
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
//}——————————————————————————————
/*给定两个大小为 m 和 n 的正序（从小到大）数组 nums1 和 nums2。请你找出并返回这两个正序数组的中位数。
  输入：nums1 = [1,3], nums2 = [2]
  输出：2.00000
  解释：合并数组 = [1,2,3] ，中位数 2 */
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
//}   还没做完，待解决
//————————————————————————————————
//机器大小端  
/* 如
int a=0;
a的地址为0x00 00 00 00 14
若其储存方式为00 00 00 14则为大端储存
若其储存方式为14 00 00 00则为小端储存
*/
//写一个代码判断机器的大小端
//int main()
//{
//	int a = 1;
//	char* p =(char*)&a;
//	if (*p == 1)
//	{
//		printf("小端\n");//答案为小端
//	}
//	else
//	{
//		printf("大端\n");
//	}
//	return 0;
//}
//封装为函数
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
//		printf("小端\n");
//	}
//	else
//	{
//		printf("大端\n");
//	}
//	return 0;
//}
//int main()
//{
//	char a = -1;
//	signed char b = -1;
//	unsigned char c = -1;
//	printf("a=%d b=%d c=%d", a, b, c);//a=-1 b=-1 c=255
//	//原因：a,b,c中的内容相同 为：11111111 不过取出来的方式不同，a,b为有符号数，1表示符号位，%d取出的为整形，要整形提升，与符号位相同，前面补24位1，c为无符号数，前面补0
//	return 0;
//}
//int main()
//{
//	char a = -128;
//	char b = 128;//char类型存不下128，最大为127，127+1二进制为：10000000 为-128 与a相同
//	printf("%u %u", a,b);//%u打印无符号数字 %d打印有符号数字  结果相同为：4294967168
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
//	printf("%d", strlen(arr));//255  strlen遇到0则停止计算
//	return 0;
//}
//int main()
//{
//	int i = 0;
//	for (i = 0; i <= 255; i++)
//	{
//		printf("haha\n");//无限打印  因为char中只能储存255个数
//	}
//	return 0;
//}————————————————————————————
//float 类型的储存方式（国际标准）
/*
(-1)^s*M*2^E
s为符号位  M为二进制移位成大于1小于2的数 E为移动的位数
如5.5  二进制位为101.1  等于(-1)^0*1.011*2^2
三十二位比特位存储方式为 s占一位 为0 （E+127（负数不好存））占8位 为00000010 加上1.011中1后的数字011 后补0
完整为0100 0000 1011 0000 0000 0000 0000 0000
十六进制：4 0    b     0   0    0    0    0
*/
//int main()
//{
//	float f = 5.5;//00 00 b0 40(40 b0 00 00)
//
//	return 0;
//}——————————————————————————————————
//int main()
//{
//	int a = 9;
//	float* p = (float*)&a;
//	printf("%d\n", a);//9
//	printf("%f\n", *p);//0
//	*p = 9.0;
//	printf("%d\n", a);//超级大
//	printf("%f\n", *p);//9.000000  涉及到一个存取的问题
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
//		printf("对\n");
//	}
//	else
//	{
//		printf("错\n");
//	}
//	if (p1 == p2)
//	{
//		printf("对\n");
//	}
//	else
//	{
//		printf("错\n");//结果为 错 对  arr1 和 arr2地址不同 所以值不同  但p1 和p2为指针 又arr1和arr2内容相同 所以使用同一指针 即p1=p2
//	}
//	return 0;
//}