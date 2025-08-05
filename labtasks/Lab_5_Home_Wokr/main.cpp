#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node* next;
    Node(int value){
        data = value;}};
class LinkList{
    Node* head;
    int length;
    LinkList(){
        head = NULL;
        length = 0;}
    private:
    void insertionatstart(int val){
        Node *n=new Node(val);
        if(head==NULL){
            head=n;}
        else if(head!=NULL){
            n->next = head;
            head=n;}}
    void insertionatend(int val){
        Node *temp;
        Node* n=new Node(val);
        temp=head;
        while(temp!=NULL){
            temp=temp->next;}
        temp->next=n;}
    void insertionatmid(int val, int pos){
        Node* n=new Node(val);
        Node* temp;
        temp=head;
        for(int i=1; i<pos; i++){
            temp=temp->next;}
        n->next=temp->next;
        temp->next=n;
    }
    void clearLL(){
        Node* temp, *prev;
        temp=head;
        prev=head;
        if(head!=NULL){
        while(temp!=NULL){
            temp->next;
            delete prev;
            prev=temp;}}
        else{
            cout<<"There is nothing to delete in the list";}}
    bool search(int val){
        bool flag=false;
        Node* temp;
        temp=head;
        while(temp->data!=val){
            // temp=temp->next;
            if(temp->data=val){
            flag=true;
            return flag;}
            temp=temp->next;}
    }
    void printed(){
        Node* temp;
        temp=head;
        while(temp!=NULL){
        cout<<temp->data;
        temp=temp->next;}
    }
    void concatenation(Node *Flist,Node *Slist){
        bool flag=false;
        if( Flist != NULL && Slist!= NULL ){
            if (Flist->next == NULL)
                Flist->next = Slist;
            else
                concatenation(Flist->next,Slist);
                flag=true;}
        else{
            if(flag==false){
                cout<<"The given two input lists are empty.";
            }}}
    bool emptiness(){
        bool flag=false;
        if(head==NULL){
            flag=true;
            return flag;
        }
    }
    void concatenate(Node* object1head, Node* object2head){
        Node* temp;
        temp = object1head;
        while(temp!=NULL){
            temp=temp->next;
        }
        temp->next=object2head;
    }
    void merging_order(Node* object1, Node* object2){
        Node* temp;
        temp=object1;
        while(temp!=NULL){
            temp=temp->next;
        }
        temp->next=object2;
        temp=head;
        while(temp!=NULL){
            if(temp->data>temp->next->data){
                temp->data=temp->next->data;}}
    }
    void summing(){
        Node* temp;
        temp=head;
        int average=0;
        int summed=0;
        int counter=0;
        while(temp!=NULL){
            summed+=temp->data;
            counter++;
            temp=temp->next;
        }
        average=summed/counter;
    }
    void copied(Node* object1){
        Node* temp;
        temp=object1;
        int length=0;
        int i=0;
        while(temp!=NULL){
            length++;
            temp=temp->next;
        }
        while(length!=0){
        if(i!=length){
            Node* newbie;
            newbie->data=temp->data;
            length--;
            i++;
        }}
    }
    void insertmiddle(int val){
        Node* temp;
        temp=head;
        int i=0;
        int counter=0;
        while(temp!=head){
            counter++;
            temp=temp->next;
        }
        temp=head;
        while(i!=counter/2){
            temp=temp->next;
        }
        temp->data=val;
    }
    void movefirst(){
        Node* first=new Node(0);
        Node* second= new Node(0);
        Node* temp;
        temp=head;
        while(temp!=NULL){
            temp=temp->next;
        }
        second->data=temp->data;
        first->data=head->data;
        if(head!=NULL){
            head->data=second->data;
            temp->data=first->data;
        }}
    void sorted(Node* object1){
        Node* temp;
        temp=object1;
        while(temp!=NULL){
            if(temp->data>temp->next->data)
            temp->data=temp->next->data;
            temp=temp->next;
        }
    }
    void palindrome(int value){
        Node* temp;
        temp=head;
        while(temp!=NULL){
            temp=temp->next;
            temp->data=value;}
            if(temp->data<temp->next->next->data)
            temp->data=temp->next->next->data;
            else{
            temp->data=temp->next->data;}
    }
    void RemoveDuple(Node*object){
        //object.sorted();
        Node* temp, *worker;
        temp=head;
        while(temp!=NULL){
            temp=temp->next;
            if(temp->next->data!=temp->data){
            worker=temp;
            temp=temp->next;}
            else{
            worker=temp;
            temp=temp->next;
            delete worker;}
        }
    }
    bool isPalin(Node* head){
        Node* slow= head;
        while(slow != NULL){
                slow = slow->next;
        }
        while(head != NULL ){
            int i;
            if(head -> data != i){
                return false;}
           head=head->next;}
return true;} 
};
int main(){
    LinkList *obj1;
    LinkList *obj2;
    for (int x=0; x<15;x++)
{
    int randomNumber = (rand() % 100);
    //obj1.insertionatend(randomNumber);
    //obj1.insertionatend(randomNumber);
    //obj1.insertionatend(randomNumber);
    //obj1.insertionatend(randomNumber);
    //obj1.insertionatend(randomNumber);
}}