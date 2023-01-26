#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node*next,*prev;
    Node(int vault){
        data=vault;
        prev=NULL;
        next=NULL;}
};
class DDL{
    private:
    Node*head;
    int length;
    public:
    DDL(){
        head=NULL;
        length=0;
    }
    void insertion(int valve){
        Node*n=new Node(valve);
        if(head==NULL){
            head=n;
            return;}
            Node*temp=head;
            while(temp->next!=NULL){
                temp=temp->next;
            }
            temp->next=n;
            n->prev=temp;
    }
    void insertatend(int val){
        Node *n = new Node(val);
        n->data = val;
        n->next = NULL;
        n->prev = NULL;
        if(head == NULL){
            head = n;
        }
        else{
            Node * temp = head;
            while(temp->next != NULL){
                temp = temp->next;
            }
            temp->next = n;
            n->prev = temp;
        }}
    void removal(){
            Node*previ=head;
            Node*temp;
            temp=head;
            while(previ!=NULL){
                if(temp->data!=previ->data){
                    previ=temp;
                    temp=temp->next;
                }
                else{previ->next=temp->next;
                temp->next->prev=previ;}
                }
            }
    Node* headret(){
        return head;
    }
    void Spliiter(){
        Node*temp;
        temp=head;
        int counter=0;
        while(temp->next!=NULL){
            counter++;
            temp=temp->next;
        }
        temp=head;
        int arr[]={};
        int arr2[]={};
        for(int i=0;i<counter;i++){
            arr[i]=temp->data;
            temp=temp->next;
        }
        int p=0;
        while(temp->next!=NULL){
            arr2[p]=temp->data;
            temp=temp->next;
            p++;
        }
    }
    void concatenat(DDL List1, Node*current){
        Node*temp;
        temp=head;
        Node*temp2=current;
        while(temp->next!=NULL){
            temp=temp->next;
        }
        temp->next=temp2;
        temp2->prev=temp;
    }
    void InsertAB(int valve){
        Node*n=new Node(valve);
        if(head==NULL){
            head=n;
            return;
        }
        Node*temp;
        temp=head;
        while(temp!=NULL){
            temp=temp->next;
        }
        n->next=head;
        head=n;
        temp->next=head;
    }
    void DeleteAtEnd(){
        Node*prev;
        Node*temp=head;
        while(temp->next!=NULL){
            prev=temp;
            temp=temp->next;
        }
        prev->next=head;
        delete temp;
    }
    void Coverter(){
        Node*temp=head->next;
        if(temp->prev){
            temp=head;
            while(temp->next!=NULL){
                temp=temp->next;
            }
            if(temp->next==NULL){
                temp->next=head;
            }
            else{temp=temp->next;}
        }
        else{
            temp=head;
            while(temp->next!=NULL){
                temp=temp->next;
            }
            temp->next=head;
        }        
    }
    void printer(){
        Node*temp=head;
        while(temp->next!=head){
            cout<<temp->data<<endl;
            temp=temp->next;
        }
    }
    void sorting(){
    Node* temp = head;
    Node *p1 = head;
    if(head == NULL){
            return;
        }
        else{
        while(temp!=NULL){
            p1 = temp->next;
            while(p1!=NULL){
                if(temp == head){
                    if(temp->data > p1->data){
                    temp->next = p1->next;
                    p1->next->prev = temp;
                    p1->prev = temp->prev;
                    p1->next = temp;
                }
                p1 = head;
                }
                else{
                if(temp->data > p1->data){
                    temp->next = p1->next;
                    p1->next->prev = temp;
                    p1->prev = temp->prev;
                    p1->next = temp;
                    
                }
                p1 = p1->next;
            }
            }
            }
        }
}
    
    void reverse(){
        Node*temp,*curr,*nexte;
        temp=head;
        curr=temp->next;
        while(nexte->next!=NULL){
        nexte=curr->next;
        curr->next=temp;
        temp->prev=curr;
        temp=curr;
        curr=nexte;}
        head=nexte;
    }
    
};
int main(){
    DDL obj1,obj2;
    //obj1.insertatend(2);
    //obj1.insertatend(2);
    
    obj1.insertion(7);
    obj1.insertion(9);
    obj1.insertion(10);
    obj1.insertion(15);
    obj1.insertatend(19);
    obj1.insertatend(20);
    //Node*current=obj2.headret();
    //obj1.DeleteAtEnd();
    //obj1.reverse();
    //obj1.concatenat(obj2, current);
    obj1.printer();cout<<endl;
    //obj1.Coverter();
    //obj1.InsertAB(78);
    //obj1.Spliiter();
}