#include<iostream>
int main()
{
    using namespace std;

    int n, m;
    cin>>n>>m;
    int ar[n][m];
    for(int i=0; i<n; i++)
    {
        for(int j= 0; j<m; j++)
        {
            cin>>ar[i][j];
        }
    }
    for(int i=0; i<n; i++){
        for(int j=i; j<m; j++){

    int temp;
    temp=ar[i][j];
    ar[i][j]=ar[j][i];
    ar[j][i]=temp;
        }
    }
    

    for(int i =0;i<n; i++)
    {
        for(int j=0; j<m; j++)
        {
            cout<<ar[i][j]<<" ";
        }
        cout<<endl;
    }

    return 0;

}