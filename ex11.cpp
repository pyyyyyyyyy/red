#include <iostream>
using namespace std;
#include <cmath>
#include <iomanip>

int A1(int a[],int n){
    int i,sum=0;
    for(i=0;i<n;i++){
        if(a[i]%10==0)
            sum+=a[i];
    }
    return sum;
}

int A2(int a[],int n){
    int i,sum=0,k=0,num=0;
    for(i=0;i<n;i++){
        if(a[i]%5==1){
            sum+=pow(-1,k++)*a[i];
            num++;
        }
    }
    if(sum)
        return sum;
    else
        return -1;
}

int A3(int a[],int n){
    int num=0,i;
    for(i=0;i<n;i++){
        if(a[i]%5==2)
            num++;
    }
    return num;
}

double A4(int a[],int n){
    double ave;
    int sum=0,i,num=0;
    for(i=0;i<n;i++){
        if(a[i]%5==3){
            sum+=a[i];
            num++;
        }
    }
    if(sum!=0) {
        ave = double(sum) / num;
        return ave;
    }
    else
        return -1;
}

int A5(int a[],int n){
    int max=0,i;
    for(i=0;i<n;i++){
        if(a[i]%5==4){
            if(max<a[i])
                max=a[i];
        }
    }
    return max;
}


int main(){
    int n,a[1000],i;
    cin>>n;
    for(i=0;i<n;i++)
        cin>>a[i];
    int a1=A1(a,n);
    int a2=A2(a,n);
    int a3=A3(a,n);
    double a4=A4(a,n);
    int a5=A5(a,n);
    if(a1==0)
        cout<<"N ";
    else
        cout<<a1<<" ";
    if(a2==-1)
        cout<<"N ";
    else
        cout<<a2<<" ";
    if(a3==0)
        cout<<"N ";
    else
        cout<<a3<<" ";
    if(a4==-1)
        cout<<"N ";
    else
        cout<<fixed<<setprecision(1)<<a4<<" ";
    if(a5==0)
        cout<<"N";
    else
        cout<<a5;
}