#include <iostream>
using namespace std;

void printO(int n, int m){
    if (n <= 0 || m <= 0){
        cout << "Invalid input" << endl;
        return;
    }
    
    for (int i = 0; i <n; i++){
        for (int j = 0; j < m; j++){
            cout << "O";
        }
        cout << endl;
    }
}