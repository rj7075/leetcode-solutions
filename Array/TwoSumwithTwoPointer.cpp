class Solution {
public:
    vector<int> twoSum(vector<int>& arr, int target) {

        // Two Pointer Approach
        // Works only because the array is sorted

        int left = 0;                 // Smallest element
        int right = arr.size() - 1;   // Largest element

        while (left < right) {

            int currentSum = arr[left] + arr[right];

            // Pair found
            if (currentSum == target) {
                return {left + 1, right + 1};
            }

            // Sum is too small
            // Need a larger value -> move left pointer forward
            else if (currentSum < target) {
                left++;
            }

            // Sum is too large
            // Need a smaller value -> move right pointer backward
            else {
                right--;
            }
        }

        // No valid pair exists
        return {-1, -1};
    }
};