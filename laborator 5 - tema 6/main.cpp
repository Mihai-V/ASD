#include <iostream>
#include <fstream>

using namespace std;

ifstream f("matrice.txt");
ofstream g("matrice finala.txt");

void etichetare(int n, int a[100][100])
{
    int i,j,eticheta;
    for (i=1;i<=n;i++)
        for (j=1;j<=n;j++)
        {
            f>>eticheta;
            if(eticheta==1)
                a[i][j]=2;
            if(a[i][j]==1)
            {

            }
    dacă (ct[i][j]==-1)
    început
    q[l].st=i;
    q[l].dr=j;
    l++;
    sfârşit(dacă)
    sfârşit(for)
        }
    q1=l;
}
void matrice(int n, a[100][100])
{
    int i,j;
    for(i=0;i<n;i++)
    {
        for(j=1;j<n;j++)
            g<<a[i][j];
        g<<endl;
    }
}
int main()
{

    return 0;
}