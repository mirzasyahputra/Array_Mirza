#include <iostream>
using namespace std;

int main() {
    int nil[7] = {14, 21, 53, 14, 25, 6, 7};
    int sum = 0;

    for (int i = 0; i < 7; i++) {
        sum += nil[i];
    }

    cout << "Array: ";
    for (int i = 0; i < 7; i++) {
        cout << nil[i] << " ";
    }
    
    cout << "\nJumlah elemen: " << sum;

    return 0;
}
