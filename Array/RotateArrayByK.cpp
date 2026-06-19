// Expected Time Complexity: O(n)
// Expected Auxiliary Space: O(1)
class Solution {
public:

    // Reverse elements between left and right indices
    void reverse(vector<int>& arr, int left, int right) {

        while (left < right) {

            // Swap the elements at both ends
            swap(arr[left], arr[right]);

            // Move towards the center
            left++;
            right--;
        }
    }

    void rotateclockwise(vector<int>& arr, int k) {

        int n = arr.size();

        // Empty array -> nothing to do
        if (n == 0) {
            return;
        }

        // If k > n, reduce unnecessary rotations
        k = k % n;

        // If k becomes 0, array remains unchanged
        if (k == 0) {
            return;
        }

        // STEP 1:
        // Reverse the entire array
        // [1,2,3,4,5] -> [5,4,3,2,1]
        reverse(arr, 0, n - 1);

        // STEP 2:
        // Reverse first k elements
        // [5,4,3,2,1]
        // k=2
        // [4,5,3,2,1]
        reverse(arr, 0, k - 1);

        // STEP 3:
        // Reverse remaining elements
        // [4,5,3,2,1]
        // -> [4,5,1,2,3]
        reverse(arr, k, n - 1);
    }
};
Method 1: Using Recursion

class Solution {
public:
    void rotateclockwise(vector<int>& arr, int k) {

        // Base case:
        // If k becomes 0, we have completed all rotations.
        if (k == 0) {
            return;
        }

        int n = arr.size();

        // If array is empty, nothing to rotate.
        if (n == 0) {
            return;
        }

        // Store the last element because it will move to index 0.
        int temp = arr[n - 1];

        // Shift every element one position to the right.
        // Example:
        // [1,2,3,4,5]
        // becomes
        // [1,1,2,3,4]
        for (int i = n - 1; i > 0; i--) {
            arr[i] = arr[i - 1];
        }

        // Place the original last element at the front.
        // [1,1,2,3,4] -> [5,1,2,3,4]
        arr[0] = temp;

        // One rotation is completed.
        // Now rotate the array (k-1) more times.
        rotateclockwise(arr, k - 1);
    }
};

Method 2: Using Extra Space
class Solution {
public:
    void rotateclockwise(vector<int>& arr, int k) {

        int n = arr.size();

        // Empty array -> nothing to do
        if (n == 0) {
            return;
        }

        // Rotating n times gives the same array
        // Example: n=5, k=7 => k=2
        k = k % n;

        // No rotation needed
        if (k == 0) {
            return;
        }

        vector<int> temp;

        for (int i = 0; i < n; i++) {

            // First k positions of temp
            // should contain the last k elements of arr
            if (i < k) {

                temp.push_back(arr[n - k + i]);

            }
            // Remaining positions contain
            // the first (n-k) elements
            else {

                temp.push_back(arr[i - k]);

            }
        }

        // Copy rotated array back
        arr = temp;
    }
};

