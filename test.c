#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>


int Add(int x, int y)
{
	int z = 0;
	z = x + y;
	return z;
}
int main()
{
	int a = 10;
	int b = 10;
	int ret = 0;
	ret = Add(a, b);
	return 0;
}



//typedef struct Str
//{
//	char name[20];
//	char tele[12];
//	char sex[5];
//	short age;
//}Str;
//void Print(Str*ps)
//{
//	printf("%s\n", ps->name);
//	printf("%s\n", ps->tele);
//	printf("%s\n", ps->sex);
//	printf("%d\n", ps->age);
//}
//int main()
//{
//	Str s = { "张三","254225442","男",40 };
//	Print(&s);
//	return 0;
//}



//typedef struct Stu         //typedef给结构体重新起名
//{
//	//成员变量
//	char name[20];
//	short age;
//	char tele[12];
//	char sex[5];
//}Stu;
//
//void Print1(Stu tmp)
//{
//	printf("name:%s\n", tmp.name);
//	printf("age:%d\n", tmp.age);
//	printf("tele: %s\n", tmp.tele);
//	printf("sex:%s\n", tmp.sex);
//}
//void Print2(Stu* ps)
//{
//	printf("name:%s\n", ps->name);
//	printf("age:%d\n", ps->age);
//	printf("tele:%s\n", ps->tele);
//	printf("sex:%s\n", ps->sex);
//}
//int main()
//{
//	Stu s = { "李四",40,"1555654654","男" };
//	  //打印结构体数据
//	  //Print1和Print2哪个更好？
//	Print1(s);
//	Print2(&s);
//	return 0;
//}



//struct S
//{
//	int a;
//	char c;
//	char arr[20];
//	double d;
//};
//struct T
//{
//	char ch[10];
//	struct S s;
//	char* pc;
//};
//int main()
//{
//	char arr[] = "hello bit\n";
//	struct T t = { "hehe",{100,'w',"hello word",3.14},arr };
//	printf("%s\n", t.ch);    //hehe
//	printf("%s\n", t.s.arr); //hello ward
//	printf("%lf\n", t.s.d);  //3.14
//	printf("%s\n", t.pc); // hello bit
//	return 0;
//}

//描述一个学生
//名字
//年龄
//电话
//性别
//struct Stu          //struct结构体关键字     Stu 结构体标签
//{                               //struct Stu  结构体类型
//	//成员变量
//	char name[20];
//	short age;
//	char tele[12];
//	char sex[5];
//}; s1, s2, s3;       //s1,s2,s3是三个全局的结构体变量
//int main()
//{
//	struct Stu s;  //局本的结构体变量
//	return 0;
//}


//typedef struct Stu         //typedef给结构体重新起名
//{
//	//成员变量
//	char name[20];
//	short age;
//	char tele[12];
//	char sex[5];
//}Stu;
//
//int main()
//{
//	struct Stu s1 = {"张三",20,"15249287076","男"};
//	Stu s2 = { "旺财",30,"57574275","女" };
//	return 0;
//}


