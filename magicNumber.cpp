/**
 * 神奇数字
 * 题目描述：
 *  一个数字中的数，分为两组。其中一组的和，等于另一组的和，成为神奇数字，例如242，143523
 * 解题思路：
 *  对数字进行拆分得到数组num，然后求和得到sum
 *  如果sum为奇数，则一定不是神奇数字
 *  如果sum为偶数，则除以2，得到target
 *  对num数组进行排序
 *  从后往前遍历num数组，找到不大于target的最大值
 *  判断是否等于target，不等于则target减去该值，继续向左查找
 */
#include <iostream>
#include <algorithm>
using namespace std;
bool isMagicNum(unsigned long n){
    int len=0,sum=0,target=0;
    int num[15];
    while(n>0){
        num[len++] = n%10;
        sum += n%10;
        n = n/10;
    }
    if(sum%2 == 1){
        return false;
    }
    target = sum/2;
    sort(num,num+len);
    int cur = 0;
    int k = len-1;
    while(k>=0){
        while(num[k]>target){
            k--;
        }
        if(num[k]==target){
            return true;
        }else{
            target -= num[k];
            k--;
        }
    }
    return false;
}
int main(){
    unsigned long left,right;
    int n = 235431;
    if(isMagicNum(n)){
        cout<<"magic number"<<endl;
    }else{
        cout<<"normal number"<<endl;
    }
    return 0;
}
