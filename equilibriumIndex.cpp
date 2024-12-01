#include <iostream>
using namespace std;

int equilibriumIndex(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        int leftSum = 0, rightSum = 0;

        for (int j = 0; j < i; j++) {
            leftSum += arr[j];
        }

        for (int j = i + 1; j < n; j++) {
            rightSum += arr[j];
        }

        if (leftSum == rightSum) {
            return i + 1; 
        }
    }
    return -1;
}

int main() {
    int arr[] = {-7, 1, 5, 2, -4, 3, 0};
    int n =7;
    cout << "Equilibrium Index: " << equilibriumIndex(arr, n) << endl;
    return 0;
}
