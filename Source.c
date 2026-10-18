#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <locale.h>
#include <math.h>
#include <windows.h> //заголовочный файл, чтобы изменить кодировку консоли

int task1();
int task2();
int task3();

int main() {
	SetConsoleOutputCP(CP_UTF8); //установка кодировки вывода 
	SetConsoleCP(CP_UTF8); //установка кодировки ввода
	setlocale(LC_CTYPE, "RUS");

	task1();
	task2();
	task3();

	return 0;
}

int task1() {
	//1

	int year;

	printf("Введите год\n");
	scanf("%d", &year);
	//остаток от деления
	int ost = year % 4;
	if (ost == 0) {
		printf("Високосный год\n");
		printf("Год %d високосный\n\n", year);
	}
	else {
		printf("Невисокосный год\n");
		printf("Год %d невисокосный\n\n", year);
	}

	//2

	printf("Введите год\n");
	scanf("%d", &year);
	//остаток от деления
	int kr_100 = year % 100;
	int kr_400 = year % 400;
	if (((ost == 0) && (kr_100 != 0)) || (kr_400 = 0)) {
		printf("Високосный год\n");
		printf("Год %d високосный\n\n", year);
	}
	else {
		printf("Невисокосный год\n");
		printf("Год %d невисокосный\n\n", year);
	}

	return 0;
}

int task2() {
	float x;
	float F;
	printf("Введите x\n");
	scanf("%f", &x);
	if (x <= 7) {        //при x = 5: F(x) = 15 - 9 = 6
		F = 3 * x - 9;
		printf("%f\n\n", F);
	}
	else {               //при x = 10: F(x) = 1/96 = 0,010417 
		F = 1 / (pow(x, 2) - 4);
		printf("%f\n\n", F);
	}

	return 0;
}

int task3() {
	float x1, x2, x3;
	printf("Введите три вещественных числа\n");
	scanf("%f %f %f", &x1, &x2, &x3);
	if ((x1 >= -1) && (x1 <= 1)) printf("%f\n", x1);
	if ((x2 >= -1) && (x2 <= 1)) printf("%f\n", x2);
	if ((x3 >= -1) && (x3 <= 1)) printf("%f\n", x3);

	return 0;
}