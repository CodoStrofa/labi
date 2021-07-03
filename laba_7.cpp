// laba_7.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
using namespace std;


void sred_garmon(double a, double b) 
{
    double h = 2 / ((1 / a) + (1 / b));
    cout << "Среднее гармоническое - " << h << endl;
}


void func_2(double* a, double* b, double* c) 
{
    double min, max, avg;
    min = max = *a;
    if (*b > max)
        max = *b;
    if (*c > max)
        max = *c;

    if (*b < min)
        min = *b;
    if (*c < min)
        min = *c;

    avg = (*a + *b + *c) / 3;

    *a = min;
    *b = avg;
    *c = max;
}


int main()
{
    setlocale(LC_ALL, "ru");
    sred_garmon(12.24, 92.2);

    double a = 5;
    double b = 17;
    double c = 14;

    cout << "a - " << a << " " << " b - " << b << " c - " << c << endl;
    func_2(&a, &b, &c);
    cout << "a - " << a << " " << " b - " << b << " c - " << c << endl;
}
