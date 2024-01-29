#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    setlocale(LC_ALL, "RUS");
    int a,b;
    int choice;
    cout << "Выберите действие\n1.Сложение\n2.Вычитание\n3.Частное\n4.Произвдение\n5.Возведение в степень\n6.Нахождения квадратного корня\n7.Нахождение 1 процента от числа\n8.Найти факториал числа\n9.Выйти из программы\n";
    cin >> choice;
    switch (choice)
    {
        case 1:
            cout << "Введите первое число: ";
            cin >> a;
            cout << "Введите второе число: ";
            cin >> b;
            cout << a << "+" << b << "=" << a+b;
        case 2:
            cout << "Введите уменьшаемое число: ";
            cin >> a;
            cout << "Введите вычитаемое число: ";
            cin >> b;
            cout << a << "-" << b << "=" << a - b;
        case 3:
            cout << "Введите делимое число: ";
            cin >> a;
            cout << "Введите делитель: ";
            cin >> b;
            cout << a << ":" << b << "=" << a / b;
        case 4:
            cout << "Введите первый множитель: ";
            cin >> a;
            cout << "Введите второй множитель: ";
            cin >> b;
            cout << a << "*" << b << "=" << a * b;
        case 5:
            cout << "Введите число: ";
            cin >> a;
            cout << "Введите степень: ";
            cin >> b;
            cout << a << " в степени " << b << " = " << pow(a,b);
        case 6:
            cout << "Введите число: ";
            cin >> a;
            cout << "Квадратный корень из " << a << " = " << pow(a,0.5);
        case 7:
            cout << "Введите число: ";
            cin >> a;
            cout << "1% от " << a << " = " << a*0.01;
        case 8:
            cout << "Введите число: ";
            cin >> a;
            cout << "Факториал из " << a << " = " << tgamma(a+1);
        case 9:
            return 0;
    }
    cout << "\n\n\n";
    main();
}

