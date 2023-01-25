#include<iostream>
using namespace std;
// gap f3
 void colsum(int s[][3]){
for (int col = 0; col <3; col++)
{      int sum1=0;
for (int row = 0; row <3; row++){
   
 sum1=sum1+s[row][col];    // column sum each ki
}
      cout<<sum1<<" ";
}
}
// gap f2
bool search(int s[][3],int k){
for (int row = 0; row <3; row++)
{
for (int col = 0; col <3; col++){
if (s[row][col]==k){
return 1;
}
    }
}   return 0;
}
// gap f1
void printarray(int s[][3] ){
{for (int row = 0; row <3; row++)
{
    for (int col = 0; col <3; col++)     // take input and print 2d output 
cin>>s[col][row];                         // input take column wise print collimn wise
}           
}
for (int i = 0; i < 3; i++)    
{
    for (int j = 0; j < 3; j++){     
cout<<s[i][j]<<" ";               // ye same hai col & row wise both me
} cout<<endl;           
    }}
int main(int argc, char const *argv[])
{int s[3][3];  cout<<"enter"<<endl;   int k=4;
printarray(s);
     bool c=search(s,k);   cout<<c<<endl; colsum(s);
    return 0;
}
