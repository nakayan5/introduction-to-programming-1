#include <iostream>
using namespace std;

int main() {
    int W, H, x, y, r;
    cin >> W >> H >> x >> y >> r;
    
    if((x >= r && (x + r) <= W) && (y >= r && (y + r) <= H)){
       cout << "Yes" << endl;
    } else {
       cout << "No" << endl; 
    }
    
    return 0;
}