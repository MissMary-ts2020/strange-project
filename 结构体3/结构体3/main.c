#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

typedef struct A {
	char name[24];
	char gender[25];
	int a;
	int b;


}A;

int ADD(A a) {

	return a.a + a.b;
}


int main() {
	static A a = {
		"����","�ֶ��깺���",134,522
	};
	printf("%d", ADD(a));


	return NULL;
}