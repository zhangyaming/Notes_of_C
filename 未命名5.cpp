//GOOGLE面试题
//一个大小为n的数组，里面的数都属于范围[0, n-1]，有不确定的重复元素，找到至少一个重复元素，要求O(1)空间和O(n)时间。
//By MoreWindows (http://blog.csdn.net/MoreWindows)
#include <stdio.h>
const int NO_REPEAT_FLAG = -1;
void Swap(int &x, int &y)
{
	int t = x;
	x = y;
	y = t;
}
//类似于基数排序，找出数组中第一个重复元素。
int RadixSort(int a[], int n)
{
	int i;
	for (i = 0; i < n; i++)
	{
		while (i != a[i])
		{
			if (a[i] == a[a[i]])
				return a[i];
			Swap(a[i], a[a[i]]);
		}
	}
	return NO_REPEAT_FLAG;
}
void PrintfArray(int a[], int n)
{
	for (int i = 0; i < n; i++)
		printf("%d ", a[i]);
	putchar('\n');
}
int main()
{
	printf("    白话经典算法系列之十 一道有趣的GOOGLE面试题 \n");      
	printf(" -- by MoreWindows( http://blog.csdn.net/MoreWindows ) --\n\n"); 

	const int MAXN = 4;
	int a[MAXN] = {2, 1, 3,2};
	//int a[MAXN] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};

	printf("数组为: \n");
	PrintfArray(a, MAXN);

	int nRepeatNumber = RadixSort(a, MAXN);
	if (nRepeatNumber != NO_REPEAT_FLAG)
		printf("该数组有重复元素，此元素为%d\n", nRepeatNumber);
	else
		printf("该数组没有重复元素\n");
	return 0;
}
