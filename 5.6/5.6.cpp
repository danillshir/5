#include <iostream>
using namespace std;

int main()
{
    setlocale(0, "");
    double m;
    double km,f;
    cout << "Введите мили" << endl;
    cin >> m;
    km = m * 1.609;
    f = m * 5280;
   
    cout << m << " милей в км=" << km << "\n" << endl;
    cout << m << " милей в футы=" << f << "\n" << endl;
    system("pause");
}