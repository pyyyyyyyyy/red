#include <iostream>
using namespace std;
int main(){
    int n,t,i,j;
    cin>>n;
    cin>>t;
    int a[100];
    for(i=0;i<n;i++)
        cin>>a[i];
    int m;
    for(i=0;i<t;i++){
        m=a[n-1];
        for(j=n-1;j>0;j--){
            a[j]=a[j-1];
        }
        a[0]=m;
    }
    for(i=0;i<n-1;i++)
        cout<<a[i]<<" ";
    cout<<a[i];
}
