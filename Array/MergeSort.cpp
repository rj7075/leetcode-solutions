class Solution {
public:

    /*
        MERGE FUNCTION

        Before calling merge():
        arr[l ... mid]     -> already sorted
        arr[mid+1 ... r]   -> already sorted

        Our job:
        Combine these two sorted halves into one sorted portion.
    */
    void merge(vector<int>& arr, int l, int mid, int r) {

        // Size of left sorted part
        int n1 = mid - l + 1;

        // Size of right sorted part
        int n2 = r - mid;

        // Temporary arrays to store both halves
        vector<int> left(n1);
        vector<int> right(n2);

        // Copy left half into left[]
        for (int i = 0; i < n1; i++) {
            left[i] = arr[l + i];
        }

        // Copy right half into right[]
        for (int j = 0; j < n2; j++) {
            right[j] = arr[mid + 1 + j];
        }

        /*
            i -> pointer for left array
            j -> pointer for right array
            k -> pointer for original array
        */
        int i = 0;
        int j = 0;
        int k = l;

        /*
            Compare both arrays and place
            the smaller element into arr[]
        */
        while (i < n1 && j < n2) {

            if (left[i] <= right[j]) {
                arr[k] = left[i];
                i++;
            }
            else {
                arr[k] = right[j];
                j++;
            }

            k++;
        }

        /*
            If some elements remain in left[],
            copy them to arr[]
        */
        while (i < n1) {
            arr[k] = left[i];
            i++;
            k++;
        }

        /*
            If some elements remain in right[],
            copy them to arr[]
        */
        while (j < n2) {
            arr[k] = right[j];
            j++;
            k++;
        }
    }

    /*
        MERGE SORT

        Idea:
        1. Divide array into two halves.
        2. Sort left half.
        3. Sort right half.
        4. Merge both sorted halves.
    */
    void mergeSort(vector<int>& arr, int l, int r) {

        // Base Case:
        // One element is already sorted
        if (l >= r)
            return;

        // Find middle index
        int mid = l + (r - l) / 2;

        // Sort left half
        mergeSort(arr, l, mid);

        // Sort right half
        mergeSort(arr, mid + 1, r);

        // Merge both sorted halves
        merge(arr, l, mid, r);
    }
};