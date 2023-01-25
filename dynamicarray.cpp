#include<iostream>
using namespace std;
   class Xyz{
                
               int * arr; int size; int capacity; // size -> = 0,1,2,,,,
                                             // capacity->= 1,2,4,8,16,,,,,
               public:
           Xyz(){

              arr=new int[1];
               size=0;
               capacity=1;


           }
           ~Xyz(){

                delete []arr;
                      size=0; capacity=0;

           }
           void shrinktofit(){
                int *temp=new int[size];
                for (int i = 0; i < size; i++)
                {
                    temp[i]=arr[i];
                }
                delete []arr;
                 arr=temp;
                capacity=size;

           }
           void deleteat_index(int index){
               for (int i = index; i < size; i++)
               {
                   arr[i]=arr[i+1];
               }
               size--;
              }

           void insert_by_shift(int index,int value){// in static array shift is not possible bcoz size not grow
                     if (size==capacity) // array is full
                 {
                    resize();
                 }
                 else if (index>=capacity || index<0)// do not enter index more than capacity & -ve index
                 {
                    cout<<"no element can insert"<<endl;
                 }
               for (int i = size; i >=index; i--)
               {
                     arr[i+1]=arr[i];  // arr[i]=arr[i-1]
               }
               
              arr[index]=value;
               size++;
              }
         
             void insertat_head_by_index(int index,int value){
                 if (size==capacity) // array is full
                 {
                    resize();
                 }
                 else if (index>=capacity || index<0)// do not enter index more than capacity & -ve index
                 {
                    cout<<"no element can insert"<<endl;
                 }
                 
                 arr[index]=value;
                 size++;
             } 

             void print(){
              for (int i = 0; i < size; i++)
              {
                      cout<<arr[i]<<" ";
              }
              cout<<endl;
              cout<<"count is "<<capacity<<" size is "<<size<<endl;
             }
             void resize(){
                   int *temp=new int[2*size]; 
                for (int i = 0; i < size; i++)
                {
                    temp[i]=arr[i];
                }
                     capacity=2*size;
                delete []arr;
                 arr=temp;
                   

             }
             void get_size(){
                cout<<"size is "<<size<<endl;
             }
             void get_count(){

              cout<<"no of count for increase size"<<capacity<<endl;

             }  
   };

    int main(int argc, char const *argv[])
    { Xyz *ob1=new Xyz();
              int *arr1{new int[3]{1,2,3}};// creation of dynamic array
               ob1->insertat_head_by_index(0,2);   ob1->insertat_head_by_index(1,3);ob1->insertat_head_by_index(2,4);
               ob1->insertat_head_by_index(3,99);  ob1->insertat_head_by_index(4,109);
               ob1->print();  cout<<"after inser"<<endl;
               ob1->insert_by_shift(2,55); ob1->insert_by_shift(3,321);
               ob1->print();  cout<<"after delete"<<endl;
              ob1->deleteat_index(2); ob1->shrinktofit();
              ob1->print();
            
        return 0;
    }
    