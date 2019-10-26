#include<iostream>
using namespace std;
int main(){
    int n,num=0;
    cin>>n;
    if(n>0 && n<1000){
        while(n!=1){
            if(n%2==0){
                n=n/2;num++;
            }
            else{
                n=(3*n+1)/2;num++;
            }
        }
        num++;
        cout<<num;
    }
    else
        cout<<"again;"<<endl;
}