/*
 * 输入a和b，求a和b的最小公倍数
 * 最小公倍数 = a*b/最大公约数
 * 最大公约数通过辗转相除法获得
 */
#include <iostream>
#include <algorithm>
using namespace std;
int getMaxDivisor(int a,int b){
    int m = max(a,b);
    int n = min(a,b);
    int r;
    while((r=m%n)!=0){
        m = n;
        n = r;
    }
    return n;
}
int main(){
    int a,b;
    while (cin>>a>>b){
        int maxDivisor = getMaxDivisor(a,b);
        int minMultiple = a*b/maxDivisor;
        cout<<"maxDivisor:"<<maxDivisor<<endl;
        cout<<"minMultiple:"<<minMultiple<<endl;
    }
    return 0;
}
