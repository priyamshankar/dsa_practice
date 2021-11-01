#include <iostream>
using namespace std;
int binary_search(int arr[], int n, int key)
{
    int i, s, e;
    int mid;
    s = 0;
    e = n;
    for (i = 0; i < n; i++)
    {
        mid = (s + e) / 2;
        if (arr[i] == key)
        {
            return arr[i];
        }
        else if (key > mid)
        {
            s = mid + 1;
        }
        else
        {
            e = mid - 1;
        }
    }
    return -1;
}
int main()
{
    int arr[] = {2, 5, 67, 88, 345, 678};
    int n = sizeof(arr) / sizeof(arr[0]);
    int key;
    cin >> key;
    cout<<binary_search(arr, n, key);
}