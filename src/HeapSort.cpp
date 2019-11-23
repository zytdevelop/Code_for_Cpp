#include<algorithm>

#define LeftChild(i) (2 * ( i ) + 1)


//建立最小堆
void PercDown(int arr[], int N){
    int child = 0;
    int Tmp = 0;
    for(Tmp = arr[i]; LeftChild(i) < N; i = child)
    {
        child = LeftChild(i);
        if(child != N -1; && a[child + 1] > arr[child])
            child++;
        if(Tmp < arr[child])
            arr[i] = arr[child];
        else
            break;
    }
    arr[i] = Tmp;
}


void HeapSort(int arr[], int ArrSize){
    int i = 0;
    
    for(i = ArrSize/ 2; i >= 0; i--)
        PercDown(arr, i , N);
    for(i = N - 1; i > 0; i--)
    {
        std::swap(arr[0], arr[i]);
        PercDown(arr,0,i);
    }
}
