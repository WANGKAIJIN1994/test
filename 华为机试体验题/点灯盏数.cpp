#include<iostream>
using namespace std;
int childnumber(int);
int main(){
    int n,lighting=0;
    cin >> n;
    //int *number=new int(n);
    //ͳ��ÿ��������������
    for(int j=1;j<=n;j++){
       // number[j-1] = childnumber(j);
        if(childnumber(j)%2!=0) lighting++;
    }
    cout << lighting << endl;
    return 0;
}

//����һ��������������
int childnumber(int nu){
    int count=0;
    for(int i=1;i<=nu;i++){
        if(nu%i==0) count++;
    }
    return count;
}
