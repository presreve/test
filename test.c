#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<windows.h>


//int main()
//{
//	float f = 5.5;
//	//5.5
//	// 101.1
//	// (-1)^0 * 1.011 * 2^2
//	//S=0
//	//M=1.011
//	//E=2          E+127=129    二进制表示129：10000001  
//	//  0   10000001  01100000000000000000000        内存存储形式
//	//  0100 0000 1011 0000 0000 0000 0000 0000
//	// 0X  4      0      B    0         0    0      0         0         十六进制
//	return 0;
//	//  0   00000000  01100000000000000000000      E全为0
//	//表示一个+-无穷小的数字
//	//规定为+-0.011 * 2^-126
//	// 
//	// 0   11111111  01100000000000000000000            E全为1
//	// 表示一个+-无穷大的数字
//	//         +-1.011 * 2^128
//	//
//}


//浮点存储，E>0
//  9.0
// 1001.0
// (-1)^0 * 1.001 * 2^3
// (-1)^S *   M   * 2^E
// S=0
// M=1.001
// E=3             E+127=130
//
// 0.5 十进制
// 0.1 二进制表示
// (-1)^0 * 1.0 * 2^-1
// S=0
// M=1.0
// E=-1               存储是加上一个中间值127
// E+127=126        126为存储值
// 
//
int main()
{
	int n = 9;
	//0 00000000 00000000000000000001001       补码
	//
	float* pFloat = (float*)&n;
	printf("n的值为：%d\n", n);
	printf("*pFloat的值为：%f\n", *pFloat);
	//0 00000000 00000000000000000001001   E全为0，无限小，0.000000
	*pFloat = 9.0;
	//1001.0
	//(-1)^0 * 1.001 * 2^3        3+127+130     10000010
	//0 10000010 00100000000000000000000   
	printf("num的值为：%d\n", n);
	//01000001000100000000000000000000             1091567616十进制表示
	printf("*pFloat的值为：%f\n", *pFloat);
	return 0;
}



//int main()
//{
//	double d = 2E2;
//	printf("%lf\n", d);
//	return 0;
//}



//unsigned char i = 0;
//int main()
//{
//	for (i = 0; i <= 255; i++)
//	{
//		printf("hello world\n");
//	}
//	return 0;
//}




//int main()
//{
//	char a[1000];
//	int i;
//	for (i = 0; i < 1000; i++)
//	{
//		a[i] = -1 - i;
//	}
//	printf("%d", strlen(a));
//	//只能存-128--127，当从-1-->-128时，-128-1=127，127-1=126，
//	//当读取到0时，即为\0，停止，所以为128+127=255
//	return 0;
//}



//int main()
//{
//	unsigned int i;
//	for (i = 9; i >= 0; i--)
//	{
//		printf("%u\n", i);
//		Sleep(100);
//	}
//	return 0;
//	//00000000 00000000 00000000 00001001     原码 9
//	//
//}



//int main()
//{
//	int i= -20;
//	unsigned int j = 10;
//printf("%d\n", i+j); 
////按照补码的形式进行运算，最后格式化成为有符号整数
//	return 0;
//	//10000000 00000000 00000000 00010100      原码-20
//	//11111111 11111111 11111111 11101011                     反码
//	//11111111 11111111 11111111 11101100                     补码
//	//00000000 00000000 00000000 00001010      补码 10
//	//11111111 11111111 11111111 11110110                     相加后补码
//	//11111111 11111111 11111111 11110101                     反码
//	//10000000 00000000 00000000 00001010     原码   -10
//}



//int main()
//{
//	 char a = 128;
//	 //10000000000000000000000010000000     -128原码
//	 //11111111111111111111111101111111                            反码
//	 //11111111111111111111111110000000                          补码
//	 // 10000000
//	 //11111111111111111111111110000000                   整型提升，认为是无符号数，直接原反补一样  
//	printf("%u\n", a);
//	return 0;
//}


//输出什么？
//int main()
//{
//	char a = -1;
//	signed char b = -1;
//	unsigned char c = -1;
//	printf("a=%d,b=%d,c=%d", a, b, c);
//	return 0;
//	// 10000000000000000000000000000001     -1原码
//	// 11111111111111111111111111111110                         反码
//	//11111111111111111111111111111111                           补码
//	// char存储的   11111111      因为打印%d是整型，要整型提升，符号位前面补1或0
//	// 11111111111111111111111111111111                          提升后  补码
//	// 10000000000000000000000000000001         提升后  原码    还是-1
//	// signed char  也是一样的
//	//unsigned  char
//	//  char存储的   11111111      因为打印%d是整型，要整型提升
//	// 因为是unsigned ，认为整数，符号位是0
//	// 00000000000000000000000011111111            提升后  补码，因为认为是正数，原反补一样
//	//算出是255
//}


//int main()
//{
//	int a = 0x11223344;
//	//int* p = &a;
//	char* p = &a;
//	*p = 0;
//	return 0;
//}




//int check_sys()
//{
//	int a = 1;
//	char* p = (char*)&a;
//	//返回1，小端
//	//返回2，大端
//	return *p;
//}
//
//int main()
//{
//	int a = 1;
//	int ret=check_sys();
//	if (ret == 1)
//	{
//		printf("小端\n");
//	}
//	else
//	{
//		printf("大端\n");
//	}
//	//返回1，小端
//	//返回0，大端
//	return 0;
//}




////写一段代码，告诉我当前存储的字节序是什么
//int main()
//{
//	int a = 1;
//	char*p=(char*) & a;      //强制类型转换
//	if (*p == 1)
//	{
//		printf("小端\n");
//	}
//	else
//	{
//		printf("大端\n");
//	}
//	return 0;
//}





////小端存储方式
//int main()
//{
//	//int a = 20;
//	int b = 0x11223344;
//	return 0;
//}


//int main()
//{
//	1 + (-1);           //计算机只会加法
//	// 1的原码  00000000000000000000000000000001
//	//     反码  00000000000000000000000000000001
//	//     补码  00000000000000000000000000000001
//	// 
//	//-1的原码  10000000000000000000000000000001
//	//      反码  111111111111111111111111111111111110
//	//      补码  111111111111111111111111111111111111
//
//	//              00000000000000000000000000000001
//	//     +        111111111111111111111111111111111111
//	//     =        100000000000000000000000000000000      32个0
//	//    只能存32个，前面的1被去除
//	//                00000000000000000000000000000000  = 0
//
//
//	return 0;
//}



//int main()
//{
//	int a = 20;
//	int b = -10;
//	return 0;
//}



//void test(void)            //void空类型   第二个void表示无参数
//{
//	printf("hehe\n");
//}
//int main()
//{
//	test(100);
//	return 0;
//}



//int main()
//{
//	printf("\"Genious is 1%% inspiration and 99%%prespiration\"");
//
//	return 0;
//}




//int main()
//{
//	int a = 10;
//	float f = 10.0;
//	return 0;
//}

