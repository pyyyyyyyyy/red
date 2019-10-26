#include <iostream>
using namespace std;
int get_prime(long int x,int a[]){
    long int i,j,m=0,flag=0;
    for(i=2;i<=x;i++){
        flag=0;
        for(j=2;j<i;j++){
            if(i%j==0){
                flag=1;
                break;
            }
        }
        if(!flag)
            a[m++]=i;
    }
    //for(i=0;i<m;i++)
    //    cout<<a[i]<<" ";
    //cout<<endl;
    return m;
}

int find_spexial(long int num,int a[]){
    long int i,k=0;
    for(i=0;i<num-1;i++){
        if(a[i+1]-a[i]==2)
            k++;
    }
    return k;
}

int main(){
    long int x,num,k;
    int a[100000];
    cin>>x;
    num=get_prime(x,a);
    k=find_spexial(num,a);
    cout<<k;
}
