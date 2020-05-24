#include  <iostream>

using namespace std;

int shellSort(int v[], int n)
{
    for (int gap = n/2; gap > 0; gap /= 2)
    {
        for (int i = gap; i < n; i += 1)
        {
            int temp = v[i];
            int j;
            for (j = i; j >= gap && v[j - gap] > temp; j -= gap)
                v[j] = v[j - gap];
            v[j] = temp;
        }
    }
    return 0;
}

void printArray(int v[], int n)
{
    for (int i=0; i<n; i++)
        cout << v[i] << " ";
}

int main()
{
    int v[] = {12, 34, 54, 2, 3};
    int n = sizeof(v)/sizeof(v[0]);

    cout << "vector inainte de sortare: \n";
    printArray(v, n);

    shellSort(v, n);

    cout << "\nvector dupa sortare: \n";
    printArray(v, n);

    return 0;
}