class Solution {
public:

    vector<vector<int>> countFreq(vector<int>& arr) {

        // Step 1:
        // Create a hash map where:
        // Key   = Array element
        // Value = Frequency (count) of that element
        unordered_map<int, int> mp;

        // Step 2:
        // This vector will store the final answer.
        //
        // Example:
        // [
        //   [1, 3],   // 1 appears 3 times
        //   [2, 2],   // 2 appears 2 times
        //   [5, 1]    // 5 appears 1 time
        // ]
        vector<vector<int>> ans;

        // Step 3:
        // Traverse the array and count frequency
        //
        // Example:
        // arr = [1,1,2,2,2,5]
        //
        // Iteration 1:
        // mp[1] = 1
        //
        // Iteration 2:
        // mp[1] = 2
        //
        // Iteration 3:
        // mp[2] = 1
        //
        // Iteration 4:
        // mp[2] = 2
        //
        // Iteration 5:
        // mp[2] = 3
        //
        // Iteration 6:
        // mp[5] = 1
        //
        // Final map:
        // {
        //   1 : 2,
        //   2 : 3,
        //   5 : 1
        // }
        for (int num : arr) {
            mp[num]++;
        }

        // Step 4:
        // Traverse the map and store each
        // {element, frequency} pair in answer.
        //
        // Example:
        // mp = {
        //   1 : 2,
        //   2 : 3,
        //   5 : 1
        // }
        //
        // ans becomes:
        // [
        //   [1,2],
        //   [2,3],
        //   [5,1]
        // ]
        for (auto it : mp) {

            // it.first  -> element
            // it.second -> frequency

            ans.push_back({it.first, it.second});
        }

        // Step 5:
        // Return the final answer
        return ans;
    }
};