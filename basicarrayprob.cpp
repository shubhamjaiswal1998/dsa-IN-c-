#include<iostream>
using namespace std;
   class Array{
           public:
          int arr[100]; int size=0;  int input_value;
            
          void take_element_in_array(int size1){

                     for (int i = 0; i < size1; i++)
                     {    cout<<"enter next element"<<endl;
                           cin>>input_value;
                           arr[i]=input_value;
                           size++;
                     }
                     
                } 
              void get_size(){
                cout<<size<<endl;
              }  
            void print_array(){

                for (int i = 0; i <size; i++)
                {
                    cout<<arr[i]<<" ";
                }
                } 
              void search(int k){
                for (int i = 0; i < size; i++)
                {
                      if (k==arr[i])
                      {
                        cout<<"got it"<<endl;
                      }
                      
                }
                
              } 
             void delete_element_at_index(int index){
                  for (int i = index; i < size; i++)
                  {
                        arr[i]=arr[i+1];
                  }
                      arr[size]=0;
                   size--;

             }  
            void inserat_index(int index,int value){
                  for (int i = size; i>=index; i--)
                  {
                       arr[i+1]=arr[i];
                  }
                    arr[index]=value;
                 size++;
            }

};

int main(int argc, char const *argv[])
{   
         Array ob1; 
                      int user_array_size=5;
                      ob1.get_size();
              ob1.take_element_in_array(user_array_size);
            ob1.print_array();  cout<<endl;
               ob1.delete_element_at_index(2);
               ob1.print_array(); cout<<endl;
               ob1.inserat_index(1,99);
               ob1.print_array();
    return 0;
}
