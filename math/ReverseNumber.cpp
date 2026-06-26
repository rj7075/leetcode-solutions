class Solution {
  public:
    int reverseDigits(int n) {
        // Code here
        int temp=abs(n);
        int rev=0;
        while(temp!=0){
            rev=rev*10+temp%10;
            temp=temp/10;
        }
        return rev;
    }
};