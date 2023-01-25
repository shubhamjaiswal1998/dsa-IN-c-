#include<iostream>
#include<queue>
using namespace std;
  class node{
         public:
         int data; node* left; node* right;

          node(int data){
              this->data=data;
              this->left=NULL;    this->right=NULL;
          }

      };

  node* buildtree(){
                 cout<<"enter the data "<<endl;   int data;
                 cin>>data;
            node* root=new node(data);
           if (data==-1)
           {
               return NULL;
           }
           
            cout<<"enter data for left of "<<data  <<endl;
            root->left=buildtree();
            cout<<"enter data for right of "<<data  <<endl;
             root->right=buildtree();
            
            return root;
  }
  void preorder(node* &root){
        
        if (root==NULL)
        {
           return;
        }   cout<<root->data <<" "; preorder(root->left); preorder(root->right);
        

  }
  int getnode(node* root){
       if (root==NULL)
       {
            return 0;
       }
      int ans1= getnode(root->left);    int ans2= getnode(root->left);
        int ans=1+max(ans1,ans2);
        return ans;

  }
  int get_height(node* root){

       if (root==NULL)
       {
              return 0;
       }
        if (root->left==NULL && root->right==NULL)
        {
            return 0;
        }

        int ans1= getnode(root->left);    int ans2= getnode(root->left);
        int c1=1+max(ans1,ans2);
        return c1;
  }
  void leveltraversal(node* root){

         queue<node*> q;
         q.push(root);
         while (!q.empty())
         {
                     
                node* temp=q.front();
                q.pop();

                cout<<temp->data<<" ";   

                if (temp->left==NULL)
                {
                     q.push(temp->left);
                }
                if (temp->right==NULL)
                {
                     q.push(temp->right);
                }
                }
         }

        int main(int argc, char const *argv[])
{
        node* root=NULL;
      root=buildtree();   preorder(root); int c=getnode(root); cout<<endl;
     int c1=get_height(root); cout<<c1;  cout<<endl;
       leveltraversal(root);
cout<<c;     return 0;
}
