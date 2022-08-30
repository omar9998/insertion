

//insertion sort
void insertionSort(std::vector<int>& arr)
{
    /
    for (int i = 1; i < arr.size(); i++) {
        int currentIndex = i;
        //Check:
            // 1. that currentIndex is at least 1
            // 2. that the item directly before the currentIndex is greater than the item at currentIndex
       
        while (currentIndex > 0 && arr[currentIndex - 1] > arr[currentIndex]) {
            int temp = arr[currentIndex];
            arr[currentIndex] = arr[currentIndex - 1];
            arr[currentIndex - 1] = temp;
            currentIndex--;
        }
    }
}
