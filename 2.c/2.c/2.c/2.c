//
//int Add(
//int x, int y)
//{
//	int z = 0;
//	z = x + y;
//return z;
//}
//  
//int main()
//{
//	int num1 = 10;
//	int num2 = 20;
//	int ret = 0;
//	ret = Add(num1, num2);
//	printf("ret=%d\n", ret);
//	return 0;
//}
//#include<stdio.h>
//
//
//
//int get_max(int x, int y)
//
//
//
//{
//
//
//
//	return x > y ? x : y;
//
//
//
//}
//
//
//
//int main()
//
//
//
//{
//
//
//
//	int num1 = 10;
//
//
//
//	int num2 = 20;
//
//	int max = 0;
//
//	int max = get_max(num1, num2);
//
//	printf("max=%d\n", max);
//
//	return 0;
//
//
//
//}

//
//int main()
//{
//	int arr[10] = { 1, 2, 3 };
//	printf("%d\n", arr[1]);
//	int i = 0;
//	while (i < 10)
//	{
//		printf("%d", arr[i]);
//		i++;
//	}
//	return 0;
//
//}
//
//void text()
//{
//	static int a = 1;
//	a++;
//	printf("%d", a);
//}
//int main()
//{
//	int i = 0;
//	while (i<10)
//	{
//		text();
//		i++;
//	}
//	return 0;
//}

//#define MAX(X,Y) (X>Y?X:Y)
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int max = MAX(a, b);
//	printf("max=%d\n", max);
//
//	return 0;
//}
//int MAX(int x, int y)
//{
//	returnx > y ? x : y;
//
//
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int max = (3, 10);
//	printf("max=%d\n", max);
//
//	return 0;
//
//}
//
//int main()
//{
//	int a = 1;
//	int b = 2;
//	int c = 10;
//	int d = (a = b - 4, b = a + c, c=10-a);
//	printf("%d\n", d);
//
//
//	return 0;
//}

//
//int main()
//{
//	int a = 10;
//	printf("%p\n", &a);
//
//
//
//	return 0;
//}
//
//#include<stdio.h>
//int main()
//{
//	int num = 10;
//	int *p = &num;
//	*p=20
//	return  0;
//}

int main()
{
	printf("%d\n", sizeof(int*));

	return 0;
}