#include<iostream>
using namespace std;

float niudun(int number,float cnu){
    return (number - cnu*cnu)/(2*cnu)+cnu;
}

int main(){
    int num;
    cin >> num;
        int flag = 1;
        float test = num/2;
        while(flag){
            test = niudun(num,test);
            int test1 = test;
            if(test1*test1 == num){
                flag = 0;
                cout << test1 << endl;
            }
            else if((test1+1)*(test1+1) == num){
                flag = 0;
                cout << test1+1 << endl;
            }
            else if((test1-1)*(test1-1) == num){
                flag = 0;
                cout << test1-1 << endl;
            }
        }
    return 0;
}
