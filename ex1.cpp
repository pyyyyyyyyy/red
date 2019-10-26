#include<iostream>
using namespace std;

int get(long int x) {
    int sum = 0, i = 0, div = 1, remainder = 10, j = 0;
    while ((x / div)) {
        i = x % remainder;
        j = i / div;
        sum += j;
        div = div * 10;
        remainder = remainder * 10;
    }
    return sum;
}

void spell(long int x) {
    int i = 0, div = 1, remainder = 10, j = 0, k = 0;
    int a[1000] = {-1};
    while ((x / div)) {
        i = x % remainder;
        j = i / div;
        a[k] = j;
        k++;
        div = div * 10;
        remainder = remainder * 10;
    }
    for (i = k - 1; i >= 0; i--) {
        switch (a[i]) {
            case 0:
                cout << "ling ";
                break;
            case 1:
                cout << "yi ";
                break;
            case 2:
                cout << "er ";
                break;
            case 3:
                cout << "san ";
                break;
            case 4:
                cout << "si ";
                break;
            case 5:
                cout << "wu ";
                break;
            case 6:
                cout << "liu ";
                break;
            case 7:
                cout << "qi ";
                break;
            case 8:
                cout << "ba ";
                break;
            case 9:
                cout << "jiu ";
                break;
        }
    }
    cout << "\b";
}

int main() {
    long int x, result;
    cin >> x;
    result = get(x);
    cout<<result;
    spell(result);

}

//读入一个正整数 n，计算其各位数字之和，用汉语拼音写出和的每一位数字。