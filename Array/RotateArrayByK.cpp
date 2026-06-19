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