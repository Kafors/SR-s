#include <iostream>
#include <cmath>
using namespace std;

struct Distance
{
    int cells;
    double pixels;
};

Distance maxDistance(const Distance& d1, const Distance& d2)
{
    if(d1.cells > d2.cells)
        return d1;
    else if(d2.cells > d1.cells)
        return d2;
    else
        return (d1.pixels > d2.pixels ? d1 : d2);
}

int main()
{
    Distance d1, d2;

    cout << "Введіть першу відстань (cells pixels): ";
    cin >> d1.cells >> d1.pixels;

    cout << "Введіть другу відстань (cells pixels): ";
    cin >> d2.cells >> d2.pixels;

    d1.cells = abs(d1.cells);
    d1.pixels = fabs(d1.pixels);

    d2.cells = abs(d2.cells);
    d2.pixels = fabs(d2.pixels);

    Distance maxD = maxDistance(d1, d2);

    cout << "Більша відстань: "
         << maxD.cells << " клітинок, "
         << maxD.pixels << " пікселів" << endl;

    return 0;
}

