#include <iostream>
using namespace std;

void zeroSmaller(int& a, int& b)
{
    if(a < b)
        a = 0;
    else if(b < a)
        b = 0;
}

int main()
{
    int x, y;
    cout << "Введіть два числа: ";
    cin >> x >> y;

    zeroSmaller(x, y);

    cout << "Після обробки:\n";
    cout << "Перше число: " << x << "\nДруге число: " << y << endl;

    return 0;
}
