#include <iostream>
using namespace std;

int main()
{
    setlocale(0, "");
    cout << "Вывод последовательности простых чисел: ";
    for (int i = 2; i < 200; i++)
        for (int x = 2; x < i; x++)
        {
            if (i % x == 0)
                break;
            else if (i == x + 1)
                cout << i << " ";
        }
    system("pause");
}


