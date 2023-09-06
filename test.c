#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>





//int main()
//{
//	int a = 10;
//	int b = 20;
//	int c = 30;
//	int* arr[] = { &a,&b,&c };
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		printf("%d ", *arr[i]);
//	}
//	return 0;
//}



//int main()
//{
//	int a = 10;
//	int b = 20;
//	int c = 30;
//	/*int* pa = &a;
//	int* pb = &b;
//	int* pc = &c;*/
//	   //整型数组-存放整型
//	   //字符数组-存放数组
//	  //指针数组-存放指针
//	//int arr[10];
//	int* arr2[3] = {&a,&b,&c};     //指针数组
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		printf("%d\n", *(arr2[i]));
//	}
//	return 0;
//}



//
//int main()
//{
//	int a = 10;
//	int* pa = &a;
//	int**ppa=&pa;      //ppa就是二级指针
//	   //后面的*代表ppa是指针，前面的*是类型int*
//	int*** pppa = ppa;    //pppa就是三级指针
//	**ppa = 20;
//	printf("%d\n", **ppa);
//	printf("%d", a);
//	return 0;
//}



//int main()
//{
//	int arr[10] = { 0 };
//	int* p = arr;
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		*(p + i) = i;
//	}
//	for (i = 0; i < 10; i++)
//	{
//		//printf("%d ", arr[i]);
//		printf("%d ", *(p + i));
//	}
//
//	//for (i = 0; i < 10; i++)
//	//{
//	//	printf("%p=====    %p\n",p+i, &arr[i]);
//	//}
//	return 0;
//}



//int main()
//{
//	int arr[10] = { 0 };
//	printf("%p\n", arr);    //地址，首元素地址
//	printf("%p\n", arr+1);
//	printf("%p\n", &arr[0]);
//	printf("%p\n", &arr[0]+1);
//	printf("%p\n", &arr);
//	printf("%p\n", &arr+1);
//	//1. &arr---&数组名--数组名不是首元素地址--数组名表示整个数组
//	             //&数组名  取出的是整个数组的地址
//	//2. sizeof(arr)--sizeof(数组名)--数组名表示整个数组--
//	                    //sizeof(数组名)计算的是整个数组的大小
//	return 0;
//}



//int my_strlen(char*str)
//{
//	char* start = str;
//	char* end = str;
//	while (*end != '\0')
//	{
//		end++;
//	}
//	return end - start;
//}
//
//int main()
//{
//	char arr[] = "12";
//	int len=my_strlen(arr);
//	printf("%d\n", len);
//	return 0;
//}



//int my_strlen(char*str)
//{
//	char* start = str;
//	char* end = str;
//	while (*end != '\0')
//	{
//		end++;
//	}
//	return end - start;
//}
//int main()
//{
//	//strlen   求字符串长度
//	//递归--模拟实现了strlen--计数器的方式，递归的方式2
//	char arr[] = "bit";
//
//	int len=my_strlen(arr);
//	printf("%d\n", len);
//	return 0;
//}



//int main()
//{
//	char ch[5] = { 0 };
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	printf("%d\n", & arr[0] - &arr[9]);
//	printf("%d\n", & arr[9] - &ch[0]);      //不能这样写，类型不一样，没有意义
//	return 0;
//}


//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int i = 0;
//	int* p = &arr[9];
//	//for (i = 0; i < sz; i++)
//	//{
//	//	printf("%d ", *p);
//	//	p = p + 1;
//
//	for (i = 0; i < 5; i++)
//	{
//		printf("%d ", *p);
//		p -= 2;
//	}
//	return 0;
//}



//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int* p = arr;
//	for (i = 0; i < sz; i++)
//	{
//
//		printf("%d ", *p);
//		p=p + 1;
//	}
//	return 0;
//}



//int main()
//{
//	//int a = 10;
//	//int* pa = &a;       //初始化
//	//int* p = NULL;        //NULL是用来初始化指针的，给指针赋值
//
//	int a = 10;
//	int* pa = &a;
//	*pa = 20;
//	//
//	pa = NULL;
//	*pa = 10;      //已经是空指针，不能使用
//	//if (pa != NULL)
//	//{
//
//	//}
//	return 0;
//}



//int* test()
//{
//	int a = 10;
//	return a;
//	//int arr[10] = { 1 };
//	//return &arr;
//}
//int main()
//{
//	int* p=test();
//	printf("%d\n", *p);
//	//*p = 20;
//	return 0;
//}



//int main()
//{
//	int arr[10] = { 0 };
//	int* p = arr;
//	int i = 0;
//	for (i = 0; i < 12; i++)
//	{
//		*(p++);
//	}
//	  //
//	return 0;
//}




//int main()
//{
//	int a;     //局部变量不初始化，默认是随机值
//	//int* p;    //局部的指针变量，就被初始化随机值
//	int*p = 20;
//	printf("%p\n", a);
//	return 0;
//}



//int main()
//{
//	int arr[10] = { 0 };
//	char* p = arr;
//	int*p=arr;                    //数组名，首元素 的地址
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		*(p + i) = 1;
//	}
//	return 0;
//}




//int main()
//{
//	int a = 0x11223344;
//	int* pa = &a;
//	char* pc = &a;
//	printf("%p\n", pa);
//	printf("%p\n", pa+1);           //指针类型决定了指针走一步有多远（指针的步长）
//	printf("%p\n", pc);               //int*p；p+1--->4
//	printf("%p\n", pc+1);            //int*p；p+1--->1
//	return 0;                             //double*p；p+1-->8
//}



//int main()
//{
//	/*printf("%d\n", sizeof(char*));
//	printf("%d\n", sizeof(short*));
//	printf("%d\n", sizeof(int*));
//	printf("%d\n", sizeof(double*));*/
//
//	int a = 0x11223344;
//	//int*pa=&a;
//	//*pa = 0;
//	char* pc = &a;             //指针类型决定了指针进行解引用操作时，能访问的空间的大小
//	*pc = 0;                     //int*p时，解引用操作能访问4个字节
//	//printf("%p\n", pa);      //char*p时，解引用操作能访问1个字节
//	//printf("%p\n", pc);     //double*p，       能访问8个字节
//	return 0;
//}



//int main()
//{
//	char s[] = "好好学习";
//	printf("%s\n",s);
//	return 0;
//}


//int main()
//{
//	int a = 10;
//	int*p=&a;               //指针变量
//	printf("%d\n", p);
//	return 0;
//}
