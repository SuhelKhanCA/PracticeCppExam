// 3rd Program MAXIMUM ARRAY SUM PROBLEM
#include <iostream>
#include <vector>

using namespace std;

long maximumSumSubarray(int K, vector<int>& Arr, int N) {
    long maxSum = 0;
    long currentSum = 0;

    // Calculate the sum of the first K elements
    for (int i = 0; i < K; i++) {
        currentSum += Arr[i];
    }

    maxSum = currentSum;

    // Use a sliding window to find the maximum sum subarray
    for (int i = K; i < N; i++) {
        // Add the current element to the window
        currentSum += Arr[i];
        // Subtract the first element of the window to maintain the window size
        currentSum -= Arr[i - K];

        // Update the maximum sum if the current sum is greater
        maxSum = max(maxSum, currentSum);
    }

    return maxSum;
}

int main() {
    int N1 = 4, K1 = 2;
    vector<int> Arr1 = {100, 200, 300, 400};
    cout << maximumSumSubarray(K1, Arr1, N1) << endl;  // Output: 700

    int N2 = 4, K2 = 4;
    vector<int> Arr2 = {100, 200, 300, 400};
    cout << maximumSumSubarray(K2, Arr2, N2) << endl;  // Output: 1000

    return 0;
}
