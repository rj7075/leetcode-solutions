//brute force approach

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
       int x,y;
       for(int i=0;i<nums.size()-1;i++){
        for(int j=i+1;j<nums.size();j++){
            if(nums[i]+nums[j]==target){
                x=i;
                y=j;
                break;
            }
        }
       }
       return {x,y};
    }
};

//optimal approach
// time complexity- o(n)
class Solution {
public:
    vector<int> twoSum(vector<int> &nums, int target) {
        unordered_map<int, int> hash;
        for (int i = 0; i < nums.size(); i++) {
            hash[nums[i]] = i;
        }
        for (int i = 0; i < nums.size(); i++) {
            int complement = target - nums[i];
            if (hash.find(complement) != hash.end() && hash[complement] != i) {
                return {i, hash[complement]};
            }
        }
        // If no valid pair is found, return an empty vector
        return {};
    }
};