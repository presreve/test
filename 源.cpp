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
//	int a = 10;        //����4���ֽ�
//	int*p=&a;                               //ȡ��ַ����
//	//printf("%d\n", &a);                                 //ָ�����----�Ǵ�ŵ�ַ��   p������int*
//	//printf("%d\n", p);
//	*p=20;                                  //  *  -- �����ò�����
//	printf("%d\n", a);
//	return 0;
//}





////#define MAX 100                    // #define����ı�ʶ������
//
//                                           // #define�����
//int Max(int x, int y)             //������ʵ��
//{
//	if (x > y)
//		return x;
//	else
//		return y;
//}
//                           //��Ķ��巽ʽ
//#define MAX(X,Y) (X>Y?X:Y)
//int main()
//{
//	//int a = MAX;
//	int a = 10;
//	int b = 20;
//	                       //������ʽ
//	int max = Max(a, b);
//	printf("max=%d\n", max);
//                          //��ķ�ʽ
//	max = MAX(a, b);
//	printf("max=%d\n", max);
//	return 0;
//}



//extern int Add(int, int);                           //�����ⲿ����
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int sum = Add(a, b);
//	printf("sum=%d\n", sum);
//	return 0;
//}



////int a = 10;
//static int a = 10;                   //static ����ȫ�ֱ������ı��������򣬱���ֻ����ԭ�ļ��ڲ�ʹ��
//int main()
//{
//	extern int a;                               //  extern  --  �����ⲿ���ŵ�
//	printf("a=%d\n", a);
//	return 0;
//}





//void test()
//{
//	//int a=1��                      //static  ���ξֲ��������ֲ������������ڱ߳�
//	static int a = 1;                // static ʹa��һ����̬�ľֲ�����
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
//	                          //typedef   ���Ͷ���   �����ض���
//	typedef unsigned int u_int;    //ʹu int  ��  unsigned int  һ��
//	unsigned int a = 20;
//	u_int b = 20;
//	return 0;
//}






//int main()
//{
//	//register int a = 10;   //�����a����ɼĴ�������
//	int a = 10;    
//	a = -2;           //  int����ı������з��ŵ�
//	signed int��   //ͨ��ʡ��signed     signed ���з�������
////unsigned  int  num=0��                    //  unsigned�޷��Ŷ���
//                               //struct         �ṹ��ؼ���
//		                    //union     �����壬������
//	return 0;
//}





//int main()
//{
//	  auto int a = 10;      //�ֲ�����----�Զ�����     autoʡ����
//	return 0;
//}





//ֻҪ���������ڴ��д洢�Ķ��Ƕ����ƵĲ���
//���� ----  ԭ�� ���� ���붼��ͬ
//����
//       ԭ��             ------>      ����                      ------>           ���� 
//  ֱ�Ӱ�������                 ԭ����λ����            ����+1
//  д���Ķ���������           ����λȡ���õ�
//    -2
//  ԭ��   10000000000000000000000000000010
//  ����  111111111111111111111111111111111111111111101
//  ����  111111111111111111111111111111111111111111110