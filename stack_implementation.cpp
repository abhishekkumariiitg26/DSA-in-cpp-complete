#include<iostream>
using namespace std;

class Stack{
    public:
    int *arr;
    int size;
    int top;
    bool flag;
    Stack(int s){
        size=s;
        top=-1;
        arr=new int[s];
        flag=1;
    }

    void push(int value){
        if(top==size-1){
            cout<<"stack overflow"<<endl;
            return ;
        }
        else{

            top++;
            arr[top]=value;
            cout<<"pushed "<<value<<" in the stack."<<endl;
            flag=0;
        }
    }

    void pop(){
        if(top==-1){
            cout<<"stack underflow"<<endl;
            return ;
        }
        else{
            top--;
            cout<<"Popped "<<arr[top+1]<<" from the stack."<<endl;
            if(top==-1){
                flag=1;
            }
        }
    }


    int peek(){
        if(top==-1){
            cout<<"Stack is empty."<<endl;
            return -1 ;
        }
        else{

            return arr[top];
        }
    }


    bool isEmpty(){
        return top==-1;
    }

    int isSize(){
        return top+1;
    }
};

int main(){

    Stack s(5);
    // s.push(-1);
    int value=s.peek();
    if(s.flag==0){
        cout<<value<<endl;
    }
    return 0;
}