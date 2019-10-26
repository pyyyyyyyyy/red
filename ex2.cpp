#include<iostream>
using namespace std;

int check(char *p){
    int i=0;int num_P=0,num_T=0,num_aa=0,length=0,p_pos=0,t_pos=0,num_A=0;
    while(*(p+i)!='\0'){
        if(*(p+i)!='P'&&*(p+i)!='A'&&*(p+i)!='T')
            return 0;
        else if(*(p+i)=='P'){
            num_P++;
            p_pos=i;
        }
        else if(*(p+i)=='T'){
            num_T++;
            t_pos=i;
        }
        else if(*(p+i)=='A')
            num_A++;
        i++;
        length++;
    }
    if(num_P!=1||num_T!=1||num_A==0)
        return 0;
    char*q=p;
    while(*q!='\0'){
        if(*q!='P')
            q++;
        else{
            int num=0;
            char *r=p;
            for(;r!=q;r++){
                if(*r=='A')
                    num++;
                else
                    return 0;
            }
            if(*(r+1)=='A' &&*(r+2)=='T'){
                r=r+3;
                while(*r!='\0'){
                    num--;r++;
                }
                if(num==0)
                    return 1;
            } else
            {i=0;
            r=r+1;
            while(*(r+i)!='T'){
                num_aa++;
                i++;
            }
            if(num_aa*p_pos==(length-t_pos-1))
                return 1;
            else
                return 0;
            }
        }
    }
    return 0;
}

int main(){
    char p[10][50];
    int n,i,flag;
    cin>>n;
    for(i=0;i<n;i++){
        cin>>p[i];
    }
    for(i=0;i<n;i++){
        flag=check(p[i]);
        if(flag)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
}