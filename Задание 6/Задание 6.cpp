﻿// Задание 6.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
using namespace std;
int main()
{
    setlocale(LC_ALL, "rus");
    int method,a,b,c;
    cout << "Выберите метод решения уравнения: 1 - Дискрминант, 2 - Виета: "<<endl;
    cin >> method;
    if (method == 1 || method == 2)
    {
        if (method == 1)
        {
            double d, x1, x2;
            cout << "Введите a: " << endl;
            cin >> a;
            cout << "Введите b: " << endl;
            cin >> b;
            cout << "Введите c: " << endl;
            cin >> c;
            d = b * b - 4 * a * c;
            if (d >= 0) //Если дискриминант больше или равен 0
            {
                x1 = (-b + sqrt(d)) / (2 * a);
                cout << "Первый корень = " << x1 << endl;
                x2 = (-b - sqrt(d)) / (2 * a);
                cout << "Второй корень = " << x2 << endl;
            }
            else if (d == 0)
            {
                x1 = -b / (2 * a);
            }
            else
            {
                cout << "Дискриминант меньше 0. Решения нет." << endl;
            }
        }
        else
        {
            cout << "Введите a: " << endl;
            cin >> a;
            cout << "Введите b: " << endl;
            cin >> b;
            cout << "Введите c: " << endl;
            cin >> c;
            int n = 0;
            float x1, x2 = c / a;
            if (c / a >= 0)
                for (; x2 >= -c / a; x2 -= 0.00001)       //0.00001 - это шаг, его можно увеличить или уменьшить  
                {
                    x1 = (c / a) / x2;
                    if (x1 + x2 == -b / a)
                    {
                        n = 1;
                        break;
                    }
                }
            else
                for (; x2 <= -c / a; x2 += 0.00001)
                {
                    x1 = (c / a) / x2;
                    if (x1 + x2 == -b / a)
                    {
                        n = 1;
                        break;
                    }
                }
            cout << "Первый корень = " << x1 << endl;
            cout << "Второй корень = " << x2 << endl;
        }
    }
    else
    {
        cout << "Ошибка"<< endl;
    }
    system("pause");
}

// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
