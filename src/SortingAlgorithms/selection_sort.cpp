using namespace std;
void selectionSort()
{
    cout << "\n\nSORTING ALGORITHMS #Selection Sort\n";
    int array[] = {5, 34, 4, 1, 7, 34, 67, -32, 76, 2, 3, 5};
    int arraySize = sizeof(array)/sizeof(array[0]);
    cout<<"Unsorted Array: ";
    printArray(array, arraySize);
    for (int i = 0; i < arraySize; i++)
    {
        for (int j = i + 1; j < arraySize; j++)
        {
            if(array[i] <= array[j])
            continue;
            
            int temp = array[i];
            array[i] = array[j];
            array[j] = temp;
        }
    }

    cout<<"\nSorted Array: ";
    printArray(array, arraySize);
}