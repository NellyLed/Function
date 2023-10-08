#include <iostream>

using namespace std;

int one(int a)
{
    if (a == 1)
    {
        return 1;
    }
    if (a == 0)
    {
        return 0;
    }

    return a * one(a - 1);

}

int two(int sum)
{
    setlocale(LC_ALL, "ru");
    if (sum == 0)
    {
        return 0;
    }
    if (sum == 1)
    {
        return 1;
    }
    return sum * two(sum - 1);

}

int main()
{
    setlocale(LC_ALL, "ru");
    int a;
    cout << "Введите численное значение переменной a=\t";
    cin >> a;
    cout << "Введите численное значение переменной b=\t";
    int b;
    cin >> b;
    int x;
    cout << "Введите численное значение переменной x=\t";
    cin >> x;

    int result = 0;
    result = one(a);
    int sum = 0;
    sum = (result * x + b);
    try
    {
        if (sum > 0)
        {
            int som = 0;
            som = two(sum);
            cout << "Числовое значение выражения=\t\t\t" << som << endl;
        }
    }
    catch (int sum)
    {
        if (sum <= 0)
            cout << "Вычислить числовое значение функции невозможно";
    }
    system("pause");
    return 0;
}
