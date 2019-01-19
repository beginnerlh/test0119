//编写一个程序判断给定的数是否为丑数。
//
//丑数就是只包含质因数 2, 3, 5 的正整数。
//
//示例 1:
//
//输入 : 6
//输出 : true
// 解释 : 6 = 2 × 3
//	  示例 2 :
//
//  输入 : 8
//   输出 : true
//	解释 : 8 = 2 × 2 × 2
//		 示例 3 :
//
//	 输入 : 14
//	  输出 : false
//	   解释 : 14 不是丑数，因为它包含了另外一个质因数 7。
#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
bool isUgly(int num) {

	if (num<1)
	{
		return false;
	}
	else
	{
		while (num % 2 == 0)
		{

			num /= 2;
		}
		while (num % 3 == 0)
		{
			num /= 3;
		}
		while (num % 5 == 0)
		{
			num /= 5;
		}


	}
	if (num == 1)
	{
		return true;
	}
	return false;


}
int main()
{
	int a = 0;
	printf("请输入一个数->");
	scanf("%d", &a);
	int b=isUgly(a);
	printf("%d\n", b);
	system("pause");
	return 0;
}