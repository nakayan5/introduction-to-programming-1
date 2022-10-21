#include<iostream>
using namespace std;

int main() {
    int H, W;
    while(1) {
        cin >> H >> W;
        if (W == 0 && H == 0)  break;
        for (int h = 1; h <= H; h++) {
            if (h == 1 || h == H) {
                for (int x = 1; x <= W; x++) {
                     cout << "#";
                }
            } else {
                for (int w = 1; w <= W; w++) {
                    if (w == 1 || w == W) {
                        cout << "#";
                    } else {
                        cout << ".";
                    }
                }
                
            }
            cout << endl;
        }
        cout << endl;
    }
    return 0;
}