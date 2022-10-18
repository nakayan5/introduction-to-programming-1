#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    vector<int> array(3);
    cin >> array[0] >> array[1] >> array[2];
    sort(array.begin(), array.end());
    cout << array[0] << " " << array[1] << " " << array[2] << endl;
    
    return 0;
}