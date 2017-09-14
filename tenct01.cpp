/**
 * 输入a,b,A,B
 * 每次对a,b进行乘以2或者加1操作
 * 求出最少的步数，由a,b得到A,B，若不能得到则输出-1
 */
#include <iostream>
#include <algorithm>
#define MAX_STEP 10000
using namespace std;
int getMinSteps(int a,int b,int A,int B){
    if(a==A && b==B){
        return 0;
    }
    if(a>A || b>B){
        return MAX_STEP;
    }
    int step1 = getMinSteps(a+1,b+1,A,B)+1;
    int step2 = getMinSteps(a*2,b*2,A,B)+1;
    return min(step1,step2);
}
int main(){
    int a,b,A,B;
    while(cin>>a>>b>>A>>B){
        int steps = getMinSteps(a,b,A,B);
        if(steps>MAX_STEP){
            cout<<-1<<endl;
        }else{
            cout<<steps<<endl;
        }
    }
    return 0;
}
