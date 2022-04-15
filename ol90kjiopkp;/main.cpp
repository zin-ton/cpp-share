#include <iostream>
#include <stdlib.h>
#include <algorithm>
#include <math.h>


using namespace std;

int main()
{
    int i,n,max;
    cin>>n;
    int mas[n];
    for (i=0; i<n; i++)
    {
        cin>>mas[i];
    }
    max = mas[0];
    for (i=0; i<n; i++)
    {
        if (mas[i]>max)
            max=mas[i];
    }
    cout<<i;
    return 0;
}
