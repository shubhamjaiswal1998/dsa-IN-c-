#include<iostream>
#include<limits.h>
using namespace std;

 
int fact(int n ){ 
   int f=1;
   for (int i = n; i >0; i--)
   {
      f=f*i;
   }
   return f;

}
int ncr(int n,int r){

     int n1=fact(n);  int n2=fact(n-r);// jisko call krna  wo fn uper hona chahiye
     int n3=fact(r);
      int n4= n1/(n2*n3);

       return n4;
}
void paskalprint(int n){
      for (int i = 0; i <= n; i++)
      {
         for (int j = 0; j <= n-i; j++)
         {
             cout<<" ";
         }
         for (int j = 0; j <= i; j++)
         {
           cout<<ncr(i,j)<<" ";
         }
         cout<<endl;
      }
      }

int main(int argc, char const *argv[])
{
   //int c[5]={1,2,9,4,5};

    int c1=fact(5);cout<<c1<<endl;
    int c2=ncr(4,3);cout<<c2<<endl;
     paskalprint( 4);

 return 0;
}
