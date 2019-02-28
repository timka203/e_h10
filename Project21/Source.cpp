#include<iostream> 
#include<stdio.h>
#include<locale.h>
#include<time.h>
#include<Windows.h>
#include <iomanip>
#define PI 3.14159265 


using namespace std;

void func(int a[])
{

	int *p;
	for (p = a; p < a + 20; p = p + 1)
	{
		*p = -15 + rand() % 90;
		cout << *p << endl;
	}


}
double summa4(double a)
{
	return pow(a, 3);
}
double summa5(double a)
{
	return sqrt(a);
}
double summa6(double a)
{
	return sin(a * PI / 180);
}
double summa7(int x)
{
	return  pow(x, 2);
}
double summa8( int x)
{
	return  -(x * 2 + 4);
}
void task1()
{
	double(*ukaz1[4])(double) = { summa4,summa5,summa6 };
	int ch = 0;
	double a;
	int t;
	do
	{
		printf("Which task: pow(0),sqrt(1),sin(2)");
		cin >> ch;
		while (ch <= 3) {

			cin >> a;
			cout << ukaz1[ch](a) << endl;
			break;
		}
		printf(" do you want continue y(1)/no(2)");
		scanf_s("%d", &t);
	} while (t == 1);
}
void task2()
{
	double(*ukaz1[4])(int) = { summa7,summa8 };
	int ch = 0;
	double a;
	int t;
	int x, y;
	cin >> x;
	do
	{
		printf("Which task: y=x*x(0),– y = x*2+4(1)");
		cin >> ch;
		while (ch <= 3) {
			cout << ukaz1[ch](x) << endl;
			break;
		}
		printf(" do you want continue y(1)/no(2)");
		scanf_s("%d", &t);
	} while (t == 1);

}
int main()
{
	setlocale(LC_ALL, "");
	srand(time(NULL));
	int a, d;
	do
	{
		printf("Which task");
		scanf_s("%d", &d);
		switch (d)
		{
		
		case 1: task1(); break;
		case 2: task2(); break;

		default:
			break;
		}
		printf(" do you want continue y(1)/no(2)");
		scanf_s("%d", &a);
	} while (a == 1);
	system("pause");
}