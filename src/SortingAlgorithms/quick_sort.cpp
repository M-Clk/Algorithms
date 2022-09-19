using namespace std;

void sort(int array[], int leftIndex, int rightIndex);
int partitation(int array[], int leftIndex, int rightIndex);

void quickSort()
{
    cout << "\n\nSORTING ALGORITHMS #Quick Sort\n";
    int array[] = {5, 34, 4, 1, 7, 34, 67, -32, 76, 2, 3, 5};
    int arraySize = sizeof(array)/sizeof(array[0]);
    cout<<"Unsorted Array: ";
    printArray(array, arraySize);

    sort(array, 0, arraySize - 1);

    cout<<"\nSorted Array: ";
    printArray(array, arraySize);
}

int partitation(int array[], int leftIndex, int rightIndex){
    int pivot = array[rightIndex];
    int index = leftIndex - 1;
    for (int i = leftIndex; i <= rightIndex; i++)
    {
        if(array[i] < pivot)
        {
            index++;
            int temp = array[i];
            array[i] = array[index];
            array[index] = temp;
        }
    }
    int temp = array[rightIndex];
    array[rightIndex] = array[index + 1];
    array[index + 1] = temp;
    return index + 1;
}

void sort(int array[], int leftIndex, int rightIndex){
    if(leftIndex >= rightIndex)
        return;
    int index = partitation(array, leftIndex, rightIndex);
    sort(array, index + 1, rightIndex);
    sort(array, leftIndex, index - 1);
}