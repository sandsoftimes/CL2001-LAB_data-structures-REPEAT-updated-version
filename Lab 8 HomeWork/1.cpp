#include<iostream>

using namespace std;

class Node{
    public:
    int data;
    Node*next;
    Node(int data){
        this->data=data;
        next=NULL;
    }
};

class Queued{
    private:
    Node*front,*rear;
    int length;
    public:
    Queued(){
        front=rear=NULL;
        length=0;
    }
    void Enqueue(int valve){
        Node*n=new Node(valve);
        if(front==NULL){
            cout<<"Queue is Empty right now, u can insert elements: "<<endl;
            front=rear=n;
        }
        else{
            rear->next=n;
            rear=n;
        }
    }
    int Dequeue(){
        if(front!=NULL){
        Node*t=front;
        front=front->next;
        cout<<"The value stored in the Node was: ";
        if(t->data!=0){
        return t->data;}
        }
    }
    bool isEmpty(){
        if(front==NULL){
            return true;
        }
    }
    bool isFull(){
        if(front==rear){
            return true;
        }
    }
};

int main(){
    Queued obj1;
    obj1.Enqueue(25);
    obj1.Enqueue(28);
    obj1.Enqueue(28);
    obj1.Enqueue(25);
    cout<<obj1.Dequeue()<<endl;
    cout<<obj1.Dequeue()<<endl;
    cout<<obj1.Dequeue()<<endl;
    cout<<obj1.Dequeue()<<endl;
    if(obj1.isEmpty()){
        cout<<"The Queue is Empty: ";
    }
    cout<<"\n";
    /*
    if(obj1.isFull()){
        cout<<"The Queue is Full: ";
    }
    */
}