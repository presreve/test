#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>






int main()
{
	 char a = 128;
	 //10000000000000000000000010000000     -128原码
	 //11111111111111111111111101111111                            反码
	 //11111111111111111111111110000000                          补码
	 // 10000000
	 //11111111111111111111111110000000                   整型提升，认为是无符号数，直接原反补一样  
	printf("%u\n", a);
	return 0;
}


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

