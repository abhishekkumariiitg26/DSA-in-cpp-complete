//  two pointer optimal

#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> vec={1,1,2,2,2,3,3};
  
   
    int index=0;
    for(int j=1;j<vec.size();j++){
        if(vec[index]!=vec[j]){
            vec[index+1]=vec[j];
            index++;
        }
    }
    cout<<index+1;
  
    return 0;
}