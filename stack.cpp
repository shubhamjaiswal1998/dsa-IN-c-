#include<iostream>

using namespace std;
  class Stack{
                public:
                int *arr; int size;   int top;
         Stack(int size){    // constructer no return any value
            this->size=size;
            arr=new int[size];

              top=-1;
                 }
     void push(int k){
               if (size-top>1)
               {         
                      top++;    arr[top]=k;
               }
               else{cout<<"stack is overflow ";}
        }         
       void pop(){
            if (top>=0)
            {
               // int ans=arr[top];
                   top--;
            }else{cout<<" stackis under flow stack";}
            
        }
        int peek(){

       if (top>=0)   

            {
 
                    return arr[top];

        }else{
            cout<<" khali hai stack";   return -1;
        }

        }
        bool isempty(){
        //if (top>=0)  or
            if (top==-1) 
        {
              cout<<"stack is  empty";
        }else{cout<<"stack is  no  empty";}
        


        }

  };
int main(int argc, char const *argv[])
{       
       Stack* ob=new Stack(3);

                ob->push(4);    ob->push(5);  ob->push(7);  
      
                    ob->pop(); int c1=ob->peek();  cout<<c1<<endl;     ob->isempty();
                    ob->pop(); int c2=ob->peek();  cout<<c2<<endl;
                    ob->pop(); int c3=ob->peek();  cout<<c3<<endl;
                      ob->isempty();
    return 0;
}



