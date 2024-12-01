#include <iostream>
#include <vector>
#include <climits>
using namespace std;

int maxSumKConsecutive(vector<int> &arr, int k) {
    int n = arr.size();

    if (n < k) {
        cout << "Invalid" << endl;
        return -1;
    }

    int maxSum = 0;
    for (int i = 0; i < k; i++) {
        maxSum += arr[i];
    }

    int windowSum = maxSum;

    for (int i = k; i < n; i++) {
        windowSum += arr[i] - arr[i - k];
        maxSum = max(maxSum, windowSum);
    }

    return maxSum;
}

int main() {
    vector<int> arr1 = {100, 200, 300, 400};
    int k1 = 2;
    cout << maxSumKConsecutive(arr1, k1) << endl; 
    return 0;
}
