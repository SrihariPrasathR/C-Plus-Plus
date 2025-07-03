#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node *next;
    Node(int val){
     data=val;
     next=nullptr;

    }
};
class Linkedlist{
    private:
    Node *front;
    Node *rear;
    public:
    Linkedlist(){
        front=nullptr;
        rear=nullptr;
    }
   void enqueue(int val){
    Node *newNode=new Node(val);
    if(front==nullptr){
        front=rear=newNode;
    }else{

    rear->next=newNode;
    rear=newNode;
   }}
 void dequeue(){
    if(front==nullptr){
        cout<<"Underflow";
        return;
    }
    Node* temp=front;
    front=front->next;
    if(front==nullptr){
        rear=nullptr;
    }
    delete (temp);
 }
   
   void display(){
    Node *temp=front;
    if(temp!=nullptr){
    while(temp!=nullptr){
        cout<<temp->data<<"->";
        temp=temp->next;
    }}
    
}
void peek(){
    cout<<front->data;
}
void isEmpty(){
    if(front==nullptr)
    cout<<"Yes";
    else
    cout<<"No";
}

};

int main(){
    Linkedlist a;
    a.enqueue(5);
    a.enqueue(4);
    a.enqueue(6);
    a.enqueue(12);
    a.enqueue(45);
    a.dequeue();
    a.display();
    cout<<"NULL"<<endl;
    a.peek();
    cout<<endl;
    a.isEmpty();
    
}
