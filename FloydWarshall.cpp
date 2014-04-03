using namespace std;
const int MAXV=1000;

void FU(int D[][MAXV], int V) {
int k, i, j;
for (i=0; i<V; i++) D[i][i]=0;

for (k=0; k<V; k++)
    for (i=0; i<V; i++)
        for (j=0; j<V; j++)
            if (D[i][k] && D[k][j] && i!=j)
                if (D[i][k]+D[k][j]<D[i][j] || D[i][j]==0)
                    D[i][j]=D[i][k]+D[k][j];

for (i=0; i<V; i++) {
    cout<<"\t"<<"x"<<i+1;
}
cout<<endl;

for (i=0; i<V; i++) {
    cout<<"x"<<i+1<<"\t";
    for (j=0; j<V; j++)
    cout<<D[i][j]<<"\t";
    cout<<endl;
}
}
