#include<iostream>
using namespace std;

int main(){
    int number[10];
    //读入10个数
    for(int i=0;i<10;i++){
        cin >> number[i];
    }
    //从大到小排序
    for(int j=0;j<10;j++){
        for(int x=9;x>j;x--){
            int tem;
            if(number[x]>number[x-1]){
                tem = number[x-1];
                number[x-1] = number[x];
                number[x] = tem;
            }
        }
    }
    //判断是否所有成绩都高于60
    if(number[9]>=60){
        cout << 60;
    }
    else{
        cout << int(number[5]/10)*10;
    }
    return 0;
}
