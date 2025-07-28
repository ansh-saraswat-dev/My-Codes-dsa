class Solution {
  public:
    // QuickSort using first element as pivot
    void quickSort(vector<int>& arr, int low, int high) {
        if (low < high) {
            int pi = partition(arr, low, high);
            quickSort(arr, low, pi - 1);
            quickSort(arr, pi + 1, high);
        }
    }

    int partition(vector<int>& arr, int low, int high) {
        int pivot = arr[low]; // pivot is first element
        int i = low;
        int j = high;

        while (i < j) {
            // move i forward until element > pivot
            while (i <= high && arr[i] <= pivot) {
                i++;
            }
            // move j backward until element <= pivot
            while (j >= low && arr[j] > pivot) {
                j--;
            }
            if (i < j) {
                swap(arr[i], arr[j]);
            }
        }

        // place pivot in its correct position
        swap(arr[low], arr[j]);

        return j; // pivot index
    }
};
