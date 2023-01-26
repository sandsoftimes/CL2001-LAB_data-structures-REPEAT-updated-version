#include<iostream>
using namespace std;
#define SIZE 100
class StackArr{
    private:
    int top;
    public:
    int arr[SIZE];
    StackArr(){
        top = -1;
        int arr[SIZE]; 
    }
    void pop(){
        if(top==-1){
            cout<<"Stack Underflows";
            return;
        }
        cout<<arr[top]<<endl;
        top--;
    }
    void push(int valve){
        if(top>SIZE){
            cout<<"Stack Overflows";
            return;
        }
        top++;
        arr[top]=valve;
    }
    void display(){
        for(int i=top;top>=0;i--){
            cout<<arr[top]<<endl;
            top--;
        }
    }
    int peek(){
        if(top==-1){
            cout<<"Stack is empty"<<endl;
            return 0;
        }
        return arr[top];
    }
    void isEmpty(){
        if(top==-1){
            cout<<"Stack is empty"<<endl;
        }
        return;
    }
};
int main(){
    StackArr obj1;
    //obj1.isEmpty();
    //obj1.display();
    //obj1.peek();
    //obj1.push(2);
    //cout<<obj1.peek();
    obj1.push(4);
    obj1.push(7);
    obj1.push(8);
    //obj1.display();
    obj1.pop();
    obj1.pop();
    cout<<obj1.peek()<<endl;
    //obj1.pop();
    //obj1.pop()
    obj1.isEmpty();
    obj1.display();
}