class Solution {
public:

    // Function to find the largest element in the array
    int largest(vector<int> &arr) {

        // Initially assume the largest number is the smallest
        // possible integer value.
        // This ensures that any element in the array will be larger.
        int maximum = INT_MIN;

        // Traverse the complete array one by one
        for (int i = 0; i < arr.size(); i++) {

            // If current element is greater than the
            // largest element found so far
            if (arr[i] > maximum) {

                // Update the largest element
                maximum = arr[i];
            }
        }

        // Return the final largest element
        return maximum;
    }
};