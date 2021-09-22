#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//int Add(int x, int y)
//{
//	int z = 0;
//	z = x + y;
//	return z;
//}
//int main()
//{
//	int sum1 = 0;
//	int sum2 = 0;
//	scanf("%d %d", &sum1, &sum2);
//	int sum = Add(sum1, sum2);
//	printf("%d", sum);
//
//
//}
//int main()
//{
//	int a = 1;
//	a += 5;
//	int b = 1;
//	b = b + 5;
//	printf("%d %d", a, b);
//}
//int main()
//{
//	int a = 999999999999999999;
//	printf("%d",!a);
//}
//int main()
//{
//	int a = 0;
//    printf("%d\n",sizeof(a));
//	printf("%d",sizeof(int));
//}
//int main()
//{
//	int arr[10] = { 2 };
//	printf("%d\n", sizeof(arr));
//	printf("%d\n", sizeof(arr[0]));
//}
//int main()
//{
//	int a = 0;
//	printf("%d\n", ~a);
//}
//int main()
//{
//	int a = 10;                 //前置++：先++，再使用
//	int b = ++a;
//	printf("%d\n%d", a, b);
//}
//int main()
//{
//	int a = 10;                
//  int b = a++;                //后置++：先使用，再++ 
//	printf("%d\n%d", a, b);
//}
//int main()
//{
//	int a = (int)3.14;
//	printf("%d", a);
//	return 0;
//}
//int main()
//{
//	int a = 1;
//	int b = 999999999;
//	int c = a && b;
//	printf("%d", c);
//}
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int max = 0;
//	scanf("%d %d\n", &a, &b);
//	max = a > b ? a : b;
//	printf("%d", max);
//}

int main()
{
	int year;
	scanf("%d", &year);
	if (year <= 2000 || year>2100)
	{
		printf("Invalid year!");
	}
	else
	{
		int b = year - 2000;
		int c = b/4;
		int d = 2000;
		int e = 2000;
		int f = 0;
		while (f<c)
		{
			e = e + 4;
			printf("%d\n", e);
			if (e >= year)
			{
				break;
			}
		}
	}
	return 0;
}
