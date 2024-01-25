// QUICK SORT
#include <bits/stdc++.h>
using namespace std;

int partition(int arr[], int low, int high)
{
    int pv = arr[low];
    int s = low, e = high;
    while (s < e)
    {
        while (arr[s] <= pv)
        {
            s++;
        }
        while (arr[e] > pv)
        {
            e--;
        }
        if (s < e)
        {
            swap(arr[s], arr[e]);
        }
    }
    swap(arr[low], arr[e]);
    cout << "The Pivot Element is : " << pv << endl;
    return e;
}

void quickSort(int arr[], int low, int high, int n)
{
    if (low < high)
    {
        cout << "for current pass, the array is : " << endl;
        for (int i = 0; i < n; i++)
        {
            cout << arr[i] << " ";
        }
        cout << endl;
        cout << endl;
        int pt = partition(arr, low, high);
        quickSort(arr, low, pt - 1, n);
        cout << "After Sorting Before Pivot, the array is : " << endl;
        for (int i = 0; i < n; i++)
        {
            cout << arr[i] << " ";
        }
        cout << endl;
        quickSort(arr, pt + 1, high, n);
        cout << "After Sorting After Pivot, the array is : " << endl;
        for (int i = 0; i < n; i++)
        {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
}

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    quickSort(arr, 0, n, n);
    cout << "Final Sorted Array is :" << endl;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}