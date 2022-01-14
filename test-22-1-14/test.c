#include <stdio.h>


//描述一个学生：一些数据
//名字、年龄、电话、性别

//struct-结构体关键字	Stu-结构体标签		struct Stu-结构体类型
//struct Stu
//{
//	//成员变量
//	char name[20];
//	short age;
//	char tele[12];
//	char sex[5];
//}s1,s2,s3;//三个全局的结构体变量，不建议这样用，写代码尽量少的全局变量

//typedef struct Stu
//{
//	//成员变量
//	char name[20];
//	short age;
//	char tele[12];
//	char sex[5];
//}Stu;//typedef-重命名，此处将其重命名为Stu
//
//
//int main()
//{
//	Stu s = {"李四",19,"11015","男"};//初始化
//	return 0;
//}


//struct S
//{
//	int a;
//	char c;
//	char arr[20];
//	double d;
//};
//
//struct T
//{
//	char ch[10];
//	struct S s;
//	char* pc;
//};
//
//int main()
//{
//	char arr[] = "hello";
//	struct T t = { "hehe",{100,'w',"hello",3.14},arr };//结构体中包含结构体时的初始化
//	printf("%s\n", t.ch);//hehe
//	printf("%s\n", t.s.arr);//hello
//	printf("%lf\n", t.s.d);//3.14
//	printf("%s\n", t.pc);//hello
//	return 0;
//}


//typedef struct Stu
//{
//	char name[20];
//	short age;
//	char tele[12];
//	char sex[5];
//}Stu;
//
//void print1(Stu tmp)
//{
//	printf("name:  %s\n", tmp.name);
//	printf("age:  %d\n", tmp.age);
//	printf("tele:  %s\n", tmp.tele);
//	printf("sex:  %s\n", tmp.sex);
//	
//}
//
//void print2(Stu* ps)
//{
//	printf("name:  %s\n", ps->name);
//	printf("age:  %d\n", ps->age);
//	printf("tele:  %s\n", ps->tele);
//	printf("sex:  %s\n", ps->sex);
//}
//
//int main()
//{
//	Stu s = { "李四",100,"15858224679","男" };
//	print1(s);
//	print2(&s);//print2优于print1，因为2只传地址，1要传整个对象
//	return 0;
//}