#include <iostream>
using namespace std;
int linear_search(int arr[], int n, int search)
{
    int i;
    for (i = 0; i < n; i++)
    {
        if (arr[i] == search)
        {
            return arr[i];
        }
    }
    return -1;
}
int main()
{
    int arr[] = {1, 5, 6, 4, 33, 66, 33, 8};
    int n = sizeof(arr) / sizeof(arr[0]);
    int search;
    cin >> search;
    cout << linear_search(arr, n, search);
}