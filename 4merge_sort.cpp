#include <iostream>
using namespace std;
void merge_karo(int arr[], int beg, int mid, int end)
{
    int i, j, k;
    int beg_s = (mid - beg + 1);
    int end_s = (end - mid);

    int beg_arr[beg_s];
    int end_arr[end_s];
    for (i = 0; i < beg_s; i++)
    {
        beg_arr[i] = arr[beg + i];
    }
    for (j = 0; j < end_s; j++)
    {
        end_arr[j] = arr[j + 1 + mid];
    }
    i = 0;
    j = 0;
    k = beg;
    while (i < beg_s && j < end_s)
    {
        if (beg_arr[i] <= end_arr[j])
        {
            arr[k] = beg_arr[i];
            i++;
        }
        else
        {
            arr[k] = end_arr[j];
            j++;
        }
        k++;
    }
    while (i < beg_s)
    {
        arr[k] = beg_arr[i];
        i++;
        k++;
    }
    while (j < end_s)
    {
        arr[k] = end_arr[j];
        j++;
        k++;
    }
}
void merge_sorted(int arr[], int beg, int end)
{
    if (beg < end)
    {
        int mid = (beg + end) / 2;
        merge_sorted(arr, beg, mid);
        merge_sorted(arr, mid + 1, end);
        merge_karo(arr, beg, mid, end);
    }
}
void print_fnc(int arr[], int n)
{
    int i;
    for (i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}
int main()
{
    int arr[] = {11, 30, 24, 7, 31, 16, 39, 41,89,-9,45};
    int n = sizeof(arr) / sizeof(arr[0]);
    print_fnc(arr, n);
    cout << endl;
    merge_sorted(arr, 0, n-1);
    print_fnc(arr, n);

    return 0;
}