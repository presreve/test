#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>





//int main()
//{
//	char ch = 'w';
//	char* pc = &ch;
//	//*pc = 'a';
//	//printf("%c\n",ch);
//	printf("%d\n", sizeof(pc));
//	return 0;
//}



//int main()
//{
//	int a = 10;        //申请4个字节
//	int*p=&a;                               //取地址符号
//	//printf("%d\n", &a);                                 //指针变量----是存放地址的   p类型是int*
//	//printf("%d\n", p);
//	*p=20;                                  //  *  -- 解引用操作符
//	printf("%d\n", a);
//	return 0;
//}





////#define MAX 100                    // #define定义的标识符常量
//
//                                           // #define定义宏
//int Max(int x, int y)             //函数的实现
//{
//	if (x > y)
//		return x;
//	else
//		return y;
//}
//                           //宏的定义方式
//#define MAX(X,Y) (X>Y?X:Y)
//int main()
//{
//	//int a = MAX;
//	int a = 10;
//	int b = 20;
//	                       //函数方式
//	int max = Max(a, b);
//	printf("max=%d\n", max);
//                          //宏的方式
//	max = MAX(a, b);
//	printf("max=%d\n", max);
//	return 0;
//}



//extern int Add(int, int);                           //声明外部函数
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int sum = Add(a, b);
//	printf("sum=%d\n", sum);
//	return 0;
//}



////int a = 10;
//static int a = 10;                   //static 修饰全局变量，改变了作用域，变量只能在原文件内部使用
//int main()
//{
//	extern int a;                               //  extern  --  声明外部符号的
//	printf("a=%d\n", a);
//	return 0;
//}





//void test()
//{
//	//int a=1；                      //static  修饰局部变量，局部变量生命周期边唱
//	static int a = 1;                // static 使a是一个静态的局部变量
//	a++;                             
//	printf("a=%d\n", a);
//}
//int main()
//{
//	int i = 0;	while (i < 5)
//	{
//		test();
//		i++;
//	}
//	return 0;
//}


//int main()
//{
//	                          //typedef   类型定义   类型重定义
//	typedef unsigned int u_int;    //使u int  和  unsigned int  一样
//	unsigned int a = 20;
//	u_int b = 20;
//	return 0;
//}






//int main()
//{
//	//register int a = 10;   //建议把a定义成寄存器变量
//	int a = 10;    
//	a = -2;           //  int定义的变量是有符号的
//	signed int；   //通常省略signed     signed 是有符号数字
////unsigned  int  num=0；                    //  unsigned无符号定义
//                               //struct         结构体关键字
//		                    //union     联合体，共用体
//	return 0;
//}





//int main()
//{
//	  auto int a = 10;      //局部变量----自动变量     auto省略了
//	return 0;
//}





//只要是整数，内存中存储的都是二进制的补码
//正数 ----  原码 反码 补码都相同
//负数
//       原码             ------>      反码                      ------>           补码 
//  直接按照正负                 原符号位不变            反码+1
//  写出的二进制序列           其他位取反得到
//    -2
//  原码   10000000000000000000000000000010
//  反码  111111111111111111111111111111111111111111101
//  补码  111111111111111111111111111111111111111111110