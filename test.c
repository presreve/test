#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>

int main()
{
    char arr[] = "abcdef";   //  [a] [b] [c] [d] [e] [f] [\0] 
    printf("%d\n", arr[3]);
    return 0;
}


//int main()
//{
//    char arr1[] = "abc";
//    char arr2[] = {'a','b','c'};
//    printf("%d\n", sizeof(arr1));  //4
//    printf("%d\n", sizeof(arr2)); //3
//    printf("%d\n", strlen(arr1)); //3
//    printf("%d\n", strlen(arr2)); //?   未知的，是随机值，遇到\0停止
//    return 0;
//}



//int main()
//{
//                     //创建数组--存放整型--10个
//    int arr[10]= { 1,2,3 };     //不完全初始化,剩下的元素默认初始化为0
//    char arr2[5] = { 'a',98 };  //整型数组 只有ab后面是0
//    char arr3[5] = "ab";            //字符串数组  a b \0  三个
//    char arr4[] = "abcdef";
//    printf("%d\n", sizeof(arr4));  //sizeof计算arr4所占空间的大小
//    printf("%d\n", strlen(arr4));  //strlen 求字符串长度，\0停止，不算\0
//  //  int n = 5;
//   // char ch[n];    //不行的，要一个常量，不能是变量
//    return 0;
//}



//void test(int n)
//{
//    if (n < 10000)
//    {
//        test(n + 1);
//    }
//}
//int main()
//{
//    test(1);
//    return 0;
//}

//int F(int n)
//{
//    int a = 1;
//    int b = 1;
//    int c = 1;
//    while (n > 2)
//    {
//        c = a + b;
//        a = b;
//        b = c;
//        n--;
//    }
//    return c;
//}
//int main()
//{
//    int n = 0;
//    int ret = 0;
//    scanf("%d", &n);
//    ret = F(n);
//    printf("%d\n", ret);
//    return 0;
//}


////循环的方式解决斐波那契数
//int F(int n)
//{
//    int a = 1;
//    int b = 1;
//    int c = 1;
//    while (n > 2)
//    {
//        c = a + b;
//        a = b;
//        b = c;
//        n--;
//    }
//    return c;
//}
//int main()
//{
//    int i = 0;
//    int ret = 0;
//    int n = 0;
//    scanf("%d", &n);
//    ret = F(n);
//    printf("%d\n", ret);
//    return 0;
//}


//int F(int n)
//{
//    if (n <= 2)
//        return 1;
//    else
//        return F(n - 1) + F(n - 2);
//}
//int main()
//{
//    int ret = 0;
//    int n = 0;
//    scanf("%d", &n);
//    ret = F(n);
//    printf("%d\n", ret);
//    return 0;
//}


//斐波那契数列
//int count = 0;
//int F(int n)
//{
//    if (n == 3)
//    {
//        count++;
//    }
//    if (n <= 2)
//        return 1;
//    else
//        return F(n - 1) + F(n - 2);
//}
//int main()
//{
//    int n = 0;
//    int ret = 0;
//    scanf("%d", &n);
//    ret = F(n);
//    printf("ret=%d\n", ret);
//    printf("count=%d\n", count);
//    return 0;
//}


//int F(int n)
//{
//    if (n <= 1)
//        return 1;
//    else
//        return n * F(n - 1);
//}
//int main()
//{
//    int n = 0;
//    int ret = 0;
//    scanf("%d", &n);
//    ret = F(n);
//    printf("%d\n", ret);
//    return 0;
//}



//            //递归的方法
//int F(int n)
//{
//    if (n <= 1)
//        return 1;
//    else
//        return n * F(n - 1);
//}
//int main()
//{
//    int n = 0;
//    int ret = 0;
//    scanf("%d", &n);
//    ret = F(n);
//    printf("%d\n", ret);
//}



//int Facl(int n)
//{
//    int i = 0;
//    int ret = 1;
//    for (i = 1; i <= n; i++)
//    {
//        ret*=i;
//    }
//    return ret;
//}
//int  main()
//{
//    int n = 0;
//    int ret = 0;
//    scanf("%d", &n);
//    ret=Facl(n);       //循环的方式
//    printf("%d\n", ret);
//        return 0;
//}

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
      //把大事化小   
                     //my_strlen("bit")
                    //1+my_strlen("it")
                    //1+1+my_strlen("t")
                    //1+1+1+my_strlen("")
                     //1+1+1+0
                     //3
//int my_strlen(char * str)            //递归的方法
//{
//	if (*str != '\0')
//		return 1 + my_strlen(str + 1);
//	else
//		return 0;
//}
//int main()
//{
//	char arr1[] = "bit";
//	char arr2[] = "hello";
//	//int len=strlen(arr);
//	//printf("%d\n", len);
//	int len = my_strlen(arr1);     //数组传参，传的不是整个数组，传的是第一个元素的地址
//	printf("len=%d\n", len);
//	int len2 = my_strlen(arr2);
//	printf("len=%d\n", len2);
//	return 0;
//}


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
//	scanf("%d", &num); //打印1234
//	      //用递归解决
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