#include<iostream>
#include <cmath>

using namespace std;


int main() {
    double a,b,c, area;

    cout << "Enter a: ";
    cin >> a;

    cout << "Enter b: ";
    cin >> b;

    cout << "Enter c: ";
    cin >> c;

    double s = (a + b + c) / 2;

    area = sqrt(s * (s - a) * (s - b) * (s - c));

    cout << endl << "Area = " << area << endl;

    return 0;
}
