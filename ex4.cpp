#include<iostream>
using namespace std;
const int test=100;
void get_check(int n,int a[test]){
    int i=1;
    a[0]=n;
    if(n>0 && n<1000){
        while(n!=1){
            if(n%2==0){
                n=n/2;
                a[i++]=n;
            }
            else{
                n=(3*n+1)/2;
                a[i++]=n;
            }
        }
    }
    else
        cout<<"again;"<<endl;
}

int main(){
    int num,a[test][test]={0},i,j,k,m=0;
    int input[test],result[test];
    int max,t;
    cin>>num;
    for(i=0;i<num;i++){
        cin>>input[i];
        get_check(input[i],a[i]);
    }
    int flag;
    //for(i=0;i<num;i++){
        //for(j=0;a[i][j]!=0;j++)
            //cout<<a[i][j]<<" ";
        //cout<<endl;
    //}
    for(i=0;i<num;i++){
        flag=1;
        for(j=0;j<num;j++){
            for(k=0;a[j][k]!=0;k++){
                if(i==j)
                    break;
                else if(a[j][k]==input[i]){
                    flag=0;
                    break;
                }
            }
            if(!flag)
                break;
        }
        if(flag)
            result[m++]=input[i];
    }
    //cout<<"result:"<<endl;
    for(i=0;i<m-1;i++){
        max=i;
        for(j=i;j<m;j++){
            if(result[j]>result[max])
                max=j;
        }
        t=result[max];
        result[max]=result[i];
        result[i]=t;
    }
    for(i=0;i<m;i++)
        cout<<result[i]<<" ";
    cout<<"\b";
}