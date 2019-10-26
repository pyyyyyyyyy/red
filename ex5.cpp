#include <iostream>
#include <cstdlib>
using namespace std;
int main(){
    int i;
    char p[30];
    int x,a,b,c,k,t;
    cin>>x;
    if(x/100!=0){
        a=x/100;
        b=(x%100)/10;
        c=(x%100)%10;
    }
    else if(x/10!=0){
        a=0;
        b=x/10;
        c=x%10;
    }
    else{
        a=b=0;
        c=x%10;
    }
    for(i=0;i<a;i++){
        *(p+(k++))='B';
    }
    for(i=0;i<b;i++){
        *(p+(k++))='S';
    }
    cout<<p;
    for(i=0;i<c;i++){
        cout<<i+1;
    }
}