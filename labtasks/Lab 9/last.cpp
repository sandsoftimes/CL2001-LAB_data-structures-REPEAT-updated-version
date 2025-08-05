#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node*next;
    Node(int valve){
        data=valve;
        next=NULL;
    }
};
class QueueL{
    private:
    Node*head;
    Node*front;
    Node*rear;
    int length;
    public:
    QueueL(){
        head=NULL;
        length=0;
    }
    bool isFull(){
        if(head==NULL){
            return true;
        }
    }
    void Enqueue(int vault){
        /*if(isFull()){
            cout<<"Queue overflows"<<endl;
            return 0;
        }*/
        Node *n=new Node(vault);
        if(head==NULL){
            head=n;
            front=head;
            rear=head;
        }
        else{
            rear->next=n;
            rear=n;
        }
    }
    bool isEmpty(){
        if(head==NULL)
        return true;
        else
        return false;
    }
    void Dequeue(){
        if(isEmpty()){
            cout<<"Queue Underflows";
            return;
        }
        Node*vamp;
        vamp=front;
        front=front->next;
        cout<<vamp->data;
        delete vamp;
    }
};
int main(){
    QueueL obj1,obj2;
    obj1.Enqueue(2);
    obj1.Enqueue(4);
    obj1.Dequeue();
    obj1.Dequeue();
    int i;
    while(i!=-1){
        int vamp1;int vamp2;
        cout<<"Enter the first value: ";
        cin>>vamp1;
        if(vamp1==-1){
            break;
        }
        cout<<"Enter the second value: ";
        cin>>vamp2;
        if(vamp2==-1){
            break;
        }
        obj2.Enqueue(vamp1);
        obj2.Enqueue(vamp2);
        cout<<"Hello";
    }
    obj2.Dequeue();

}