class Solution {
public:
    vector<int> intersect(vector<int>& a, vector<int>& b) {

        // Step 1:
        // Create an unordered_set from vector 'a'.
        // A set stores only unique elements.
        // Example:
        // a = {1, 2, 3, 2, 1}
        // st = {1, 2, 3}
        unordered_set<int> st(a.begin(), a.end());

        // This vector will store the intersection.
        vector<int> ans;

        // Step 2:
        // Traverse every element of vector 'b'.
        for (int i = 0; i < b.size(); i++) {

            // Step 3:
            // Check whether b[i] exists in the set.
            //
            // st.find(b[i])
            //      ↓
            // Returns:
            //   • Iterator to the element if it exists.
            //   • st.end() if it does NOT exist.
            //
            // Therefore,
            // st.find(b[i]) != st.end()
            // means "Element exists in the set."
            if (st.find(b[i]) != st.end()) {

                // Step 4:
                // Since the element is present in both arrays,
                // add it to the answer.
                ans.push_back(b[i]);

                // Step 5:
                // Remove the element from the set.
                // This prevents adding the same element again
                // if it appears multiple times in vector b.
                st.erase(b[i]);
            }
        }

        // Step 6:
        // Return the intersection.
        return ans;
    }
};