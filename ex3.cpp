#include <iostream>
using namespace std;

int main(){
    int n,max,min;
    int i,j;
    char name[30000][10];
    int grade[10000];
    cin>>n;
    if(n>10000)
        return 1;
    for(i=0;i<3*n;i++) {
        cin>>name[i];
    }
    for(i=2,j=0;i<3*n;i+=3,j++)
        grade[j]=atoi(name[i]);
    min=max=0;
    for(i=0;i<n;i++){
        if(grade[i]<grade[min])
            min=i;
        if(grade[i]>grade[max])
            max=i;
    }
    cout<<name[(max*3)]<<" "<<name[(max*3+1)]<<endl;
    cout<<name[(min*3)]<<" "<<name[(min*3+1)]<<endl;
}