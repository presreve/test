#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<windows.h>
#include<stdlib.h>

int main()
{
	int i = 0;
	char password[20] = {0};
	for (i = 0; i < 3; i++)
	{
		printf("���������룺");
			scanf("%s", password);
			if (strcmp(password , "123456")==0 )         //  == ���������Ƚ������ַ����Ƿ����
			{                                                           //       Ӧʹ�ÿ⺯��   strcmp
				printf("��½�ɹ�\n");                           //        strcmp   ��ȷ���ֵΪ0
				break;                                           //                       ��һ��<�ڶ���     ����С��0
			}                                                   //                          ��һ��>�ڶ���      ���ش���0
			else
			{
				printf("�������\n");
			}
	}
	if (i == 3)
		printf("��������������˳�����\n");
	return 0;
}


//int main()
//{
//	char arr1[] = "welcome to bit!!!!!!";
//	char arr2[] = "####################";
//	int left = 0;
//	int right = strlen(arr1) - 1;
//	while (left <= right)
//	{
//		arr2[left] = arr1[left];
//		arr2[right] = arr1[right];
//		Sleep(500);
//		system("cls");
//		printf("%s\n",arr2);
//		//Sleep(500);
//		//system("cls");
//		left++;
//		right--;
//	}
//	return 0;
//}



//int main()
//{
//	char arr1[] = "welcome to bit!!!";
//	char arr2[] = "################";
//	int left = 0;
//	//int right = sizeof(arr1) / sizeof(arr1[0])-2;
//	int right = strlen(arr1)-1;          //���������
//
//	while (left<=right)
//	{
//		arr2[left] = arr1[left];
//		arr2[right] = arr1[right];
//		printf("%s\n", arr2);               
//		Sleep(500) ;                                 //��Ϣһ��
//		system("cls");                       //ִ��ϵͳ�����һ������  ---  cls  --  �����Ļ
//		left++;
//		right--;
//	}
//	printf("%s\n", arr2);
//	return 0;
//}




//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int left = 0;
//	int right = sz - 1;
//	int k = 17;
//	while (left <= right)
//	{	
//		int mid = (left + right) / 2;
//	
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
//			printf("�ҵ��ˣ��±��ǣ�%d\n", mid);
//			break;
//		}
//	}
//	if (left > right)
//		printf("�Ҳ���\n");
//	return 0;
//}





//int main()
//{
//	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int k =7;
//	int  sz = sizeof(arr) / sizeof(arr[0]);      //����Ԫ�ظ���
//	int left = 0;                                         //���±�
//	int right = sz - 1;                        //���±�
//	while (left <= right)
//	{
//		int mid = (left+right) / 2;
//		if (arr[mid] > k)
//		{
//			right = mid - 1;
//		}
//		else if (arr[mid] < k)
//		{
//			left = mid + 1;
//		}
//		else
//		{
//			printf("�ҵ��ˣ��±��ǣ�%d\n", mid);
//			break;
//		}
//	}
//	if (left > right)
//		printf("�Ҳ���\n");
//		return 0;
//}



//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };      //дһ�����룬��arr���飨����ģ��� �ҵ�7
//	int k =7;
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for (i = 0; i <sz; i++)
//	{
//		if (k == arr[i])
//		{
//			printf("�ҵ��ˣ��±��ǣ�%d\n", i);
//			break;
//		}
//	}
//	if (i==sz)
//		printf("�Ҳ���\n");
//	return 0;
//}



//int main()
//{
//	int i = 0;
//	int ret = 1;
//	int add = 0;
//	int n = 0;
//	//scanf("%d", n);
//	for (n = 1; n <= n; n++)
//	{
//			ret = ret *n;	
//		add = add + ret;
//	}
//	printf("%d\n", add);
//	return 0;
//}





//int main()
//{
//	int i = 0;
//	int ret = 1;
//	int add = 0;
//	int n = 0;
//	//scanf("%d", n);
//	for (n = 1; n <= 3; n++)
//	{
//		ret = 1;
//		for (i = 1; i <= n; i++)
//		{
//			ret = ret * i;
//		}
//		add = add + ret;
//	}
//	printf("%d\n", add);
//	return 0;
//}



//int main()
//{
//	int i = 0;
//	int arr = 1;
//	int n = 0;
//	scanf("%d", &n);
//	for (i = 1; i <= n; i++)
//	{
//		arr = arr * i;
//	}
//	printf("%d\n", arr);
//	return 0;
//}




//int main()
//{
//	int i = 0;
//	do
//	{
//		if (i == 5)
//			//	break;
//			continue;
//		printf("%d ", i);
//		i++;
//	}
//	while (i <= 10);
//	return 0;
//}