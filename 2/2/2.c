//#include <stdio.h>
//int max(int x, int y)
//{
//	return x>y ? x : y;
//}
//void main()
//{
//	int a, b, s;
//	printf("Input a and b:");
//	s = max(a, b);
//	printf("%d\n", s);
//}


#include<stdio.h>

int get_max(int x, int y)

{

	return x > y ? x : y;

}

int main()

{

	int num1 = 10;

	int num2 = 20;

	int max = get_max(num1, num2);
    printf("max=%d\n", max);
    return 0;

}