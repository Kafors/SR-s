#include <iostream>
using namespace std;

double power(double n, int p = 2)
{
    double result = 1.0;
    int count = abs(p);  

    while(count > 0)
    {
        result *= n;
        count--;
    }

    if(p < 0)   
        result = 1.0 / result;

    return result;
}

int main()
{
    double n;
    int p;

    cout << "Введіть число: ";
    cin >> n;

    cout << "Введіть степінь (0 = квадрат за замовчуванням): ";
    cin >> p;

    if(p == 0)
        cout << "Результат: " << power(n) << endl;
    else
        cout << "Результат: " << power(n, p) << endl;

    return 0;
}
