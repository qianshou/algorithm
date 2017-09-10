/**
* 丑树是指只包含因子2,3,5的树
* 丑树从1开始，依次为1,2,3,4,5,6,8,9,10,12,15,16,18
* 判断丑树的方式是分别除尽所有的2,3,5因子
* 然后判断剩余数字是否为1
* 一般解法是计算从1到N的所有丑数，并输出第N个
/
#include <iostream>
using namespace std;
bool uglyNum(int num){
    if(num == 0){
        return false;
    }
    while (num%2 == 0){
        num /= 2;
    }
    while (num%3 == 0){
        num /= 3;
    }
    while (num%5 == 0){
        num /= 5;
    }
    bool ret = num==1;
    return ret;
}
int main(){
    int n;
    while (cin>>n){
        int count = 0;
        int cur = 1;
        while(count<n){
            if(uglyNum(cur++)){
                count++;
            }
        }
        cur--;
        cout<<cur<<endl;
    }
}
