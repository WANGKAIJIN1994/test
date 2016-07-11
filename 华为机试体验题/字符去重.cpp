#include <iostream>
#include <string>
using namespace std;

string word[100] = {"END"};
string test;

int isexit(string wo){
    int is = 0;
    for(int i=0;i<100;i++){
        if(wo == word[i]){
            is = 1;
        }
    }
    return is;
}

int main(){
    char flag;
    int num = 0;
    while(cin >> test){
        if((test[test.length()-1] == ',')||(test[test.length()-1] == '.')){
            string test1 = "";
            for(int j=0;j<test.length()-1;j++){
                test1 += test[j];
            }
            test = test1;
        }
        if(0 == isexit(test)){
            word[num] = test;
            num++;
        }
        cin.get(flag);
        if(flag == '\n')
            break;
    }
    for(int i=0;i<100;i++){
        cout << word[i] << " ";
        if(word[i+1] == "END")
            break;
    }
    cout << endl;
    return 0;
}
