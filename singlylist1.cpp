#include<iostream>

using namespace std;
class Node{
      public:
   int data;
    Node* next;
Node(int data){
      this->data=data;
      this-> next=NULL;
        }
        void insertathead(Node* &head,int d ){
         Node* temp=new Node(d);
        temp->next=head;
         head=temp;
                }
   void printt(Node* &head){
      Node* temp=head;
            while (temp!=NULL)
            {
                cout<<temp->data<<" "<<endl;
                temp=temp->next;
            }
            cout<<endl;
                 } 
void insertattail(Node* &tail,int k ){
         Node* temp=new Node(k);
           tail->next=temp;
           tail=temp;
         }
   void inseartatposition(Node* &head,int pos,Node* &tail,int d){
         if(pos==1){
               insertathead(head,d);
               return ;
         }
       Node* temp=head;   int count=1;
         while (count<pos-1)
         {
            temp=temp->next;   count++;
         }
          if(temp->next==NULL){
               insertattail(tail,d);
               return ;
         }
         Node* insertednode=new Node(d);
         insertednode->next=temp->next;
         temp->next=insertednode;
         }
         };
int main(int argc, char const *argv[])
     {
      Node* ob=new Node(1);
           Node* head=ob;
           Node* tail=ob; 
        ob->insertattail(tail,2); ob->insertattail(tail,3); ob->insertattail(tail,4);
ob->inseartatposition(head,1,tail,9);
          ob-> printt(head);
       return 0;
     }
