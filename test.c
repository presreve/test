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
//	   //��������-�������
//	   //�ַ�����-�������
//	  //ָ������-���ָ��
//	//int arr[10];
//	int* arr2[3] = {&a,&b,&c};     //ָ������
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
//	int**ppa=&pa;      //ppa���Ƕ���ָ��
//	   //�����*����ppa��ָ�룬ǰ���*������int*
//	int*** pppa = ppa;    //pppa��������ָ��
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
//	printf("%p\n", arr);    //��ַ����Ԫ�ص�ַ
//	printf("%p\n", arr+1);
//	printf("%p\n", &arr[0]);
//	printf("%p\n", &arr[0]+1);
//	printf("%p\n", &arr);
//	printf("%p\n", &arr+1);
//	//1. &arr---&������--������������Ԫ�ص�ַ--��������ʾ��������
//	             //&������  ȡ��������������ĵ�ַ
//	//2. sizeof(arr)--sizeof(������)--��������ʾ��������--
//	                    //sizeof(������)���������������Ĵ�С
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
//	//strlen   ���ַ�������
//	//�ݹ�--ģ��ʵ����strlen--�������ķ�ʽ���ݹ�ķ�ʽ2
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
//	printf("%d\n", & arr[9] - &ch[0]);      //��������д�����Ͳ�һ����û������
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
//	//int* pa = &a;       //��ʼ��
//	//int* p = NULL;        //NULL��������ʼ��ָ��ģ���ָ�븳ֵ
//
//	int a = 10;
//	int* pa = &a;
//	*pa = 20;
//	//
//	pa = NULL;
//	*pa = 10;      //�Ѿ��ǿ�ָ�룬����ʹ��
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
//	int a;     //�ֲ���������ʼ����Ĭ�������ֵ
//	//int* p;    //�ֲ���ָ��������ͱ���ʼ�����ֵ
//	int*p = 20;
//	printf("%p\n", a);
//	return 0;
//}



//int main()
//{
//	int arr[10] = { 0 };
//	char* p = arr;
//	int*p=arr;                    //����������Ԫ�� �ĵ�ַ
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
//	printf("%p\n", pa+1);           //ָ�����;�����ָ����һ���ж�Զ��ָ��Ĳ�����
//	printf("%p\n", pc);               //int*p��p+1--->4
//	printf("%p\n", pc+1);            //int*p��p+1--->1
//	return 0;                             //double*p��p+1-->8
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
//	char* pc = &a;             //ָ�����;�����ָ����н����ò���ʱ���ܷ��ʵĿռ�Ĵ�С
//	*pc = 0;                     //int*pʱ�������ò����ܷ���4���ֽ�
//	//printf("%p\n", pa);      //char*pʱ�������ò����ܷ���1���ֽ�
//	//printf("%p\n", pc);     //double*p��       �ܷ���8���ֽ�
//	return 0;
//}



//int main()
//{
//	char s[] = "�ú�ѧϰ";
//	printf("%s\n",s);
//	return 0;
//}


//int main()
//{
//	int a = 10;
//	int*p=&a;               //ָ�����
//	printf("%d\n", p);
//	return 0;
//}
