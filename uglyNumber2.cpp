/**
 * 丑树是指只包含因子2,3,5的树
 * 丑树从1开始，依次为1,2,3,4,5,6,8,9,10,12,15,16,18
 * 优化的解法是主动生成丑数，然后保存，而不是逐个数字判断
 * 丑树需要逐个生成，并保证有序性
 * 对于已有数列，分别乘以因子2,3,5得到接下来的丑数
 * 通过指针保存乘以2大于当前最大值的位置，通过该位置生成可能的下一个数字
 * 对于3和5也保存相应的指针
*/
#include <iostream>
using namespace std;
int getUgly(int num){
    if(num == 0){
        return 0;
    }
}
int main(){
    int n;
    while (cin>>n){
        int ugly = getUgly(n);
        cout<<ugly<<endl;
    }
}
