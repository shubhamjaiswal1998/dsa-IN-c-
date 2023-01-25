#include<iostream>
using namespace std;

class dublyqueue
{
       int *arr; int size; int rear; int front; 
    
    public:
        dublyqueue(){

            size=100; arr=new int[size]; front=-1; rear=-1;}
         void circulerQ_push(int value){
              if (rear==-1)
              {
                  front++; rear++; arr[rear]=value;
              }
              else if ((rear+1)%size==front)
              {
                 cout<<"q is full"<<endl;
              }
              else
              {
                   rear=(rear+1)%size;  // rear ko right position pr kro
                   arr[rear]=value;
              }
              } 
         void circulerQ_pop(){
              if (rear==-1)
              {
                  cout<<"q is empty"<<endl;
              }
              else if (front==rear)
              {
                  cout<<"deleted "<<arr[front]<<endl; front=rear=-1;
              }
              else
              {     cout<<"deleted "<<arr[front]<<endl;
                   front=(front+1)%size;  
                   
              }
              }       
       void push_from_rear(int value){

         if (rear==-1)
         {
            front++; rear++;
             arr[rear]=value;
         }
         else if (rear==size-1)
         {
              cout<<"q is full"<<endl;
         }
         
         else
         {
             rear++; arr[rear]=value;
         }
         }
          void push_from_front(int value){

         if (rear==-1)
         {
            front++; rear++;
             arr[rear]=value;
         }
         else if (rear==size-1)
         {
              cout<<"q is full"<<endl;
         }
         
         else
         {
             for (int i = rear; i>=front; i--)
             {
                  arr[i+1]=arr[i];
             }
             rear++;
             arr[front]=value;
         }
         }
     void pop_from_right_orstarting(){
        if (rear==-1)
        {
            cout<<"q is empty"<<endl;
        }
        else if (rear==front)
        {
            cout<<arr[front]<<" deletaed by  front"<<endl;  front=-1; rear=-1;
        }
        else{
              cout<<"deleted by  front"<<arr[front]<<endl;
            front++;

        }}
       void pop_from_left_orending(){
        if (rear==-1)
        {
            cout<<"q is empty"<<endl;
        }
        else if (rear==front)
        {
            cout<<arr[rear]<<" deletaed by rear"<<endl;  front=-1; rear=-1;
        }
        else{
              cout<<"deleted by  rear"<<arr[rear]<<endl;
            rear--;

        }
}
     void print(){
       for (int i = front; i <=rear; i++)
       {
           cout<<arr[i]<<" ";
       }
       cout<<endl;


     }    
};

int main(int argc, char const *argv[])
{      dublyqueue ob1;
      ob1.push_from_rear(1); ob1.push_from_rear(2); ob1.push_from_rear(3); ob1.print(); cout<<endl;
      ob1.push_from_front(1); ob1.push_from_front(2);ob1.push_from_front(3);ob1.print(); cout<<endl;
      ob1.pop_from_left_orending(); ob1.print();cout<<endl;
      ob1.pop_from_right_orstarting(); ob1.print();cout<<endl;
    return 0;
}
