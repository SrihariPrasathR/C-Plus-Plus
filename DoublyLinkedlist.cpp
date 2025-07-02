#include<iostream>
using namespace std;
class Node{
  public:
    Node *next;
    Node *prev;
    int data;
    Node(int val){
         data=val;
        next=nullptr;
        prev=nullptr;
    }
};
class DoublyLinkedlist{
    private:
    Node *head;
    public:
    DoublyLinkedlist(){
        head=nullptr;
    }
    void insertAtBeg(int val) {
        Node* newNode = new Node(val);
        if (head == nullptr) {
            head = newNode;
        } else {
            head->prev = newNode;
            newNode->next = head;
            head = newNode;
        }
    }
    void display(){
        Node* temp=head;
        while(temp!=nullptr)
        {
            cout<<temp->data<<"->";
            temp=temp->next;
        }
    }

};
int main(){
    DoublyLinkedlist a;
    a.insertAtBeg(5);
    a.insertAtBeg(6);
    a.display();
    cout<<"NULL";
}
