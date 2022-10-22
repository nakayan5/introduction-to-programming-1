#include <iostream>;
using namespace std;

int count(int n) {
    return n % 13 + 1;
}

int main() {
    int n;
    int card[4][13] = {{}}; // カードを入れる箱
    char mark; int number;
    cin >> n;
    
    // markとnumberがないもの空の値が入る
    for(int i = 0; i < n; i++){
		cin >> mark >> number;
		switch (mark) {
			case 'S':
                card[0][number - 1] = 1;
                break;
			case 'H':
                card[1][number - 1] = 1;
                break;
			case 'C':
                card[2][number - 1] = 1;
                break;
			case 'D':
                card[3][number - 1] = 1;
                break;
		}
	}
	
	for(int i = 0; i < 52; i++){
		switch (i / 13) {
			case 0:
    			if(!card[0][i % 13]) cout << "S" << " " << count(i) << endl;
    			break;
			case 1:
    			if(!card[1][i % 13]) cout << "H " << count(i) << endl;
    			break;
			case 2:
    			if(!card[2][i % 13]) cout << "C " << count(i) << endl;
    			break;
			case 3:
    			if(!card[3][i % 13]) cout << "D " << count(i) << endl;
    			break;
		}
	}
    return 0;
}