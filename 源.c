#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int main()
{
	char ch = 0;
	scanf("%c", &ch);
	printf("%d ", ch - 'a');
	return 0;
}

	����һ��Ӣ�ģ����Ӣ���ַ�����
int main()
{
	char arr[10] = { 0 };
	scanf("%s", arr);
	int i = 0;
	int sum = 0;

	for (i = 0; arr[i] != '\0'; i++)
	{
		if (arr[i] >= 'a' && arr[i] <= 'z' || arr[i] >= 'A' && arr[i] <= 'Z')
		{
			sum++;
		}
	}
	printf("%d ", sum);
}

struct S1
{
	int a;	 // 4 | 8�������� 4 : 0 - 3
	char b;	 // 1 | 8�������� 1 : 4
	short c; // 2 | 8�������� 2 : 6 - 7 ,5�˷ѣ�����2�ı���
	short d; // 2 | 8�������� 2 : 8 - 10 
			���ϴ�0 - 10����11�ֽڣ��ܴ�СӦ�� �������� 4 �ı���12��11�˷�
};
struct S2
{
	int a;	// 4 | 4�� 0 - 3
	short b;// 2 | 4�� 4 - 5
	int  c; // 4 | 4�� 8 - 11  6��7�˷�
	char d; // 1 | 4�� 12 
			���ϴ�0 - 12����13�ֽڣ��ܴ�СӦ�� �������� 4 �ı���16��13-15�˷�
};
struct S3
{
	int a;	 // 4 | 8��0 - 3
	short b; // 2 | 8��4 - 5
	char c;  // 1 | 8��6
	int d;   // 4 | 8��8 - 11
			���ϴ�0 - 11����12�ֽڣ��ܴ�СӦ�� �������� 4 �ı���12
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

#pragma pack(4)
int main(int argc, char* argv[])
{
	struct S1
	{
		short a; // 2 | 4�������� 2 : 0 - 1
		char b;	 // 1 | 4�������� 1 : 2
		long c;	 // 4 | 4�������� 4 : 4 - 7 
		long d;	 // 4 | 4�������� 4 : 8 - 11 
		//		���ϴ�0 - 11����12�ֽڣ��ܴ�СӦ�� �������� 4 �ı��� 12
	};
	struct S2
	{
		long a;	 // 4 | 4�� 0 - 3
		short b; // 2 | 4�� 4 - 5
		char  c; // 1 | 4�� 6
		long d;  // 4 | 4�� 8 - 11
		//		���ϴ�0 - 11����12�ֽڣ��ܴ�СӦ�� �������� 4 �ı��� 12 ��7�˷�
	};
	struct S3
	{
		short a; // 2 | 4��0 - 1
		long b;  // 4 | 4��4 - 7
		char c;  // 1 | 4��8
		long d;  // 4 | 4��12 - 15
		//		���ϴ�0 - 15����16�ֽڣ��ܴ�СӦ�� �������� 4 �ı��� 16 ��9-11�˷�
	};
	struct S1 s1;
	struct S2 s2;
	struct S3 s3;
	printf("%d %d %d ", sizeof(s1), sizeof(s2), sizeof(s3));

	return 0;
}
#pragma pack()