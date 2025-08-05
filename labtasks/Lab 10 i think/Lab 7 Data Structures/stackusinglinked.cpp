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
class Stack{
    private:
    Node*head;
    int length;
    public:
    Stack(){
        head=NULL;
        length=0;
    }
    void push(int vault){
        Node*n=new Node(vault);
            n->next=head;
            n->data = vault;
            head=n;
        }
    void pop(){
        Node*temp=head;
        cout<<head->data<<endl;
        head=head->next;
        delete temp;
    }
    void peek(){
        cout<<head->data;
    }
    void IsEmpty(){
        if(head==NULL){
            cout<<"Empty";
        }
        else{
            cout<<"It is not empty"<<endl;
        }
    }
    void display(){
        if(head==NULL){
            cout<<"Stack is empty";
        }
        else{
        Node*temp=head;
        while(temp!=NULL){
            cout<<temp->data<<endl;
            temp=temp->next;
        }
    }
    } 
};
int main(){
    Stack obj1;
    //obj1.push(5);
    //obj1.push(6);
    obj1.push(9);
    obj1.push(15);
    obj1.push(19);
    obj1.peek();
    cout<<endl;
    obj1.IsEmpty();
    obj1.display();
    obj1.pop();
    obj1.pop();
    //obj1.pop();
    //obj1.pop();
}