#include <iostream>
#include <cmath>
using namespace std;

void print(string words);
float lab1(float, float, float);
int lab2(float);
float lab2(float a, float b, char d);
bool lab2(float a, float b, float c, bool e, bool f, bool g);
int lab3(short x);
int lab3(int fib);
double lab3(short x, double pi, float a);
double lab4(short x, float a, float b, float c);
int lab4(short x);
float lab4(float a, float b);
int lab4(int hour, int min, int sec);

double getPi = 3.14591;

int main() {
	setlocale(LC_ALL, "RU");
	print("Гагарин Юрий Алексеевич");
	print("Дата полёта: 16.04.1961\n");

		short x;
		float a = 0, b = 0, c = 0;
		char d;
		int fib = 0;
		double pi = 0.0;
		bool e = false, f = false, g = false;

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
				print("Сколько чисел из ряда Фибоначчи хочешь увидеть?");
				cin >> fib;
				for (fib; fib >= 0; fib--) 
				{
					cout << lab3(fib) << endl;
				}
				break;
			case 3:
				print("Хочу попробовать посчитать Pi методом Лейбница. Укажи точность числом: ");
				cin >> x;
				cout << "Мне почти удалось посчитать Pi: " << lab3(x, pi, a);
				break;
			default:
				print("О нет, ты сломал цикл!");
				break;
			}
			break;
		case 4:
			print("Тут много всего. Выбери какое-то задание: ");
			cin >> x;
			switch (x) {
			case 1:
				cout << "Получилось: " << lab4(x, a, b, c) << endl;
				break;
			case 2:
				print("Факториал какого числа хочешь увидеть?");
				cin >> x;
				cout << "Факториал " << x << "равен " << lab4(x) << endl;
				break;
			case 3:
				print("Введи 2 числа, а я выберу наименьшее");
				cin >> a >> b;
				cout << "Это число наименьшее: " << lab4(a, b) << endl;
				break;
			case 4:
				cout << lab4(a, b, c) << "секунд" << endl;
				break;
			default:
				print("Упс, у меня здесь повреждённые фракменты памяти!");
				break;
			}
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
	return ((a + b * c) - getPi);
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

float lab2(float a, float b, char d) {
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
	for (x = 8; x > 0; x--) 
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

int lab3(int fib) {
	if (fib <= 1) {
		return fib;
	}
	return lab3(fib - 1) + lab3(fib - 2);
}

double lab3(short x, double pi, float a) {
	if (x > 0) {
		for (a; a <= x; a++)
		{
			pi = pi + 4.0 * pow(-1, a) / (a * 2.0 + 1.0);
		}
		return pi;
	}
	else {
		return 0;
	}
}

double lab4(short x, float a, float b, float c) {
	print("Я могу посчитать площади следующих фигур:");
	print("1 - треугольник по стороне и высоте.");
	print("2 - треугольник по 3-м сторонам.");
	print("3 - прямоугольник по 2-м сторонам.");
	print("4 - окружность через радиус.");
	print("Выбирай: ");
	cin >> x;
	float Pperimeter = a * b * c / 2;
	switch (x) {
	case 1:
		print("Введи основание и высоту треугольника: ");
		cin >> a >> b;
		return a * b / 2;
	case 2:
		print("Введи последовательно 3 стороны треугольника: ");
		cin >> a >> b >> c;
		return sqrt(Pperimeter * (Pperimeter - a) * (Pperimeter - b) * (Pperimeter - c));
	case 3:
		print("Введи 2 стороны прямоугольника: ");
		cin >> a >> b;
		return a*b;
	case 4:
		print("Введи радиус окружности: ");
		cin >> a;
		return getPi * pow(a, 2);
	default:
		print("У меня нет такой формулы. Попробуй снова)");
		return 0;
	}
}

int lab4(short x) {
	if (x == 0) {
		return 1;
	}
	return x * lab4(x - 1);
}

float lab4(float a, float b) {
	if (a > b)
	{
		return b;
	}
	return a;
}

int lab4(int hour, int min, int sec) {
	print("Введи сначала кол-во часов, потом минут и секунд:");
	cin >> hour;
	cin >> min;
	cin >> sec;
	return ((hour * 360 + min * 60) + sec);
}