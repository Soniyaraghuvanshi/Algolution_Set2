#include <iostream>
#include <vector>
using namespace std;

int findKthLargestBrute(vector<int>& nums,int n, int k) {
    
    for (int i = 0; i < k; i++) {
        int maxIdx = 0;
        for (int j = 1; j < n; j++) {
            if (nums[j] > nums[maxIdx]) {
                maxIdx = j;
            }
        }
       
        if (i == k - 1) return nums[maxIdx];
       
        nums[maxIdx] = INT_MIN; 
    }
    return -1; 
}

int main() {
    vector<int> nums = {3, 2, 1, 5, 6, 4};
    int n=6;
    int k = 2;
    cout << "Brute Force Result: " << findKthLargestBrute(nums, n,k) << endl;
    return 0;
}
