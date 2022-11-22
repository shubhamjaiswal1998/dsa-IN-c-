#include<iostream>
using namespace std;
int main(int argc, char const *argv[])
{    
     int arr[]={2,4,3,5,4}; int size=5; int target=7;
    for(int i=0;i<size;i++){

       for(int j=i+1;j<size;j++){
                if (arr[i]+arr[j]==target)
                {
                    cout<<"index is "<<i<<" "<<j<<endl;
                }
                
       }

    }
    return 0;
}
