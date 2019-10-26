#include <iostream>
#include <cstdio>
using namespace std;

struct data{
    int exp;
    int coef;
};
const int MAX=1000;

int main(){
    struct data input[MAX];
    int i,number;
    input[0].exp=0;
    for(i=0;i<MAX;i++){
        cin>>input[i].coef;
        cin>>input[i].exp;
        if(getchar()=='\n'){
            break;
        }
    }
    if(input[0].exp==0){
        cout<<"0 0";
        return 0;
    }
    number=i+1;
    for(i=0;i<number;i++){
        input[i].coef=input[i].coef*input[i].exp;
        input[i].exp-=1;
    }
    for(i=0;i<number-2;i++){
        cout<<input[i].coef;
        cout<<" ";
        cout<<input[i].exp;
        cout<<" ";
    }
    cout<<input[i].coef;
    cout<<" ";
    cout<<input[i].exp;
    if(input[number-1].coef!=0){
        cout<<" ";
        cout<<input[number-1].coef;
        cout<<" ";
        cout<<input[number-1].exp;
    }
}
