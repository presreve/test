#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include<string.h>

int main()
{
	int ch = 0;                                   //Ctrl+Z��ȡһ��EOF
	while((ch=getchar())!=EOF)            //EOF   --  end of file--->  -1
	{
		putchar(ch);
	}
	//int ch = getchar();         //getchar����һ���ַ�
	//putchar(ch);                 //putchar����ַ�
	//printf("%c\n", ch);
	return 0;
}






//int main()
//{
//	//while(1)
//	//	printf("hehe\n");
//	int i = 1;
//	while (i <= 10)
//	{
//		i++;
//		if (i == 5)
//			//break;
//			continue;
//		printf("%d ", i);
//	//	i++;
//	}
//	return 0;
//}






//int main()
//{
//	int n = 1;
//					int m = 2;
//	switch (n)
//	{
//	case 1:
//		m++;
//	case 2:
//		n++;
//	case 3:
//		switch (n)
//		{//switch����Ƕ��ʹ��
//		case 1:
//			n++;
//		case 2:
//			m++;
//			n++;
//			break;
//		}
//	case 4:
//		m++;
//		break;
//	default:
//		break;
//	}
//	printf("m = %d, n = %d\n", m, n);
//	return 0;
//}



//int main()
//{
//	int day = 0;
//	scanf ("%d", &day);              //swith�����ͱ��ʽ
//	switch (day)                        //case�������   �����ͳ������ʽ
//	{                                       //break��������
//		case 1:
//			printf("������n");
//			break;
//		case 2:
//			printf("������\n");
//			break;
//		case 3:
//			printf("������\n");
//			break;
//		case 4:
//			printf("������\n");
//			break;
//		case 5:
//			printf("������\n");
//			break;
//		case 6:
//			printf("��Ϣ��\n");
//			break;
//		case 7:
//			printf("��Ϣ��\n");
//			break;
//		default:
//		    printf("�������\n");
//			break;
//	}
//	
	
	//if (day == 1); 
	//	printf("����һ\n");
	//else if (2 == day)
	//	printf("���ڶ�\n");
	//else if (3 == day)
	//	printf("������\n");
	//else if (4 == day)
	//	printf("������\n"); 
	//return 0;
//}




//int main()
//{
//	int i = 0;
//	while (i <= 100)
//	{
//		if (i % 2 == 1)
//			printf("%d  ", i);
//		i++;
//	}
//	return 0;
//}




//int main()
//{
//	int num = 4;
//	if(5==num)          //�������� ��=�� ��ߣ�д������ˣ�num���ܸ�ֵ��5
//	{
//		printf("�Ǻ�\n");

	//if (num = 5)            //  һ��=�Ǹ�ֵ    ==���ж����
	//{
	//	printf("�Ǻ�\n");
	//}
	//return 0;
	//}





//int main()
	//{
	//	int a = 0;
	//	int b = 2;
	//	if (a == 1)
	//	{
	//		if (b == 2)
	//			printf("hehe\n");
	//	}
	//   else
	//			printf("haha\n");
	//	return 0;
	//}





//int main()
//{
//	int age = 10;

	//if (age < 18)
	//	printf("δ����\n");

//	if (age < 18)
//		printf("δ����\n");
//	else
//		printf("����\n");
//	return 0;

	//if (age < 18)
	//	printf("δ����");
	//else if (age >= 18 && age < 28)
	//	printf("����");
	//else if (age >= 28 && age < 50)
	//	printf("׳��\n");
	//else if (age >= 50 && age < 90)
	//	printf("����\n");
	//else
	//	printf("�ϲ���\n");

	//if (age < 18)
	//{                            //һ�� { }  ����һ�������
	//	printf("δ����\n");
	//	printf("����̸����");
	//}
	//else
	//{
	//	if (age >= 18 && age < 28)
	//		printf("����");
	//	else if (age >= 28 && age < 50)
	//		printf("׳��\n");
	//	else if (age >= 50 && age < 90)
	//		printf("����\n");
	//	else
	//		printf("�ϲ���\n");
	//}
		
		/* if (age >= 18 && age < 28)
		printf("����");
	else if (age >= 28 && age < 50)
		printf("׳��\n");
	else if (age >= 50 && age < 90)
		printf("����\n");
	else
		printf("�ϲ���\n");*/
//}



//int main()
//{
//	int a = 0;
//	;                       //�����---�����
//	return 0;
//}