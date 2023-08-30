#include<stdio.h>
#include<math.h>
#include<string.h>
#include"text.c"                 //引用自己创建的代码

int Add(int x, int y);                           //声明函数放在   .h文件里
int main()
{
	int a = 10;
	int b = 20;
	int sum = 0;
	sum = Add(a, b);                   //函数调用
	printf("%d\n", sum);
	return 0;
}
int Add(int x, int y)                   //函数的定义放在   .c文件里
{
	int z = x + y;
	return z;
}


//int main()
//{
//	printf("%d", printf("%d", printf("%d", 43)));
//	return 0;
//}



//int main()
//{
//	int len = 0;
//	len = strlen("abc");
//	printf("%d\n", len);
//	printf("%d\n", strlen("abc"));     //链式访问
//		return 0;
//}





//void Add(int *p)
//{
//	(*p)++;
//}
//int main()
//{
//	int num = 0;
//	Add(&num);
//	printf("num=%d\n", num);//1
//	Add(&num);
//	printf("num=%d\n", num);//2
//	Add(&num);
//	printf("num=%d\n", num);//3
//	return 0;
//}





//                                   //本质上这里的arr是一个指针
//int binary_search(int arr[], int k,int sz)       //
//{
//	//int sz = sizeof(arr) / sizeof(arr[0]);      //这个计算指针是4字节
//	int left = 0;                                      //算法的实现
//	int right = sz - 1;
//	while (left <= right)
//	{
//		int mid = (right + left) / 2;
//		if (arr[mid] < k)
//		{
//			left = mid + 1;
//		}
//		else if (arr[mid] > k)
//		{
//			right = mid - 1;
//		}
//		else
//		{
//			return mid;
//		}
//	}
//	return -1;
//}
//int main()
//{
//	                                 //二分查找
//	                                 //在一个有序数组中查找某个数
//	                                 //如果找到了返回这个的下表，找不到返回-1
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int k = 7;                             //arr传过去的是arr首元素地址
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int ret = binary_search(arr, k, sz);
//	if (ret == -1)
//	{
//		printf("找不到指定的数字\n");
//	}
//	else
//	{
//		printf("找到了，下标是：%d\n",ret);
//	}
//	return 0;
//}





//int is_leap_year(int y)
//{
//	if ((y % 4 == 0 && y % 100 != 0) || (y % 400 == 0))
//		return 1;
//	else
//		return 0;
//}
//int main()
//{
//	int year = 0;
//	for (year = 1000; year <= 2000; year++)
//	{
//		if (1 == is_leap_year(year))                            //判断year是否为闰年
//		{
//			printf("%d ", year);
//	}
//	}
//	return 0;
//}



//int is_prime(int n)             // 是素数返回1，不是返回0
//{
//	int j = 0;	                        //2-->n-1
//	//for (j = 2; j < n; j++)
//	for(j=2;j<=sqrt(n);j++)         //优化   试到开平方n
//	{
//		if (n % j == 0)
//			return 0;
//	}
//	return 1;	                                //
//}
//int main()
//{
//	int i = 0;                //打印100-200之间的素数
//	for (i = 100; i <= 200; i++)
//	{
//		if (is_prime(i) == 1)                          //判断i是否为素数
//			printf("%d\n", i);
//	}
//	return 0;
//}






//int main()
//{
//	int a = 10;
//	int*pa=&a;                    //pa是指针变量
//	*pa = 20;                                 //解引用操作
//	printf("%d\n", a);
//	return 0;
//}



//当实参传给形参的时候
//形参其实是实参的一份临时拷贝
//对形参的修改是不会改变实参的
//int x = 0;
//int y = 0;
//void Swap(int x, int y)    //void表示没有返回值
//{
//	int tmp = 0;
//	tmp = x;
//	x = y;
//	y = tmp;
//}
//
//void Swap2(int*pa, int* pb)
//{
//	int tmp = 0;
//	tmp = *pa;
//	*pa = *pb;
//	*pb = tmp;
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int tmp = 0;
//	printf("a=%d b=%d\n", a, b);
//	//Swap(a, b);
//	Swap2(&a, &b);
//	//tmp = a;
//	//a = b;
//	//b= tmp;
//	printf("a=%d b=%d\n", a, b);
//	return 0;
//}
 