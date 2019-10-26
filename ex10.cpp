#include <iostream>
#include<string>
using namespace std;
struct data{
    long int A;
    long int B;
    long int C;
    char *flag;
};

int main(){
    int num,i;
    struct data test[100];
    cin>>num;
    for(i=0;i<num;i++){
        cin>>test[i].A;
        cin>>test[i].B;
        cin>>test[i].C;
        if((test[i].A+test[i].B)>test[i].C)
            test[i].flag="true";
        else
            test[i].flag="false";
    }
    for(i=0;i<num;i++){
        cout<<"Case #"<<i+1<<": "<<test[i].flag<<endl;
    }
}