#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//int main()
//{
//	char ch = 0;
//	scanf("%c", &ch);
//	printf("%d ", ch - 'a');
//	return 0;
//}
//
////	����һ��Ӣ�ģ����Ӣ���ַ�����
//int main()
//{
//	char arr[10] = { 0 };
//	scanf("%s", arr);
//	int i = 0;
//	int sum = 0;
//
//	for (i = 0; arr[i] != '\0'; i++)
//	{
//		if (arr[i] >= 'a' && arr[i] <= 'z' || arr[i] >= 'A' && arr[i] <= 'Z')
//		{
//			sum++;
//		}
//	}
//	printf("%d ", sum);
//}

struct S1
{
	int a;	 // 4 | 8�������� 4 : 0 - 3
	char b;	 // 1 | 8�������� 1 : 4
	short c; // 2 | 8�������� 2 : 6 - 7 ,5�˷ѣ�����2�ı���
	short d; // 2 | 8�������� 2 : 8 - 10 
	//		�ܴ�СӦ�� �������� 4 �ı�����12��11-12�˷�
};
struct S2
{
	int a;	// 4 | 4�� 0 - 3
	short b;// 2 | 4�� 4 - 5
	int  c; // 2 | 4�� 8 - 11  6��7�˷�
	char d; // 2 | 4�� 12 
	//		�ܴ�СӦ�� �������� 4 �ı�����12
};
struct S3
{
	int a;	 // 4 | 8��0 - 3
	short b; // 2 | 8��4 - 5
	char c;  // 1 | 8��6
	int d;   // 4 | 8��8 - 11
	//		�ܴ�СӦ�� �������� 4 �ı�����12��12�˷�
};
int main()
{
	struct S1 s1;
	printf("%d\n", sizeof(s1));

	struct S2 s2;
	printf("%d\n", sizeof(s2));

	struct S3 s3;
	printf("%d\n", sizeof(s3));
	return 0;
}