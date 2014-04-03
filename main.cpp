#include <iostream>
#include "FloydWarshall.cpp"

using namespace std;

const int maxV=1000;
int GR[maxV][maxV];

int main() {
int n;

cout<<"Количество вершин в графе > "; cin>>n;

cout<<"Введите матрицу весов ребер:\n";
for (int rows=0; rows<n; rows++)
for (int cols=0; cols<n; cols++) {
cout<<"GR["<<rows+1<<"]["<<cols+1<<"] > ";
cin>>GR[rows][cols];
}
cout<<endl;

cout<<"Матрица кратчайших путей:"<<endl<<endl;
FU(GR, n);

}
