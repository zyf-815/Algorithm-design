// 统计每一行中数字的个数
#include<iostream>
#include<string>
using namespace std;
int main(int, char**){
    int n=0;
    cin >> n;
    cin.ignore();
    while(n-->0){
        string s;
        int res = 0;
        getline(cin, s);
        for(char c : s) {
            if(c>='0' && c<='9') res++;
        }
        cout<<res<<endl;
    }
}
