#include <iostream>
using namespace std;

int main(){
	int arr[]={24,72,12,9,44};
	int n=sizeof(arr) / sizeof(arr[0]), sum = 0;
	float average;

    for (int i = 0; i < n; ++i) {
        sum += arr[i];
    }

    average = (float)sum / n;

    cout << "Rata-rata: " << average << endl;
    
    return 0;
}

