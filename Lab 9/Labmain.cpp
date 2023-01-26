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
    int defination(){
        int var1=DequeueLastBackup();
        int var2=DequeueLastBackup();
        int var3=DequeueLastBackup();
        for(int i=0;i<var1;i++){
            Enqueue(var1);
        }
        for(int i=0;i<var2;i++){
            Enqueue(var2);
        }
        for(int i=0;i<var3;i++){
            Enqueue(var3);
        }
        return 0;
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
        if(front==NULL)
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
    int DequeueBackup(){
        if(isEmpty()){
            cout<<"Queue Underflows";
            return 0;
        }
        Node*vamp;
        vamp=front;
        front=front->next;
        cout<<vamp->data;
        return vamp->data;
    }
    int DequeueLastBackup(){
        if(isEmpty()){
            cout<<"Queue Underflows";
            return 0;
        }
        Node*vamp,*vent;
        vamp=front;
        front=front->next;
        cout<<vamp->data;
        return vamp->data;
    }
    void Duplicate(){
        int var1=DequeueMana();
        int var2=DequeueMana();
        int var3=DequeueMana();
        for(int i=0;i<var1;i++){
            Enqueue(var1);
        }
        for(int i=0;i<var2;i++){
            Enqueue(var2);
        }
        for(int i=0;i<var3;i++){
            Enqueue(var3);
        }
    }
    int DequeueMana(){
        if(isEmpty()){
            cout<<"Queue Underflows";
            return 0;
        }
        Node*vamp;
        int mango;
        vamp=front;
        front=front->next;
        //cout<<vamp->data;
        mango=vamp->data;
        delete vamp;
        return mango;
    }
};
int main(){
    QueueL obj1;
    obj1.Enqueue(3);
    obj1.Enqueue(4);
    obj1.Enqueue(5);
    obj1.Duplicate();
    //obj1.Dequeue();
    //obj1.Dequeue();
    //obj1.defination();
    //int var1=obj1.DequeueMana();
    //int var2=obj1.DequeueMana();
    //obj1.Dequeue();
    //obj1.DequeueMana();
    //obj1.Dequeue();
    //int var1=obj1.DequeueBackup();
    //int var2=obj1.DequeueBackup();
    //int var3=obj1.DequeueBackup();
    //cout<<var1<<var2;
}