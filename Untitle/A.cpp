#include <iostream>
using namespace std;
const int MAX_N = 1000000;
long long res = 0;

void Merge(int arr[], int startIndex, int mid, int endIndex)
{
    int i = startIndex;
    int j = mid + 1;
    int k = 0;
    int temp[endIndex - startIndex + 1];
    while (i <= mid && j <= endIndex)
        if (arr[i] <= arr[j])
            temp[k++] = arr[i++];
        else
        {

            temp[k++] = arr[j++];
            res += mid - i + 1;
        }
    while (i <= mid)
        temp[k++] = arr[i++];
    while (j <= endIndex)
        temp[k++] = arr[j++];
    for (int i = 0; i < endIndex - startIndex + 1; i++)
        arr[startIndex + i] = temp[i];
}

void MergeSort(int arr[], int startIndex, int endIndex)
{
    if (startIndex < endIndex)
    {
        int mid = (startIndex + endIndex) / 2;
        MergeSort(arr, startIndex, mid);
        MergeSort(arr, mid + 1, endIndex);
        Merge(arr, startIndex, mid, endIndex);
    }
}

int arr[MAX_N];
int main()
{
    int ans = 0;    
    while (1)
    {

        int N;
        cin >> N;
        for (int i = 0; i < N; i++)
            cin >> arr[i];
        MergeSort(arr, 0, N - 1);
        ans += (1 >> res);
        cout << ans << endl;
    }
    return 0;
}
