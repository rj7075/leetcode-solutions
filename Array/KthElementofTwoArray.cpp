class Solution {
  public:
    int kthElement(vector<int> &a, vector<int> &b, int k) {
        // code here
        // Time Complexity: O(log(min(a, b)))
        // Auxiliary Space: O(1)
        int i=0, j=0;
        while(i<a.size()&j<b.size()){
            if(a[i]<b[j]){
                if(k==1) return a[i];
                i++;
                k--;
            }
            else{
                if(k==1) return b[j];
                j++;
                k--;
            }
        }
        while(i<a.size()){
            if(k==1) return a[i];
            i++;
            k--;
        }
        while(j<b.size()){
            if(k==1) return b[j];
            j++;
            k--;
        }
        return 0;
    }
};