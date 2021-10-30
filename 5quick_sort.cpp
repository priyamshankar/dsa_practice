#include <iostream>
using namespace std;
void swap(int arr[], int i, int j)
{
    int temp;
    temp = arr[i];
    arr[i] = arr[j];
    arr[j] = temp;
}
int selection(int arr[], int left, int right)
{
    int j;
    int pivot = arr[right];
    int i = left - 1;
    for (j = left; j < right; j++)
    {
        if (pivot > arr[j])
        {
            i++;
            swap(arr, i, j);
        }
    }
    swap(arr,i+1,right);
    return i+1;
}
void quick_sort(int arr[], int left, int right)
{
    if (left < right)
    {
        int p = selection(arr, left, right);
        quick_sort(arr, left, p - 1);
        quick_sort(arr, p + 1, right);
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
int main(){
    {
    int arr[] = {11, 30, 24, 7, 31, 16, 39, 41,89,-9,45};
    int n = sizeof(arr) / sizeof(arr[0]);
// n=8;
    print_fnc(arr, n);
    cout << endl;
    quick_sort(arr,0,n-1);
    print_fnc(arr, n);

    return 0;
}
