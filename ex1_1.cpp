#include<iostream>
#include<cstdlib>
using namespace std;

int main(){
    char p[1000];
    cin>>p;
    int i,sum=0;
    for(i=0;p[i]!='\0';i++){
        sum+=p[i]-48;
    }
    int div=1,remainder=10,j=0,k=0,a[1000];
    while((sum/div)){
        i=sum%remainder;
        j=i/div;
        a[k]=j;
        k++;
        div=div*10;
        remainder=remainder*10;
    }
    for(i=k-1;i>0;i--){
        switch(a[i]){
            case 0:
                cout<<"ling ";
                break;
            case 1:
                cout<<"yi ";
                break;
            case 2:
                cout<<"er ";
                break;
            case 3:
                cout<<"san ";
                break;
            case 4:
                cout<<"si ";
                break;
            case 5:
                cout<<"wu ";
                break;
            case 6:
                cout<<"liu ";
                break;
            case 7:
                cout<<"qi ";
                break;
            case 8:
                cout <<"ba ";
                break;
            case 9:
                cout<<"jiu ";
                break;
        }
    }
    switch(a[0]){
        case 0:
            cout<<"ling";
            break;
        case 1:
            cout<<"yi";
            break;
        case 2:
            cout<<"er";
            break;
        case 3:
            cout<<"san";
            break;
        case 4:
            cout<<"si";
            break;
        case 5:
            cout<<"wu";
            break;
        case 6:
            cout<<"liu";
            break;
        case 7:
            cout<<"qi";
            break;
        case 8:
            cout <<"ba";
            break;
        case 9:
            cout<<"jiu";
            break;
    }
}