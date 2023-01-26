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
            length++;
        }
        else{
            rear->next=n;
            rear=n;
            length++;
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
    QueueL obj1;
    obj1.Enqueue(2);
    obj1.Enqueue(4);
    obj1.Dequeue();
    cout<<endl;
    obj1.Dequeue();
    cout<<endl;
}