#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include<string.h>

int main()
{
	int i = 0;
	int k = 0;
	for (i = 0, k = 0; k = 0; i++, k++)
		k++;
	return 0;
}




//int main()
//{
//	int i = 0;
//	int j = 0;
//	for ( ; i < 10; i++)
//	{
//		for (; j < 10; j++)
//		{
//			printf("hehe\n");
//		}
//	}
//	return 0;
//}





//int main()
//{
//	for (;;)                              //判断部分被省略，判断条件恒为真
//	{
//		printf("hehe\n");
//	}
//	return 0;
//}



//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int i = 0;
//	           //10次循环
//	           //10次打印
//	         //10个元素
//	for (i = 0; i < 10; i++)               //前闭后开的写法
//	//for(i=0;i<=10;i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}





//int main()
//{
//	int i = 0;
//	for (i = 0; i <= 10; i++)
//	{
//		if(i=5)                  //不可再for循环内改变变量，防止for失去控制
//		printf("hehe\n");
//		printf("haha\n");
//	}
//	return 0;
//}





//int main()
//{     //初始化     判断     循环
//	int i = 2;
//	for (i = 1; i <= 10; i++)
//	{
//		if (i == 5)
//				//break;
//			continue;
//
//		printf("%d", i);
//	}
//	return 0;
//}




//int main()
//{
//	int i = 0;                    //初始化
//	while (i < 10)                //判断
//	{
//		                              //  三个部分离得太远不好看
//
//		i++;                      //调整
//	}
//	return 0;
//}



//int main()
//{
//	int ch = 0;
//	while ((ch = getchar()) != EOF)
//	{
//		if (ch < '0' || ch>'9')
//			continue;
//		putchar(ch);
//	}
//	return 0;
//}





//int main()
//{
//	//int ch = 0;
//	//while ((ch = getchar()) != EOF)
//	//{
//	//	putchar(ch);
//	//}
//	//return 0;
//
//	int ret = 0;
//	int ch = 0;
//	char password[20] = { 0 };
//	printf("请输入密码：>");
//	scanf("%s", password);  //输入面膜，存放在passward数组中
//	while((ch=getchar())!='\n')   //缓冲区还剩一个‘\n’
//	{ }
//	printf("请确认(X,Y)\n");
//	ret = getchar();
//	if (ret == 'Y')
//		printf("确认成功\n");
//	else
//		printf("放弃确认\n");
//
////printf("%d\n", '\n');
//}



//int main()
//{
//	int i = 0;
//	for (i = 100; i >= 0; i--)
//		if (i % 17 == 0)
//			break;
//	printf("%d", i);
//	return 0;
//}



//int main()
//{
//	int i;
//		int sum = 0;
//	for (i = 1; i <= 99; i++);
//	sum = sum + i + (i + 1) + (i + 2);
//	printf("sum=%d\n", sum);
//	return 0;
//}



//int main()
//{
//	int ch = 0;                                   //Ctrl+Z获取一个EOF
//	while((ch=getchar())!=EOF)            //EOF   --  end of file--->  -1
//	{
//		putchar(ch);
//	}
//	//int ch = getchar();         //getchar输入一个字符
//	//putchar(ch);                 //putchar输出字符
//	//printf("%c\n", ch);
//	return 0;
//}






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