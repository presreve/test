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
//	Str s = { "����","254225442","��",40 };
//	Print(&s);
//	return 0;
//}



//typedef struct Stu         //typedef���ṹ����������
//{
//	//��Ա����
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
//	Stu s = { "����",40,"1555654654","��" };
//	  //��ӡ�ṹ������
//	  //Print1��Print2�ĸ����ã�
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

//����һ��ѧ��
//����
//����
//�绰
//�Ա�
//struct Stu          //struct�ṹ��ؼ���     Stu �ṹ���ǩ
//{                               //struct Stu  �ṹ������
//	//��Ա����
//	char name[20];
//	short age;
//	char tele[12];
//	char sex[5];
//}; s1, s2, s3;       //s1,s2,s3������ȫ�ֵĽṹ�����
//int main()
//{
//	struct Stu s;  //�ֱ��Ľṹ�����
//	return 0;
//}


//typedef struct Stu         //typedef���ṹ����������
//{
//	//��Ա����
//	char name[20];
//	short age;
//	char tele[12];
//	char sex[5];
//}Stu;
//
//int main()
//{
//	struct Stu s1 = {"����",20,"15249287076","��"};
//	Stu s2 = { "����",30,"57574275","Ů" };
//	return 0;
//}


