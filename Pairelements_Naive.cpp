//Naive Approach

#include <iostream>
using namespace std;

bool pairWithSum(int A[], int N, int X) {
    for (int i = 0; i < N; i++) {
        for (int j = i + 1; j < N; j++) {
            if (A[i] + A[j] == X) {
                return true;
            }
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
