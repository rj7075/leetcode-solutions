class Solution {
  public:
    bool armstrongNumber(int n) {
        // code here
        int ans=n;
        int sum=0;
        while(n!=0){
            int temp=n%10;
            sum+=pow(temp,3);
            n=n/10;
        }
        if(sum==ans){
            return true;
        }
        return false;
    }
};