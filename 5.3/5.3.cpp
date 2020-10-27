#include <iostream>
using namespace std;

int main()
{
    setlocale(0, "");
    double a,b,c;
    double otv;

    cout << "Введите a" << endl;
    cin >> a;
    cout << "Введите b" << endl;
    cin >> b;
    cout << "Введите c" << endl;
    cin >> c;
    otv = (a + b + c) / 3;
    cout << "Среднее арифметическое равно: " << otv << endl;
    system("pause");
}


