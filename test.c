#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>


//int my_strlen(char*str)
//{
//	int count = 0;
//	while (*str != '\0')
//	{
//		count++;
//		str++;
//	}
//	return count;
//}
int my_strlen(char* str)            //�ݹ�ķ���
{
	if (*str != '\0')
		return 1 + my_strlen(str + 1);
	else
		return 0;
}                   //�Ѵ��»�С   
                     //my_strlen("bit")
                    //1+my_strlen("it")
                    //1+1+my_strlen("t")
                    //1+1+1+my_strlen("")
                     //1+1+1+0
                     //3
int main()
{
	char arr[] = "bit";
	//int len=strlen(arr);
	//printf("%d\n", len);
	int len = my_strlen(arr);     //���鴫�Σ����Ĳ����������飬�����ǵ�һ��Ԫ�صĵ�ַ
	printf("len=%d\n", len);
	return 0;
}


//void print(int n)
//{
//	if (n > 9)
//	{
//		print(n / 10);
//	}
//	printf("%d ", n % 10);
//}
//int main()
//{
//	unsigned int num = 0;
//	scanf("%d", &num); //��ӡ1234
//	      //�õݹ���
//	print(num);
//	return 0;
//}


//int main()
//{
//	printf("hehe\n");
//	main();
//	return 0;
//}


//#include"add.h"
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int Sum = Add(a, b);
//	printf("%d\n", Sum);
//	return 0;
//}