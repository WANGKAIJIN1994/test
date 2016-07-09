#include<iostream>
using namespace std;

int main(){
    int n,m;
    while(cin >> n >> m){
        int grade[n];
        for(int i=0;i<n;i++)
            cin >> grade[i];
        for(int j=0;j<m;j++){
            char c;int n1,n2,high;
            cin >> c >> n1 >> n2;
            if(c=='Q'){
                if(n2<n1){
                    int tem = n2;
                    n2 = n1;
                    n1 = tem;
                }
                high = grade[n1-1];
                for(int k=n1;k<n2;k++){
                    if(grade[k]>high)
                        high = grade[k];
                }
                cout << high << endl;
            }
            else if(c=='U'){
                grade[n1-1] = n2;
            }
        }
    }
    return 0;
}
