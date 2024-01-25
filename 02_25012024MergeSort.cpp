#include <bits/stdc++.h>
using namespace std;

void merge(int arr[], int start, int mid, int end)
{
    int p = start, q = mid+1, i = 0;
    int brr[end - start + 1];
    while (p <= mid && q <= end)
    {
        if (arr[p] <= arr[q])
        {
            brr[i] = arr[p];
            p++;
            i++;
        }
        else
        {
            brr[i] = arr[q];
            q++;
            i++;
        }
    }
    while (p <= mid)
    {
        brr[i] = arr[p];
        p++;
        i++;
    }
    while (q <= end)
    {

        brr[i] = arr[q];
        q++;
        i++;
    }

    for(int j = 0; j < i; j++){
        arr[start] = brr[j];
        start++;
    }
}

void mergeSort(int arr[], int start, int end)
{
    if (start < end)
    {

        int mid = start + (end - start) / 2;

        mergeSort(arr, start, mid);

        cout << "After Applying Merge Sort For First Half We Get " << endl;
        for (int i = 0; i < mid; i++)
        {
            cout << arr[i] << " ";
        }
        cout << endl;

        mergeSort(arr, mid + 1, end);

        cout << "After Applying Merge Sort For Second Half We Get " << endl;
        for (int i = start; i < end; i++)
        {
            cout << arr[i] << " ";
        }
        cout << endl;

        cout << "Merging The Array" << endl;
        merge(arr, start, mid, end);
        cout<<endl;
        cout<<endl;
    }
}

int main()
{
    int n;
    cout << "Enter The Size Of Array : " << endl;
    cin >> n;
    cout << "Enter The Array : " << endl;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cout << "Applying Merge Sort : " << endl;
    mergeSort(arr, 0, n);

    cout << endl;
    cout << "Final Array " << endl;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}