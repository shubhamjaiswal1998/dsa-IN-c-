#include<iostream>
using namespace std;
      //////////////////////////////////////////////////////////////////////////////////
            void rotate_array(int arr[],int size){
                        int ansarry[7]; int j=0;  int k=2;
                   for (int i =size-k; i < size; i++)
                   {
                       ansarry[j++]=arr[i]; j++;
                   }
                    for (int i = 0; i <= k; i++)
                   {
                       ansarry[j++]=arr[i]; 
                   }
                   
                   }
      //////////////////////////////////////////////////////////////////////////////             
        int maximum_value(int arr[],int size){
                    int max=-100;

                  for (int i = 0; i < size; i++)
                  {
                     if (arr[i]>max)
                     {
                          max=arr[i];
                     }
                      
                  }    //cout<<"maximum value is "<<max<<endl;
                  return max;
             }
        ////////////////////////////////////////////////////////////////////////////     
               void get_second_maxvalue  (int arr[],int size){
                      int max=-101;
                       for (int i = 0; i < size; i++)
                       {
                        if (arr[i]>max)
                          {
                             max=arr[i];
                          }
                       }
                       for (int i = 0; i < size; i++)
                       {
                           if (arr[i]==max)
                           {
                               arr[i]=-1;
                           }
                           
                       }
                              int c=maximum_value( arr, size);
                      cout<<"second max value is "<<c <<endl;
                    
                       
                 }
///////////////////////////////////////////////////////////////////////////////////
             void get_uniqe(int arr[],int size){ 
                   
             for (int i = 0; i < size; i++)
                   {
                    for (int j = i+1; j < size; j++)
                   {
                        if (arr[i]==arr[j])
                        {
                              arr[i]=arr[j]=-1;
                        }
                        } 
                   }
              for (int i = 0; i < size; i++)
              {
                   if (arr[i]>0)
                   {
                       cout<<"index of uniqe no is "<<i<<" and that no is "<<arr[i]<<endl;
                   }}
            }    
////////////////////////////////////////////////////////////////////////////////
    void  target_sum2(int arr[],int target,int size){   
                        int count=0;
               for (int i = 0; i < size; i++)
               {
                for (int j = i+1; j < size; j++)
               {
                      if (arr[i]+arr[j]==target)
                      {
                            cout<<" index is "<<i<<" "<<j<<endl;
                            count++;
                      }
                      }}
                  cout<<"no of pairsum is " <<count<<endl;   
                      }
    //////////////////// //////////////////////////////////////////////////////
      void print(int arr[],int size){

           for (int  i = 0; i < size; i++)
           {
               cout<<arr[i]<<" ";
           }
             cout<<endl;
           }
int main(int argc, char const *argv[])
{        int arr[]={2,4,5,6,7,1,3};  int arr1[]={2,1,4,1,2}; int size1=5;
         int size=7;  int target=9;
               print( arr, size);
             //target_sum2(arr,target,size);
             get_uniqe(arr1,size1);
             print( arr1, size1);
             cout<<"max is "<<maximum_value( arr, size)<<endl;
             get_second_maxvalue  ( arr, size);
             rotate_array( arr, size);
             print( arr, size);

                
  return 0;
}
