#include<stdio.h>
#include<math.h>
#include<string.h>
#include"text.c"                 //�����Լ������Ĵ���

int Add(int x, int y);                           //������������   .h�ļ���
int main()
{
	int a = 10;
	int b = 20;
	int sum = 0;
	sum = Add(a, b);                   //��������
	printf("%d\n", sum);
	return 0;
}
int Add(int x, int y)                   //�����Ķ������   .c�ļ���
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
//	printf("%d\n", strlen("abc"));     //��ʽ����
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





//                                   //�����������arr��һ��ָ��
//int binary_search(int arr[], int k,int sz)       //
//{
//	//int sz = sizeof(arr) / sizeof(arr[0]);      //�������ָ����4�ֽ�
//	int left = 0;                                      //�㷨��ʵ��
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
//	                                 //���ֲ���
//	                                 //��һ�����������в���ĳ����
//	                                 //����ҵ��˷���������±��Ҳ�������-1
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int k = 7;                             //arr����ȥ����arr��Ԫ�ص�ַ
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int ret = binary_search(arr, k, sz);
//	if (ret == -1)
//	{
//		printf("�Ҳ���ָ��������\n");
//	}
//	else
//	{
//		printf("�ҵ��ˣ��±��ǣ�%d\n",ret);
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
//		if (1 == is_leap_year(year))                            //�ж�year�Ƿ�Ϊ����
//		{
//			printf("%d ", year);
//	}
//	}
//	return 0;
//}



//int is_prime(int n)             // ����������1�����Ƿ���0
//{
//	int j = 0;	                        //2-->n-1
//	//for (j = 2; j < n; j++)
//	for(j=2;j<=sqrt(n);j++)         //�Ż�   �Ե���ƽ��n
//	{
//		if (n % j == 0)
//			return 0;
//	}
//	return 1;	                                //
//}
//int main()
//{
//	int i = 0;                //��ӡ100-200֮�������
//	for (i = 100; i <= 200; i++)
//	{
//		if (is_prime(i) == 1)                          //�ж�i�Ƿ�Ϊ����
//			printf("%d\n", i);
//	}
//	return 0;
//}






//int main()
//{
//	int a = 10;
//	int*pa=&a;                    //pa��ָ�����
//	*pa = 20;                                 //�����ò���
//	printf("%d\n", a);
//	return 0;
//}



//��ʵ�δ����βε�ʱ��
//�β���ʵ��ʵ�ε�һ����ʱ����
//���βε��޸��ǲ���ı�ʵ�ε�
//int x = 0;
//int y = 0;
//void Swap(int x, int y)    //void��ʾû�з���ֵ
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
 