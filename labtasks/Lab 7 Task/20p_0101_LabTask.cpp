#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node*next;
    Node*prev;
    Node(int s){data=s;
    next=prev=NULL;}
};
class DLinkList{
    private:
    Node*head;
    int length;
    public:
    DLinkList(){head=NULL;
    length=0;}
    void insertHead(int valve){Node*t=new Node(valve);
    if(head==NULL){head=t;
    return;}
    t->next=head;
    head->prev=t;
    head=t;
    length++;}
    // void insertEnd(int valve){//}
    void insertSpecific(int valve,int pos){
        if(pos<1||pos>length+1){cout<<"Invalid Position"<<endl;
        return;}
        Node*temp=head;
        Node*p=new Node(valve);
        if(pos==1){
            insertHead(valve);}
        else{for(int i=1;i<pos;i++){
        temp=temp->next;}
        p->next=temp->next;
        p->prev=temp;
        temp->next->prev=p;
        temp->next=p;
        length++;
        }}
    void deletion(int valve){Node*temp;
    if(valve>length){
        cout<<"Invalid Pos"<<endl;
        return;
    }
    temp=head;
    if(valve==1){
        head=head->next;
        temp=head;
    }
    while(temp->next->data!=valve){
        temp=temp->next;}
        temp->next->next->prev=temp;
        temp->next=temp->next->next;}
    void print(){bool flag;
    cout<<"Press 0 to print in Ascending and 1 to print in Descending ";
    cin>>flag;
    if(flag==1){
    Node*curr=head;
    while(curr!=NULL){
    cout<<curr->data<<endl;
    curr=curr->next;}}
    if(flag==0){Node*curr=head;
    while(curr->next!=NULL){curr=curr->next;}
    while(curr!=NULL){
        cout<<curr->data<<endl;
        curr=curr->prev;}
    }}
};
int main(){DLinkList List1;
// List1.insertHead(2);
// List1.insertHead(3);
// List1.insertHead(9);
// List1.insertHead(10);
// List1.insertHead(12);
List1.insertSpecific(1,1);
List1.insertSpecific(2,1);
List1.insertSpecific(3,1);
List1.insertSpecific(4,1);
List1.insertSpecific(5,1);
List1.insertSpecific(6,1);
List1.print();
List1.print();
//cout<<endl;
//cout<<"To insert at end, give position 1 in the perimeter:"<<endl;
List1.deletion(5);
List1.print();}