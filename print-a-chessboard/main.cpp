#include <iostream>
using namespace std;

int main() {
    int H, W;
    
    while(1) {
        cin >> H >> W;
        
        if (H == 0 && W == 0) break;
        
        for (int h = 1; h <= H; h++) {
            if (h % 2 == 1) {
                for (int w = 1; w <= W; w++) {
                    if (w % 2 == 1) {
                        cout << "#";
                    } else {
                        cout << ".";
                    }
                }
            } else {
                for (int w = 1; w <= W; w++) {
                    if (w % 2 == 1) {
                        cout << ".";
                    } else {
                        cout << "#";
                    }
                }
            }
            cout << endl;
        }
        cout << endl;
    }
    return 0;
}