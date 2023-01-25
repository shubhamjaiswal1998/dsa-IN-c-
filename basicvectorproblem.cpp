#include<iostream>
#include<math.h>
#include<vector>
using namespace std;

 vector<int> get_intersectionof2_array(vector<int> arr1,vector<int>arr2,int size1,int size2){

                 vector<int>arr3;     
    for (int i = 0; i < size1; i++)      
    {
             int element=arr1[i];
    
        for ( int j=0 ; j < size2; j++)
            { 
             if (element==arr2[j])         
           {             
                   arr3.push_back(element);    
                    arr2[j]=-1;   break;
           }
           }} 

         return arr3;
}
  void insert_in_vector(vector<int> arr1,int size){
    
       for (int i = 0; i < size; i++)
       {
            arr1.push_back(i);
       } cout<<endl;
       }

    void display(vector<int> arr1,int size){
    
       for (int i = 0; i < size; i++)
       {
            cout<<arr1[i]<<" ";
       } cout<<endl;
       }
vector<int> reverse_in_vector(vector<int> arr1,int size){
                       int s=0;   int e=size-1;
        while (s<=e)
         {
            swap(arr1[s],arr1[e]);   s++;e--;
         }
         return arr1;}
int main(int argc, char const *argv[]) 
{     vector<int> arr1={1,2,3,4,5};         
    vector<int> arr2={6,7,8,3,9,10}; 
          cout<<"print intersection value  "<<endl;    
        vector<int> c=get_intersectionof2_array( arr1,arr2, 5, 6);
           display(c,1); 
    //insert_in_vector( arr1, 5);
    display(arr1, 5); cout<<endl; display(arr2, 6);  cout<<"after reverse"<<endl;
     vector<int> ans= reverse_in_vector( arr2, 6);
     display(ans, 6);
    
return 0;
}
