#include <iostream>
using namespace std;

void reverseArray(int arr[], int start, int end)
{
    while(start < end)
    {
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;

        start++;
        end--;
    }
}

void rotateArray(int arr[], int n, int k)
{
    k = k % n;   // handle large k values

    reverseArray(arr, 0, n-1);
    reverseArray(arr, 0, k-1);
    reverseArray(arr, k, n-1);
}

int main()
{
    int n, k;

    cout << "Enter size of array: ";
    cin >> n;

    int arr[n];

    cout << "Enter array elements:\n";

    for(int i = 0; i < n; i++)
        cin >> arr[i];

    cout << "Enter k (rotation steps): ";
    cin >> k;

    rotateArray(arr, n, k);

    cout << "\nArray after rotation:\n";

    for(int i = 0; i < n; i++)
        cout << arr[i] << " ";
}