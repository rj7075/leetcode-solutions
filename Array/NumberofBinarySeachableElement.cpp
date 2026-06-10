// Find the number element is binary searchable if array is not sorted still.

class Solution {
  public:
    int binarySearchable(vector<int>& arr) {
        // code here
        int n=arr.size();
        int count=0;
        for(int i=0;i<n;i++){
            int target=arr[i];
            int l=0;
            int r=n-1;
            while(l<=r){
                int mid=l+(r-l)/2;
                if(arr[mid]==target){
                    count++;
                    break;
                }
                else if(arr[mid]<target){
                    l=mid+1;
                }
                else{
                    r=mid-1;
                }
            }
        }
       return count;
        
    }
};