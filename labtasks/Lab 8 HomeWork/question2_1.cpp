#include<iostream>
using namespace std; 
class Queue{
    private:
    int*arr;
    int front,rear;
    int size;
    public:
    Queue(int sized){
        size=sized;
        arr=new int[size];
        front=rear=-1;
    }
    void Enqueue(int valve){
        if(rear<size){
            rear++;
            arr[rear]=valve;
            return;
        }
        if(rear==size){
            rear=front;
            arr[rear]=valve;
            return;
        }
    }
    int Dequeue(){
        int typed;
        typed=arr[front];
        front++;
        return typed;
    }
    int Top(){
        return arr[rear];
    }
    bool isFull(){
        if(rear==size){
            return true;
        }
        return false;
    }
    bool isEmpty(){
        if(rear==front){
            return true;
        }
        return false;
    }
    bool onlineCheck(){
        char check;
        cout<<"Enter the button for stroke confirmation: \n";
        cout<<"Press Y or y to activate: \n";
        cin>>check;
        if(check=='y'||check=='Y'){
            return true;
        }
        return false;
    }
    void messageBuffer(int valve){
        for(int i=0;i<size;i++){
        Enqueue(valve);}
    }
    void Buffed(){
        if(onlineCheck()==true){
            int x1=Dequeue();
            int x2=Dequeue();
            int x3=Dequeue();
            cout<<"First Message Recieved Is: "<<x1<<endl;
            cout<<"Second Message Recieved Is: "<<x2<<endl;
            cout<<"Third Message Recieved Is: "<<x3<<endl;
            return;
        }
        cout<<"The User Is Offline At The Moment";
    }
    void infixToPost(char valve[],int size){
        char point;
        for(int i=0;i<size;i++){
            if(valve[i]=='+'||valve[i]=='-'||valve[i]=='/'||valve[i]=='*'){
                point=valve[i];
            }
            if(isdigit(valve[i])){
                Enqueue(valve[i]);
            }
        }
    }
};
int main(){
    char bag[30]={'a','+','b','*','(','c','^','d','-','e',')','^','(','f','+','g','*','h',')','-','I'};
    int size=sizeof(bag)/sizeof(bag[0]);
    cout<<size<<endl;
    for(int i=0;i<30;i++){
        cout<<bag[i];
    }
    cout<<'\n';
}