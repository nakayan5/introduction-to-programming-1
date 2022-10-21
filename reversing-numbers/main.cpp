#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cin >> n;
    
    vector<int> array(n);
    
    for (int i = 0; i < n; i++) {
        cin >> array[i];
    }
    
    for (int i = n - 1; i >= 0; i--) {
        if (i == 0) {
            cout << array[0];
        } else {
            cout << array[i] << " ";
        }
    }
    cout << endl;
    return 0;
}