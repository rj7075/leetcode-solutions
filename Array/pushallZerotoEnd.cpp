class Solution {
  public:
    void pushZerosToEnd(vector<int>& arr) {
        // code here
      int k=0;
      for(int i=0;i<arr.size();i++){
          if(arr[i]>0){
              arr[k]=arr[i];
              k++;
          }
      }
      for(int j=k;j<arr.size();j++){
          arr[j]=0;
      }
    }
};