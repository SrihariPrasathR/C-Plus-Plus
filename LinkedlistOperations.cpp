#include<iostream>
using namespace std;
class Node{
    public:
    Node *next;
    int data;
    Node(int val){
        data=val;
        next=nullptr;
    }
};
class Linkedlist{
    private:
    Node *head;
    public:
    Linkedlist(){
        head=nullptr;
    }
    void insertAtBeg(int val){
        Node* newNode=new Node(val);
        newNode->next=head;
        head=newNode;
    }
    void insertAtEnd(int val){
        Node* newNode=new Node(val);
        Node *temp=head;
        while(temp->next!=nullptr){
            temp=temp->next;
        }
        temp->next=newNode;
    }
    void display(){
        Node *temp=head;
        while(temp!=nullptr){
            cout<<temp->data<<"->";
            temp=temp->next;
        }
        cout<<"NULL";
       
    }
    void deleteAtBeg(){
        
        Node *temp=head;
        head=head->next;
        delete(temp);
    }
     void deleteAtEnd(){
        
        Node *temp=head;
       
        while(temp->next->next!=nullptr)
        temp=temp->next;
    
        delete(temp->next);
        temp->next=nullptr;
    }
    void insertAtPos(int val,int pos){
       Node* newNode=new Node(val);
       Node* temp=head;
       for(int i=1;i<pos-1;i++){
        temp=temp->next;

       }
       newNode->next=temp->next;
       temp->next=newNode;

    }
   void deleteAtPos(int pos){
    Node* temp=head;
    for(int i=1;i<pos-1;i++){
       temp=temp->next;
    }
    temp->next=temp->next->next;
   }
   
};

int main(){
    Linkedlist a;
    a.insertAtBeg(5);
    a.insertAtBeg(6);
    a.insertAtBeg(10);
    a.insertAtBeg(11);
    a.insertAtEnd(1);   
    a.display();
    cout<<endl;
    
    a.deleteAtPos(2);
     a.display();
}
