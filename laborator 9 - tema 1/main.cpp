#include <iostream>
#include <time.h>
#include <cstdlib>

using namespace std;

int partition(int v[], int low, int high)
{
    int pivot = v[high];
    int i = (low - 1);

    for (int j = low; j <= high - 1; j++)
    {
        if (v[j] <= pivot)
        {
            i++;
            swap(v[i], v[j]);
        }
    }
    swap(v[i + 1], v[high]);
    return (i + 1);
}


int partition_r(int v[], int low, int high)
{
    srand(time(NULL));
    int random = low + rand() % (high - low);
    swap(v[random], v[high]);
    return partition(v, low, high);
}

void quickSort(int v[], int low, int high)
{
    if (low < high)
    {
        int pi = partition_r(v, low, high);
        quickSort(v, low, pi - 1);
        quickSort(v, pi + 1, high);
    }
}

void printArray(int v[], int size)
{
    int i;
    for (i = 0; i < size; i++)
        printf("%d ", v[i]);
    printf("\n");
}

int main()
{
    int v[] = { 10, 7, 8, 9, 1, 5 };
    int n = sizeof(v) / sizeof(v[0]);
    quickSort(v, 0, n - 1);
    printf("vector sortat: \n");
    printArray(v, n);
    return 0;
}