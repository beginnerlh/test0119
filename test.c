//��дһ�������жϸ��������Ƿ�Ϊ������
//
//��������ֻ���������� 2, 3, 5 ����������
//
//ʾ�� 1:
//
//���� : 6
//��� : true
// ���� : 6 = 2 �� 3
//	  ʾ�� 2 :
//
//  ���� : 8
//   ��� : true
//	���� : 8 = 2 �� 2 �� 2
//		 ʾ�� 3 :
//
//	 ���� : 14
//	  ��� : false
//	   ���� : 14 ���ǳ�������Ϊ������������һ�������� 7��
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
	printf("������һ����->");
	scanf("%d", &a);
	int b=isUgly(a);
	printf("%d\n", b);
	system("pause");
	return 0;
}