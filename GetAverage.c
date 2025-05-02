float GetAverage(int *arr, int size){ // take a pointer to an int arr and return its average
    float sum = 0;
    for (int i = 0; i < size; i++)
    {
        sum += *(arr + i); // or we can do arr[i] instead of *(arr + i)
    }
    return sum/size;
}