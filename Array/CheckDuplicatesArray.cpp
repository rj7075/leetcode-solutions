class Solution {
  public:
    bool checkDuplicates(vector<int> &arr) {
        // code here
       unordered_map<int,int>mp;
       for(int i=0;i<arr.size();i++){
           mp[arr[i]]++;
       }
       for(auto it:mp){
           if(it.second>1){
               return true;
           }
       }
       return false;
    }
};
