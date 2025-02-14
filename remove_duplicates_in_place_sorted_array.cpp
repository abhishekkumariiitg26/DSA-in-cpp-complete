//  Brute Force

#include<iostream>
#include<set>
#include<vector>
using namespace std;
int main(){
    vector<int> vec={1,1,2,2,2,3,3};
    set<int> st;
    for(int i=0;i<vec.size();i++){
        st.insert(vec[i]);
    }
    int index=0;
    for(auto it: st){
        vec[index]=it;
        index++;
    }
    for(int it: st){
        cout<<it<<" ";
    }
    return 0;
}