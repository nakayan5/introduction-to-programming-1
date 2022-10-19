#include <iostream>
using namespace std;

int main() {
    int a, b;
    char x;
    
    while(cin >> a >> x >> b){
        switch(x){
          case '?':
            break;
          
          case '+':
            cout << a+b << endl;
            continue;
                   
          case '-':
            cout << a-b << endl;
            continue;
                   
          case '*':
            cout << a*b << endl;
            continue;
                   
          case '/':
            cout << a/b << endl;
            continue;
        }
    }
    
    return 0;
}