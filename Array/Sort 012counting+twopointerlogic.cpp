Sort 0 1 2 via two pointer logic
two pointer based problems:-
1.Sort 0 1 2
2.Move all negative numbers to beginning and positive to end
3.Partitioning of array
4.Sort an array of 0s 1s 2s 3s
5.Sort an array of 0s 1s 2s .... k-1s
6.sort 0 1 via counting sort
7.Binary array sorting

Code Snippet:
class Solution {
  public:
    void sort012(vector<int>& arr) {
        // code here
        int low=0,mid=0;
        int high=arr.size()-1;
        while(mid<=high){
            if(arr[mid]==0){
                swap(arr[mid],arr[low]);
                    low++;
                    mid++;
                
            }
            
                else if(arr[mid]==1){
                    mid++;
                }
                else{
                    swap(arr[mid],arr[high]);
                        high--;
                    
                }
            }
        
    }
};

Counting apprach to sort 0 1 2

class Solution {
  public:
    void sort012(vector<int>& arr) {
        // code here
       int count0=0;
       int count1=0;
       int count2=0;
       
        int n=arr.size();
        int i=0;
        while(i<n){
            if(arr[i]==0){
                count0++;
            }
            else if(arr[i]==1){
                count1++;
            }
            else{
                count2++;
            }
            i++;
        }
        for (int i=0;i<count0;i++){
            arr[i]=0;
        }
        for (int i=count0;i<count0+count1;i++){
            arr[i]=1;
        }
        for (int i=count0+count1;i<n;i++){
            arr[i]=2;
        }
        
    }
};