#include<iostream>
using namespace std;
class Node{
   public:
   int data; Node* next; Node* prev;
    Node(int data){
         this->data=data; this->next=NULL;
         this->prev=NULL;
}
    void insertathead(Node* &head,int d){
         Node* temp=new Node(d);
              
            temp->next=head;
             head=temp;
}
 void print(Node* &head){
    Node* temp=head;   
while (temp!=NULL)
{         cout<<temp->data<<" ";
        temp=temp->next;
}   cout<<endl;
}
Node* reverselin(Node* head){
    if (head==NULL || head->next==NULL)
    {
        return head;
    }
    
 Node* prev=NULL;  Node* curr=head;  Node* forward=NULL;
   while (curr!=NULL)
{
    forward=curr->next;
    curr->next=prev;      prev=curr; curr=forward;
}   cout<<endl;
}
Node* reverselin_by_recursion(Node* head){
    if (head==NULL || head->next==NULL)
    {
        return head;
    }
    
      Node* small= reverselin_by_recursion( head->next);

        head->next->next=head;  head->next=NULL;   
       return small;
}
};
int main(int argc, char const *argv[])
{
      Node* ob=new Node(5); Node* head=ob; ob->insertathead(head,1);ob->insertathead(head,2);
      ob->insertathead(head,3); ob->print(head);
      ob->reverselin(head); ob->print(head);    cout<<endl;
      ob->reverselin_by_recursion( head);ob->print(head);
    return 0;
}
