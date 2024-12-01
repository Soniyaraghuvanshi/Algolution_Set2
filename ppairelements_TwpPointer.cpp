//Two-Pointer Technique

#include <iostream>
using namespace std;

bool pairWithSum(int A[], int N, int X) {
    int left = 0, right = N - 1;

    while (left < right) {
        int sum = A[left] + A[right];

        if (sum == X) {
            return true;
        } else if (sum < X) {
            left++;
        } else {
            right--;
        }
    }
    return false;
}

int main() {
    int A[] = {1, 2, 4, 5, 7, 11};
    int N = 6;
    int X = 9;

    if (pairWithSum(A, N, X)) {
        cout << "Yes" << endl; 
    } else {
        cout << "No" << endl;
    }

    return 0;
}
