#include <iostream>

using namespace std;

void Merge(int *a, int low, int high, int mid)
{
    int i,j,k,temp[high-low+1];
    i=low;
    k=0;
    j=mid+1;


    while (i<=mid && j<=high)
    {
        if (a[i] < a[j])
        {
            temp[k]=a[i];
            k++;
            i++;
        }
        else
        {
            temp[k]=a[i];
            k++;
            j++;
        }
    }

    while (i<=mid)
    {
        temp[k]=a[i];
        k++;
        i++;
    }

    while (j<=high)
    {
        temp[k]=a[j];
        k++;
        j++;
    }

    for (i=low;i<=high;i++)
        a[i]=temp[i-low];
}


void MergeSort(int *a, int low, int high)
{
    int mid;
    if (low<high)
    {
        mid=low+(high-low)/2;

        MergeSort(a,low,mid);
        MergeSort(a,mid+1,high);

        Merge(a,low,high,mid);
    }
}

int main()
{
    int n,i;
    cout<<"Introduceti numarul de elemente ce doriti a fi sortate: ";
    cin>>n;

    int arr[n];
    for (i=0;i<n;i++)
    {
        cout<<"Elementul "<<i+1<<" este: ";
        cin>>arr[i];
    }
    MergeSort(arr,0,n-1);

    cout<<"Vectorul sortat este: ";
    for (i=0;i<n;i++)
        cout<<"->"<<arr[i];

    return 0;
}
