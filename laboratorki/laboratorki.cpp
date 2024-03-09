#include <iostream>
#include <cmath>
using namespace std;

void print(string words);
float lab1(float, float, float);
int lab2(float);
int lab2(float a, float b, char d);
bool lab2(float a, float b, float c, bool e, bool f, bool g);
int lab3(short x);
int lab3(short x, int phi, int phi1);
int lab3(short x, double pi, double partial, float a, float b);

int main() {
	setlocale(LC_ALL, "RU");
	print("Гагарин Юрий Алексеевич");
	print("Дата полёта: 16.04.1961\n");
		short x;
		float a = 0, b = 0, c = 0;
		char d;
		int phi, phi1;
		double pi = 0.0, partial = 0.0;
		bool e = false, f = false, g = false, i = false;

		print("Выбери номер задания: ");
		cin >> x;
		cout << endl;

		switch (x) {
		case 1:
			print("Введи три числа: ");
			cin >> a >> b >> c;
			cout << lab1(a, b, c);
			break;
		case 2:
			print("Проверим дробность числа\nВведи его: ");
			cin >> a;
			lab2(a);
			cout << endl;

			print("Я - калькулятор\nВведи два числа: ");
			cin >> a >> b;
			print("Выбери действие: ");
			cin >> d;
			cout << lab2(a, b, d) << endl;

			print("Сыграй с логическим выражением\nВведите три любых целых числа: ");
			cin >> a >> b >> c;
			lab2(a, b, c, e, f, g);
			cout << "Это выражение оказалось: " << lab2(a, b, c, e, f, g) << endl;
			break;
		case 3:
			print("Ты попал в зацикленное пространство. Выбери цикл: ");
			cin >> x;
			switch (x) {
			case 1:
				lab3(x);
				break;
			case 2:
				//lab3(x, phi, phi1);
				break;
			case 3:
				lab3(x, pi, partial, a, b);
				break;
			default:
				print("О нет, ты сломал цикл!");
				break;
			}
			break;
		case 4:
			break;
		case 5:
			break;
		case 6:
			break;
		case 7:
			break;
		case 8:
			break;
		default:
			print("У меня нет такого задания. Попробуй ещё раз)");
			break;
		}
	return 0;
}

void print(string words) {
	cout << words << endl;
}

float lab1(float a, float b, float c) {
	return ((a + b * c) - 3.14519);
}

int lab2(float a) {
	if (a == 0) {
		cout << "Меня не обмануть. Это нуль!" << endl;
	} 
	else if (fmod(a, 1) == 0) {
		cout << "Это число целое!" << endl;
	}
	else {
		cout << "Это число дробное!" << endl;
	}
	return 0;
}

int lab2(float a, float b, char d) {
	switch (d) {
	case '+':
		return a + b;
	case '-':
		return a - b;
	case '*':
		return a * b;
	case '/':
		return a / b;
	default:
		print("Меня ещё такому не научили. Попробуй снова)");
		return 0;
	}
}

bool lab2(float a, float b, float c, bool e, bool f, bool g) {
	e = (a > 0);
	f = (b >= 0);
	g = (c == 0);
	return (e && (!f && !g));
}

int lab3(short x) {
	for (short x = 10; x > 0; x--) 
	{
		cout << "4 в степени " << x << " = " << pow(4, x) <<endl;
	}
	x = 8;
	while (x>0)
	{
		cout << "5 в степени " << x << " = " << pow(5, x) << endl;
		x--;
	}
	return 0;
}

//int lab3(short x, int phi, int phi1) {
//	print("Сколько чисел из ряда Фибоначчи хочешь увидеть?");
//	cin >> x;
//	for (x; x > 0; x--)
//	{
//		phi = (1 + sqrt(5)) / 2;
//		phi1 = pow(phi, x) / sqrt(5);
//		cout << phi1 << endl;
//	}
//	return 0;
//}

int lab3(short x, double pi, double partial, float a, float b) {
	print("Хочу попробовать посчитать Pi методом Лейбница. Укажи точность числом: ");
	cin >> x;
	b = 1;
	if (x>0)
	{
		for (a; a < x; a++)
		{
			partial += b / (a * 2.0 + 1.0);
			b *= -1;
			pi = 4 * partial;
		}
		cout << "Мне почти удалось посчитать Pi: ";
		printf("%.30f\n", pi);
	}
	return 0;
}