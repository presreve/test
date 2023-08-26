#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include<string.h>

int main()
{
	int ch = 0;                                   //Ctrl+Z获取一个EOF
	while((ch=getchar())!=EOF)            //EOF   --  end of file--->  -1
	{
		putchar(ch);
	}
	//int ch = getchar();         //getchar输入一个字符
	//putchar(ch);                 //putchar输出字符
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
//		{//switch允许嵌套使用
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
//	scanf ("%d", &day);              //swith是整型表达式
//	switch (day)                        //case决定入口   是整型常量表达式
//	{                                       //break决定出口
//		case 1:
//			printf("工作日n");
//			break;
//		case 2:
//			printf("工作日\n");
//			break;
//		case 3:
//			printf("工作日\n");
//			break;
//		case 4:
//			printf("工作日\n");
//			break;
//		case 5:
//			printf("工作日\n");
//			break;
//		case 6:
//			printf("休息日\n");
//			break;
//		case 7:
//			printf("休息日\n");
//			break;
//		default:
//		    printf("输入错误\n");
//			break;
//	}
//	
	
	//if (day == 1); 
	//	printf("星期一\n");
	//else if (2 == day)
	//	printf("星期二\n");
	//else if (3 == day)
	//	printf("星期三\n");
	//else if (4 == day)
	//	printf("星期四\n"); 
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
//	if(5==num)          //常量放在 ”=“ 左边，写代码错不了，num不能赋值给5
//	{
//		printf("呵呵\n");

	//if (num = 5)            //  一个=是赋值    ==是判断相等
	//{
	//	printf("呵呵\n");
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
	//	printf("未成年\n");

//	if (age < 18)
//		printf("未成年\n");
//	else
//		printf("成年\n");
//	return 0;

	//if (age < 18)
	//	printf("未成年");
	//else if (age >= 18 && age < 28)
	//	printf("青年");
	//else if (age >= 28 && age < 50)
	//	printf("壮年\n");
	//else if (age >= 50 && age < 90)
	//	printf("老年\n");
	//else
	//	printf("老不死\n");

	//if (age < 18)
	//{                            //一堆 { }  就是一个代码块
	//	printf("未成年\n");
	//	printf("不能谈恋爱");
	//}
	//else
	//{
	//	if (age >= 18 && age < 28)
	//		printf("青年");
	//	else if (age >= 28 && age < 50)
	//		printf("壮年\n");
	//	else if (age >= 50 && age < 90)
	//		printf("老年\n");
	//	else
	//		printf("老不死\n");
	//}
		
		/* if (age >= 18 && age < 28)
		printf("青年");
	else if (age >= 28 && age < 50)
		printf("壮年\n");
	else if (age >= 50 && age < 90)
		printf("老年\n");
	else
		printf("老不死\n");*/
//}



//int main()
//{
//	int a = 0;
//	;                       //是语句---空语句
//	return 0;
//}