#include<iostream>
#include<string>
using namespace std;

bool is_palindrome(string str, int l , int r){
    if(l>=r){
        return true;
    }
    if(str[l]!=str[r]){
        return false;
    }
   
    return is_palindrome(str,l+1,r-1);

}

int main(){
    string str="abcba";
    if(is_palindrome(str,0,str.size()-1)){
        cout<<"Palindrome";
    }
    else{
        cout<<"not palindrome";
    }
    return 0;
}