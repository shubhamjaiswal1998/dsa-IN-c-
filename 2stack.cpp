#include<iostream>
using namespace std;

    class Stack{
                public:
                int *arr; int size;   int top1; int top2;
         Stack(int size){    // constructer no return any value
            this->size=size;
            arr=new int[size];

              top1=-1; top2=size;
                 }
     void push1(int k){
               if (top2-top1>1)
               {         
                      top1++;    arr[top1]=k;
               }
              // else{cout<<"stack is overflow ";}
        }  
     void push2(int k){
               if (top2-top1>1)
               {         
                      top2--;    arr[top2]=k;
               }
              // else{cout<<"stack is overflow ";}
        }  

    void pop1(){
            if (top1>=0)
            {
               // int ans=arr[top];
                   top1--;
            }//else{cout<<" stackis under flow stack";}
            
        }
        void pop2(){
            if (top2<size)
            {
               // int ans=arr[top];
                   top2++;
            }//else{cout<<" stackis under flow stack";}
            
        }
       int peek1(){
                  if (top1==-1)
                  {
                      cout<<"stack is empty"; return 0;
                  }else{
                       cout<<"stack is  not empty"; return arr[top1];
                  }
                  } 
       int peek2(){
                  if (top2==size)
                  {
                      cout<<"stack is empty"; return 0;
                  }else{
                       cout<<"stack is  not empty"; return arr[top2];
                  }
                  } 

                     // 2 stack using single array
    };
   int main(int argc, char const *argv[])
      {   
           Stack* ob=new Stack(6);
    //cout<<"hello";
              ob->push1(1);    ob->push1(2);  ob->push1(3);  ob->pop1();  // for push in stack1
              int c1= ob->peek1();   cout<<c1<<endl;
              ob->push2(1);    ob->push2(5);  ob->push2(8);   ob->pop2();   // for push in stack2
              int c2= ob->peek2();   cout<<c2<<endl;

    
                    return 0;
    }
