#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<windows.h>
#include<stdlib.h>

int x = 0;
int y = 0;
void Swap(int x, int y  )    //void表示没有返回值
	{
		int tmp = 0;
        tmp = x;
		x = y;
		y = tmp;
	}

int main()
{
	int a = 10;
	int b = 20;
	int tmp = 0;
	printf("a=%d b=%d\n", a, b);
	Swap(a, b);
	//tmp = a;
	//a = b;
	//b= tmp;
	printf("a=%d b=%d\n", a, b);

	return 0;
}





// int get_max(int x, int y)
//{
//	 if (x > y)
//		 return x;
//	 else
//		 return y;
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int max=get_max(a,b);
//	printf("max=%d\n", max);
//	 max = get_max(100, 200);
//	printf("%d\n",max);
//	return 0;
//}



//int main()
//	{
//	char arr[] = "hello world";       //memset     memory  内存   set  设置
//	memset(arr, '*',7);
//	printf("%s\n", arr);
//		return 0;
//	}




//int main()
//{
//	char arr1[] = "bit";           //strlen  --   string length--字符串长度有关
//	char arr2[20] = "########";    //  strcpy  --  string copy  -- 字符串拷贝
//	strcpy(arr2,arr1);
//	printf("%s\n", arr2);
//	return 0;
//}



//int Add(int x, int y)
//{
//	int z = x + y;
//	return z;
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int sum=Add(a, b);
//	printf("%d\n", sum);
//	return 0;
//}




//int main()
//{
//	char arr1[] = "welcome to bit";
//	char arr2[] = "##############";
//	int left = 0;
//	int right = strlen(arr1) - 1;
//	while (left <=right)
//	{
//		arr2[left] = arr1[left];
//		arr2[right] = arr1[right];
//		printf("%s\n", arr2);
//		Sleep(500);
//		system("cls");
//		left++;
//		right--;
//
//	}
//	printf("%s\n",arr1);
//	return 0;
//}


//int main()
//{
//	char arr1[] = "welcome to bit";
//	char arr2[] = "##############";
//	//sz=sizeof (arr1[]）/sizeof （arr2[])
//	int left = 0;
//	int right = strlen(arr1) - 1;
//	while (left <= right)
//	{
//		arr2[left] = arr1[left];
//		arr2[right] = arr1[right];
//		printf("%s", arr2);
//		Sleep(500);
//		system("cls");
//		left++;
//		right--;
//	}
//	printf("%s", arr1);
//	return 0;
//}



//int main()
//{
//	char arr[] = { 1,2,3,4,5,6,7,8,9 };
//	int i = 1;
//	int sz = 0;
//	int k = 4;
//	sz = sizeof(arr) / sizeof(arr[0]);
//	for (i = 1; i < sz; i++)
//	{
//		if (k == arr[i])
//		{
//			printf("找到了，下标是：%d\n", i);
//			break;
//		}
//	}
//	if (i == sz)
//		printf("找不到");
//	return 0;
//}


//int main()
//{
//	char arr[] = { 1,2,3,4,5,6,7,8,9 };
//	int k = 19;
//	int sz = 0;
//	int i = 0;
//	//int arr = 0;
//	sz = sizeof(arr) / sizeof(arr[0]);
//	for (i = 0; i < sz; i++)
//	{
//		if (k == arr[i])
//		{
//			printf("找到了,下标是 %d\n", i);
//			break;
//		}
//		//else
//		//	printf("找不到");
//	}
//	if(i==sz)
//		printf("找不到");
//	return 0;
//}



//int main()
//{
//	int i = 0;
//	int q = 1;
//	int n = 0;
//	int sum = 0;
//	scanf("%d", &n);
//	for (i = 1; i <= n; i++)
//	{
//		q = q * i;
//		sum = sum + q;
//	}
//	printf("sum=%d\n", sum);
//	return 0;
//}




//int main()
//{
//	int i = 0;
//	int n = 0;
//	int q = 1;
//	scanf("%d", &n);
//	for (i = 1; i <= n; i++)
//	{
//		q = q * i;
//	}
//	printf("%d\n", q);
//	return 0;
//}






//int main()
//{
//	int i = 0;
//	int n = 0;
//	int q = 1;
//	scanf("%d", &n);
//	for (i = 1; i <= n; i++)
//	{
//		q = q * i;
//	}
//	printf("%d", q);
//	return 0;
//}