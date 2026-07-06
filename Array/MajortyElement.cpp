class Solution {
public:
    int majorityElement(vector<int>& arr) {

        // Step 1: Find the size of the array
        int n = arr.size();

        // Step 2: Create a hash map to store
        // element -> frequency
        unordered_map<int, int> freq;

        // Step 3: Count how many times each element appears
        for (int i = 0; i < n; i++) {
            freq[arr[i]]++;
        }

        // Step 4: Traverse the hash map
        // and check if any element appears more than n/2 times
        for (auto it : freq) {

            // it.first  -> element
            // it.second -> frequency

            if (it.second > n / 2) {
                return it.first;   // Majority element found
            }
        }

        // Step 5: No majority element exists
        return -1;
    }
};