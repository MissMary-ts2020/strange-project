#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <stdlib.h>

typedef struct A {
	char name[20];
	short age;
	char gender[14];
}A;

void print1(A tmp) {
	printf("������%s\n", tmp.name);
	printf("���䣺%d\n", tmp.age);
	printf("�Ա�%s\n", tmp.gender);
	return;
}

void print2(A* tmp) {
	printf("������%s\n", tmp->name);//tmp��һ��ָ����
	printf("���䣺%d\n", tmp->age);
	printf("�Ա�%s\n", tmp->gender);
	return;
}



int main() {
	A a = {
		"����",24,"Ů"
	};
	print1(a);
	print2(&a);
	

	system("pause");
	return NULL;
}