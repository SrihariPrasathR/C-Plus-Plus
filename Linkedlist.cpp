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
};

int main(){
    Linkedlist a;
    a.insertAtBeg(5);
    a.insertAtBeg(6);
    a.display();
 
}
