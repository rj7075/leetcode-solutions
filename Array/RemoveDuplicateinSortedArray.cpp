class Solution {
  public:
    vector<int> removeDuplicates(vector<int> &arr) {
        // code here
      vector<int>ans;
      int n=arr.size();
      if(n<=1){
          return arr;
      }
      ans.push_back(arr[0]);
      for(int i=1;i<n;i++){
          if(arr[i]!=arr[i-1]){
              ans.push_back(arr[i]);
          }
      }
      return ans;
      
    }
};