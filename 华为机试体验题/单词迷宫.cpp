#include<iostream>
#include<cstdio>
#include<string.h>
using namespace std;

char str[21][21];
char word[100];
int a,b;

//�����ַ�
int findstr(char c,int sa,int sb){
    if(sa-1>=0&&str[sa-1][sb]==c) return 1;//��
    if(sa+1<a&&str[sa+1][sb]==c) return 2;//��
    if(sb-1>=0&&str[sa][sb-1]==c) return 3;//��
    if(sb+1<b&&str[sa][sb+1]==c) return 4;//��
    return 0;
}

int main(){
    int answer=0;
    //freopen("in.txt","r",stdin);
    cin >> a >> b;
    cin >> word;
    for(int i=0;i<a;i++){
        for(int j=0;j<b;j++){
            cin >> str[i][j];
        }
    }
    //ѭ������
    for(int i=0;i<a;i++){
        for(int j=0;j<b;j++){
            if(str[i][j]==word[0]){//���������һ���ַ�
                for(unsigned int flag=1;flag<strlen(word);flag++){
                    int cas = findstr(word[flag],i,j);
                    switch(cas){
                        case 1:i--;break;
                        case 2:i++;break;
                        case 3:j--;break;
                        case 4:j++;break;
                        default:flag=strlen(word);
                    }
                    if(flag==strlen(word)-1){
                        answer = 1;
                        cout << "YES" << endl;
                    }
                }
            }
        }
    }
    if(!answer)
        cout << "NO" << endl;
    return 0;
}
