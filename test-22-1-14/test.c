#include <stdio.h>


//����һ��ѧ����һЩ����
//���֡����䡢�绰���Ա�

//struct-�ṹ��ؼ���	Stu-�ṹ���ǩ		struct Stu-�ṹ������
//struct Stu
//{
//	//��Ա����
//	char name[20];
//	short age;
//	char tele[12];
//	char sex[5];
//}s1,s2,s3;//����ȫ�ֵĽṹ������������������ã�д���뾡���ٵ�ȫ�ֱ���

//typedef struct Stu
//{
//	//��Ա����
//	char name[20];
//	short age;
//	char tele[12];
//	char sex[5];
//}Stu;//typedef-���������˴�����������ΪStu
//
//
//int main()
//{
//	Stu s = {"����",19,"11015","��"};//��ʼ��
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
//	struct T t = { "hehe",{100,'w',"hello",3.14},arr };//�ṹ���а����ṹ��ʱ�ĳ�ʼ��
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
//	Stu s = { "����",100,"15858224679","��" };
//	print1(s);
//	print2(&s);//print2����print1����Ϊ2ֻ����ַ��1Ҫ����������
//	return 0;
//}