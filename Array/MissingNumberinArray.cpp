class Solution {
  public:
    int missingNum(vector<int>& arr) {
       // Your code goes here
        long long n= arr.size();
    long long t=n+1;
        long long sum=0;
        for(int i=0;i<n;i++){
            sum+=arr[i];
        }
        
        long long total =t*(t+1)/2;
        long long int ans=(total-sum);
        return ans;
        
        
    }
};