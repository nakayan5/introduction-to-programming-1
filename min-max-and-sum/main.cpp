#include <iostream>
using namespace std;

int main() {
    int n, a;
    cin >> n;
    
    int min = 1000000;
    int max = -1000000;
    long sum = 0;
    
    for (int i = 1; i <= n; i++) {
        cin >> a;
        
        if (min > a) {
            min = a;
        }
        
        if (max < a) {
            max = a;
        }
        
        sum += a;
    }
    
    cout << min << " " << max << " " << sum << endl;
    
    return 0;
}