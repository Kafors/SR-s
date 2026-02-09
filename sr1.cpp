#include <iostream>
#include <list>
#include <algorithm>
#include <iterator>
#include <cmath>

using namespace std;

int main() {
    int n;
    cout << "Введіть n: ";
    cin >> n;

    list<double> numbers;

    cout << "Введіть елементи:\n";
    generate_n(back_inserter(numbers), n, [](){
        double x;
        cin >> x;
        return x;
    });

    bool hasLessThanMinus3 = any_of(
        numbers.begin(),
        numbers.end(),
        [](double x){ return x < -3; }
    );

    if (hasLessThanMinus3) {
        transform(
            numbers.begin(),
            numbers.end(),
            numbers.begin(),
            [](double x){
                return (x < 0) ? x*x : x;
            }
        );
    } 
    else {
        transform(
            numbers.begin(),
            numbers.end(),
            numbers.begin(),
            [](double x){
                return x * 0.1;
            }
        );
    }

    cout << "Результат:\n";
    copy(
        numbers.rbegin(),
        numbers.rend(),
        ostream_iterator<double>(cout, " ")
    );

    cout << endl;
    return 0;
}
