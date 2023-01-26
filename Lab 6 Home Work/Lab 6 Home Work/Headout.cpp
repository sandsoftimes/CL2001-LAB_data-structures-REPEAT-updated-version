#include<iostream>
using namespace std;
    void End(){
        
        Node*backward;
        
        Node*mild=head;
        
        while(mild->next!=NULL){
        
            backward=mild;
        
            mild=mild->next;
        
        }
        
        backward->next=head;
        
        delete mild;
    }

    void Start(int bell){

        Node*call=new Node(bell);
        
        if(head==NULL){
        
            head=call;
        
            return;
        
        }
        
        Node*bell;
        
        bell=head;
        
        while(bell!=NULL){
        
            bell=bell->next;
        
        }
        
        call->next=head;
        
        head=call;
        
        bell->next=head;
    }
void reversal(){

        Node*call;
        
            Node*now;
        
        Node*forward;
        
            call=head;
        
        now=call->next;
        
            while(forward->next!=NULL){
        
        forward=now->next;
        
            now->next=call;
        
        call->prev=now;
        
            call=now;
        
        now=forward;}
        
            head=forward;
    }
void headcall(dd){
    while(temp!=NULL){
        temp=temp->next;
    }
}