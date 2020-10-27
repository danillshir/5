#include <iostream>
using namespace std;

int main()
{
    setlocale(0, "");
    double r;
    double p = 3.14;
    double otv;

    cout << "Введите радиус" << endl;
    cin >> r;

    otv = p * r * r;
    cout << "Площадь круга равна: " << otv << endl;
    system("pause");
}
