#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

//void test1(int arr[])
//{
//	printf("%d\n", sizeof(arr));//(2)
//}
//void test2(char ch[])
//{
//	printf("%d\n", sizeof(ch));//(4)
//}
//int main()
//{
//	int arr[10] = { 0 };
//	char ch[10] = { 0 };
//	printf("%d\n", sizeof(arr));//(1)
//	printf("%d\n", sizeof(ch));//(3)
//	test1(arr);
//	test2(ch);
//	return 0;
//}


//
//int main()
//{
//	int a = 0;
//	int b = 5;
//	//int c = a && b;        //&&��Ϊ������棬��һ��Ϊ�٣����Ǽ�
//	int c = a || b;              //��һ��Ϊ�棬�����棬�������ٲ��Ǽ�
//	printf("%d\n", c);
//	return 0;
//}




//int main()
//{
//	int i = 0, a = 1, b = 2, c = 3, d = 4;
//	//i = a++ && ++b && d++;    //a=0b=3c=3d=4
//	i = a++||++b||d++;
//	printf("a = %d\n b = %d\n c = %d\nd = %d\n", a, b, c, d);
//	return 0;
//}
////��������Ľ����ʲô��


//int main()
//{
//	int a = 10;
//	int b = 20;
//	int max = 0;
//	//if (a > 5)
//	//	b = 3;
//	//else
//	//	b = -3;
//
//	//b = (a > 5 ? 3 : -3);
//	max=(a > b ? a : b);
//	printf("%d\n", b);
//	return 0;
//}



//int main()
//{
//	int a = 1;
//	int b = 2;
//	int c = (a > b, a = b + 10, a, b = a + 1);
//	printf("%d\n", c);
//	return 0;
//}

//int main()
//{
//	int a[10] = { 0 };
//	a[4] = 10;        //[]���ǲ�����   a��4�ǲ�����
//	
//	return 0;
//}


//get_max(int x, int y)      //����ģ������﷨����
//{
//	return x > y ? x : y;
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	            //  ���ú�����ʱ���  ( )  ���Ǻ������õĲ�����
//	int max = get_max(a, b);          //��������  get_max  a  b  ����   
//	printf("%d\n", max);
//	return 0;
//}




//ѧ��
//����һ���ṹ������-struct Stu
//struct Stu
//{
//	char name[20];
//	int age;
//	char id[20];
//};
//int main()
//{
//	int a = 10;
//	   //ʹ��struct Stu������ʹ�����ѧ������s1������ʼ��
//	struct Stu s1 = {"����",20,"20120202"};
//	struct Stu*ps=&s1;
//
//	 //  �ṹ��ָ��  ->��Ա��
//	printf("%s\n", ps->name);
//	printf("%d\n", ps->age );
//	printf("%s\n", ps->id );
//
//	
//	//printf("%s\n", (*ps).name);
//	//printf("%d\n", (*ps).age );
//	//printf("%s\n", (*ps).id);
//	 
//	 
//	 
//	//printf("%d\n", s1.age);
//	//printf("%s\n", s1.id);
//	//printf("%s\n", s1.name);
//	//   //�ṹ�����  .   ��Ա��
//	return 0;
//}

int main()
{
	char a = 3;
	  // 000000000000000000000000  00000011
	  //00000011  -  a

	char b = 127;
	char c = a + b;
	printf("%d\n", c);
	return 0;
}