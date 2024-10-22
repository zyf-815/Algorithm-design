//第二大的数
/* 输入不定长数组：
    std::istream_iterator<int> it(std::cin);
    while (it != std::istream_iterator<int>() && (num = *it++) != EOF) {
        vec.push_back(num);
    }
*/
#include<iostream>
#include<vector>
using namespace std;
int main(){
    int num=0;
    cin >> num;
    while(num-->0){
        int n=0;
        cin >> n;
        vector<int> vec(n,0);
        int max=INT16_MIN , next=INT16_MIN;
        for(int i=0;i<n;i++){
            cin >> vec[i];
            if(vec[i]>max){
                next = max;
                max = vec[i];
            }else if(vec[i]>next){
                next = vec[i];
            }
        }
        cout << next <<endl;
    }
}