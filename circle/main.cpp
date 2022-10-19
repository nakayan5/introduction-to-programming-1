#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main() {
    double r;
    cin >> r;
    cout << fixed;
    cout << setprecision(6);
    cout << r*r*M_PI << " " << 2*r*M_PI << endl;
    
    return 0;
}