#include <iostream>
#include <string>
using namespace std;
int main(){
    int length;
    string str;
    getline(cin,str);
    length=str.length();
    int p=length,k,i;
    for(i=length-1;i>=0;i--){
        if(str[i]==' '){        //利用空格进行切分
            for(k=i+1;k<p;k++)
                cout<<str[k];
            cout<<" ";
            p=i;
        }
    }
    for(i=0;i<p;i++)
        cout<<str[i];
}