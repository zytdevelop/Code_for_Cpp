

void InsertSort(int arr[], int arraysize){
  int j , p;
  int Tmp;
  for(p = 1; p < N; p++)
  {
    Tmp = arr[p];
    for(j = p; j>0 && arr[j - 1]>Tmp; j--)
    {
      arr[j] = arr[j - 1];
    }
    arr[j] = Tmp;
  }
}
