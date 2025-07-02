#include<iostream>
using namespace std;
class Node{
    public:
    Node *next;
    Node *prev;
    int data;
   Node(int val){
      data=val;
      next=prev=nullptr;
   }   
};
class DoublyLinkedlist{
    private:
    Node *head;
    Node *tail;
    public:
    DoublyLinkedlist(){
        head=tail=nullptr;
    }
   void insertAtBeg(int val){
    Node* newNode=new Node(val);
    if(head==nullptr){
        head=newNode;
        tail=newNode;
    }
    else{
        head->prev=newNode;
        newNode->next=head;
        head=newNode;
    }
   }
   void insertAtEnd(int val){
    Node *newNode=new Node(val);
    tail->next=newNode;
    newNode->prev=tail;
    tail=newNode;

   }
   void insertAtPos(int val,int pos){
    Node *newNode=new Node(val);
    Node *temp=head;
    for(int i=1;i<pos-1;i++){
        temp=temp->next;
        
    }
    newNode->next=temp->next;
        temp->next=newNode;
        newNode->prev=temp;
   }
   void deleteAtBeg(){
    Node *temp=head;
    if(head==tail)
    head=tail=nullptr;
   else
   {
    head=head->next;
    head->prev=nullptr;
    delete (temp);
   }
}
void deleteAtEnd(){
    Node *temp=tail;
    if(head==tail)
    head=tail=nullptr;
   else
   {
    tail=tail->prev;
    tail->next=nullptr;
    delete (temp);
   }
}
void deleteAtPos(int pos){
    Node* temp=head;
    Node* temp2;
    for(int i=1;i<pos-1;i++){
        temp=temp->next;

    }
    if(tail==temp->next){
        delete (tail);
     tail=temp;
    tail->next=nullptr;
    }
    else if(head==tail)
    {
        
        head=tail=nullptr;
    }
    else if(temp==head){
        
        head=head->next;
        head->prev=nullptr;
        delete (temp);

    }
     else{
     temp2=temp->next;
     temp->next=temp->next->next;
     delete (temp2);
     Node* temp3=temp->next;
     temp3->prev=temp;
}
}

   void display(){
    Node *temp=head;
    while(temp!=nullptr){
        cout<<temp->data<<"->";
        temp=temp->next;
    }
   }
};
int main(){
    DoublyLinkedlist a;
    a.insertAtBeg(3);
    a.insertAtBeg(5);
    a.insertAtEnd(6);
    
    a.display();
    cout<<"NULL";
   
    cout<<endl;
   
    a.deleteAtPos(1);
    a.display();
    cout<<"NULL";

}
