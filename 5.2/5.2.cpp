#include <iostream>
using namespace std;

int main()
{
    setlocale(0, "");
    double a;
    double otv;
    double p=3.14;
    cout << "Введите количество радиан" << endl;
    cin >> a;
    otv = ((a * 180 )/ p);
    cout << "Перевод в градусы равен: " << otv << endl;
    system("pause");
}




