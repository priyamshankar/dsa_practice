#include <iostream>
using namespace std;
class insertion
{
    int i;
    int j;
    int count;
    int temp;

public:
    void sort_kardo(int n, int arr[])
    {
        for (i = 1; i < n; i++)
        {
            for (j = 0; j < i; j++)
            {
                if (arr[i] < arr[j])
                {
                    count = j;
                    break;
                }
                else {
                    count=i;
                }
            }
            cout<<count<<"  ";
            for (j = count; j < i +1; j++)
            {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    void display(int n, int arr[])
    {
        cout << "\nsorting done successfully!!!\n";
        for (i = 0; i < n; i++)
        {
            cout <<arr[i] << "  ";
        }
    }
};
int main()
{
    int arr[] = {5, 6, 2, 3, 11, 4, 9, 7, 8, 888, 95, 7776, -5, 1, 66, 55, 44};
    int n;
    n = ((sizeof(arr)) / 4);
    insertion active;
    active.sort_kardo(n, arr);
    active.display(n, arr);
    return 0;
}