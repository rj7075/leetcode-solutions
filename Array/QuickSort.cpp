class Solution {
public:

    /*
    =====================================================
                    QUICK SORT
    =====================================================

    Idea:
    1. Pick a pivot element.
    2. Put the pivot at its correct sorted position.
    3. All smaller elements go to the left side.
    4. All larger elements go to the right side.
    5. Repeat the same process on left and right parts.

    Example:

        [4, 6, 2, 5, 7, 9, 1, 3]

        Pivot = 4

        After Partition:

        [1, 3, 2, 4, 7, 9, 5, 6]
                  ^

        Pivot is now fixed.

        Sort Left  -> [1,3,2]
        Sort Right -> [7,9,5,6]

    =====================================================
    */

    void quickSort(vector<int>& arr, int low, int high)
    {
        /*
        Base Condition

        If there is only one element or no element,
        array is already sorted.
        */

        if (low < high)
        {
            /*
            Partition the array and get the
            final position of pivot.
            */

            int pivotIndex = partition(arr, low, high);

            /*
            Sort Left Side

            Elements before pivot.
            */

            quickSort(arr, low, pivotIndex - 1);

            /*
            Sort Right Side

            Elements after pivot.
            */

            quickSort(arr, pivotIndex + 1, high);
        }
    }

    int partition(vector<int>& arr, int low, int high)
    {
        /*
        We choose the FIRST element as pivot.

        Example:

            [4, 6, 2, 5, 7, 9, 1, 3]
             ^

        Pivot = 4
        */

        int pivot = low;

        /*
        i starts from left side
        j starts from right side

        i searches for elements GREATER than pivot.
        j searches for elements SMALLER than pivot.
        */

        int i = low;
        int j = high;

        /*
        Continue until i and j cross each other.
        */

        while (i < j)
        {
            /*
            Move i forward until we find
            an element greater than pivot.

            Example:

                Pivot = 4

                [4,3,2,8,7,5]

                        ^
                        stop at 8
            */

            while (i <= high && arr[i] <= arr[pivot])
            {
                i++;
            }

            /*
            Move j backward until we find
            an element smaller than or equal
            to pivot.

            Example:

                Pivot = 4

                [4,3,2,8,7,5,1]

                              ^
                              stop at 1
            */

            while (j >= low && arr[j] > arr[pivot])
            {
                j--;
            }

            /*
            If i and j haven't crossed,
            swap wrong elements.

            Example:

                [4,8,2,5,7,1,3]

                   i       j

                Swap 8 and 1

                [4,1,2,5,7,8,3]
            */

            if (i < j)
            {
                swap(arr[i], arr[j]);
            }
        }

        /*
        When loop ends:

        i and j have crossed.

        j indicates the correct position
        where pivot should be placed.

        Example:

            [4,1,3,2]

             pivot

        After swap:

            [2,1,3,4]

                   ^
                pivot fixed
        */

        swap(arr[j], arr[pivot]);

        /*
        Return pivot position so that
        quickSort can divide array into:

            Left Part
            Pivot
            Right Part
        */

        return j;
    }
};