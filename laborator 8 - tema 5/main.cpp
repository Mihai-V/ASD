#include <iostream>

using namespace std;

int crescator(int *a)
{
    int i=0;
    while (a[i]<=a[i+1])
        i++;
    return i;
}

int descrescator(int *a)
{
    int i=0;
    while (a[i]>=a[i+1])
        i++;
    return i;
}

void Interclasare_inceput_crescator(int *a,int n,int schimbare_sens)
{
    int i=0,j,k=0,temp[n];
    j=n;
    while (i<=schimbare_sens && j>=schimbare_sens)
        if (a[i]<=a[j])
        {
            temp[k]=a[i];
            k++;
            i++;
        }
        else
        {
            temp[k]=a[j];
            j--;
            k++;
        }
    while (i<=schimbare_sens)
    {
        temp[k]=a[i];
        i++;
        k++;
    }
    while (j>=schimbare_sens)
    {
        temp[k]=a[j];
        j--;
        k++;
    }
    for (i=0; i<n; i++)
        a[i]=temp[i];

}

void Interclasare_inceput_descrescator(int *a,int n,int schimbare_sens)
{
    int i=schimbare_sens,j=schimbare_sens+1,k=0,temp[n];
    while (i>=0 && j<=n)
        if (a[i]<=a[j])
        {
            temp[k]=a[i];
            k++;
            i--;
        }
        else
        {
            temp[k]=a[j];
            j++;
            k++;
        }
    while (i>=0)
    {
        temp[k]=a[i];
        i--;
        k++;
    }
    while (j<=n)
    {
        temp[k]=a[j];
        j++;
        k++;
    }
    for (i=0; i<n; i++)
        a[i]=temp[i];

}

int main()
{
    int *arr,n,i;
    cout<<"Numarul de elemente pe care le are vectorul este: ";
    cin>>n;
    for ( i=0; i<n; i++)
    {
        cout<<"Elementul "<<i+1<<" al vectorului este:";
        cin>>arr[i];
    }

    int schimbare_sens;
    if (arr[0]<arr[1])
    {
        schimbare_sens=crescator(arr);
        cout<<"Vectorul sortat este: ";
        Interclasare_inceput_crescator(arr,n,schimbare_sens);
        // for (i=0;i<n;i++)
        cout<<arr[i]<<' ';
    }
    else
    {
        schimbare_sens=descrescator(arr);
        cout<<"Vectorul sortat este: ";
        Interclasare_inceput_descrescator(arr,n,schimbare_sens);
        //for (int i=0;i<n;i++)
        cout<<arr[i]<<' ';
    }

    return 0;
}
