//冒泡排序
#include<iostream>
#include <vector>
using namespace std;
int main(){
    int num=0;
    cin >> num;
    while(num-->0){
        int n=0;
        cin >> n;
        vector<int> vec(n,0);
        for(int i=0;i<n;i++) cin>>vec[i];
        for(int i=0;i<n-1;i++){
            if(vec[i]>vec[i+1]){
                swap(vec[i],vec[i+1]);
            }
        }
        for(auto temp: vec){
            cout<< temp << ' ';
        }
        cout<<endl;
    }
}