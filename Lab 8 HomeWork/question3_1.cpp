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
};
int main(){
    Queue s1(20);
    s1.Enqueue(5);
    s1.Enqueue(6);
    s1.Enqueue(6);
    s1.Enqueue(6);
    s1.Enqueue(6);
    s1.Enqueue(6);
    s1.Enqueue(6);
    s1.Enqueue(6);
    s1.Enqueue(6);
    s1.Enqueue(6);
    s1.Enqueue(6);
    s1.Enqueue(6);
    s1.Dequeue();
    //int x1=s1.Dequeue();
    //int x2=s1.Dequeue();
    //int x3=s1.Dequeue();
    //int x4=s1.Dequeue();
    //int x5=s1.Dequeue();
    //cout<<x1<<'\n';
    //cout<<x2<<'\n';
    //cout<<x3<<'\n';
    //cout<<x4<<'\n';
    //cout<<x5<<'\n';
    //cout<<s1.Top();
    if(s1.isFull()){
        cout<<"Queue is FULL ";
    }
    if(s1.isEmpty()){
        cout<<"Queue is Empty ";
    }
    s1.Buffed();
}