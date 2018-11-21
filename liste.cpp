#include <iostream>

using namespace std;

int main()
{
    int n, i, j, z,*c, *v,*y, u=0, aux, k;
    cout<< "Nr. Liste:";cin>>n;
    v=new int[n];
    c=new int[z];
    y=new int[u];

    for (i=0; i<n; i++)
    {
       cout<< "Nr. elemente din lista "<<i<<" este:";cin>>v[i];
        for(z=0; z<v[i]; z++)
        {
            cout<<"Elementul"<<z<< " - Lista "<<i<<" :";cin>>c[z];
            y[u]=c[z];
            u++;
        }
    }


  for (z=0;z<i;z++)
    for(j=z+1;j<i;j++)
{
    if(y[z]>y[j])
    {
        aux=y[z];
        y[z]=y[j];
        y[j]=aux;
    }
}

for (i=0; i<n; i++)
  for(u=0;u<v[i];u++)
    {
    cout<<y[u]<<endl;
    }
    delete[] v;
    delete[] c;
    return 0;
}
