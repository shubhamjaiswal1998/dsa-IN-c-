#include<iostream>
#include<queue>
using namespace std;

class Node{
     public:
       int data; Node* left; Node* right;

      Node(int data){ 
             this->data=data;
             this->left=NULL;
             this->right=NULL;
       }
       ///////////////////////////////////////////////////////////////////////////////
       Node* buildtree(){     
                              int data;                       //to build binary tree
          cout<<"enter data"<<endl; cin>>data;
                 Node* root=new Node(data);
          if (data==-1)  // base case
          {                     
               return NULL;                
          }
           cout<<"enter data for left of "<<data<<endl; 
            root->left= buildtree();
            cout<<"enter data for right of "<<data<<endl;
             root->right= buildtree();
           return root;
     } 
       //////////////////////////////////////////////////////////////////////////////////////////
       void preorder_traversal(Node* &root){

               if (root==NULL)
               {
                    return;
               }
               cout<<root->data<<" ";            // N L R
               preorder_traversal(root->left);  preorder_traversal(root->right);
                  
          } 
      //////////////////////////////////////////////////////////////////////////////////////////
          void inorder_traversal(Node* &root){

               if (root==NULL)
               {
                    return;
               }
               preorder_traversal(root->left); 
               cout<<root->data<<" ";            //L N  R
                preorder_traversal(root->right);
                  
          } 
///////////////////////////////////////////////////////////////////////////////////////////////////////
        void postorder_traversal(Node* &root){

               if (root==NULL)               //  L R  N
               {
                    return;
               }
               
               preorder_traversal(root->left);  preorder_traversal(root->right);
               cout<<root->data<<endl;

          } 
///////////////////////////////////////////////////////////////////////////////////////////////////////////////
         void level_order_traversal(Node* root){

           if (root==NULL){
               return;
           }
             queue<Node*> q; // this q is now empty & have to push first root 
              q.push(root); 
           
              //while (q.empty()==false)  // that means until q is not empty then excute
               while(!q.empty()) 
              {
                  Node* temp=q.front();// to print root, first have to store in temp
                   cout<<temp->data<<" ";
                     q.pop();
                     if (temp->left!=NULL)
                     {
                         q.push(temp->left);
                     }
                     if (temp->right!=NULL)
                     {
                         q.push(temp->right);
                     }
                     }
              } 
      ///////////////////////////////////////////////////////////////////////////////////        
              void level_order_traversal_treeForm(Node* root){

               queue<Node*> q;                  // q have node type of value ,<node> == <data type>
                     q.push(root); q.push(NULL);
                 while (!q.empty())
                 {
                      Node* front=q.front();
                       q.pop();
                      if (front==NULL)                            
                      {
                              cout<<endl;               // this line use for break line, shift down
                               if (!q.empty())
                              {
                                   q.push(NULL); //agar 
                              }
                              
                      }else{
                          cout<<front->data<<" ";
                       if (front->left!=NULL)
                       {
                              q.push(front->left);

                         if (front->right!=NULL)          
                       {
                              q.push(front->right);
                       }
                       }
                      }
              }
              } 
       //////////////////////////////////////////////////////////////////////
       int height_tree(Node* root){

         if (root==NULL)
           {
             return 0;
           }
           else
           {          
                int left_height=height_tree(root->left); // it will give total height of left subtree
                int right_height=height_tree(root->right);// it will give total height of right subtree
              if (left_height>right_height)// which one is longest check first then add 1 to get total include
                                    // root tree for adding root tree add +1
              {
                 return left_height+1;
              }
              else
              {
                return right_height+1;
              }
               }
           } 
           ///////////////////////////////////////////////////////////////////
            int get_heightm2(Node* root){

               if (root==NULL)
               {
                    return 0;
               }
               if (root->left==NULL && root->right==NULL)
               {
                    return 1;

               }
               int ans1=get_heightm2( root->left);  int ans2=get_heightm2( root->right);
               return 1+max(ans1,ans2);

          } 
       /////////////////////////////////////////////////////////////////////
         int get_no_of_node(Node* root){

               if (root==NULL)
               {
                    return 0;                           
               }
          
               int ans1=get_heightm2( root->left);  int ans2=get_heightm2( root->right);
               return 1+max(ans1,ans2);

          }   
       ///   ////////////////////////////////////////////////////////////////////////////////
            void print_currentlevel(Node* root,int level){
            if (root==NULL)
            {
                 return;
            }
          if(level==0){
                  cout<<root->data<<" ";  // only print for level 0
            }                            //   1      level 0     tree
           else if(level>0)             //  2   3    level 1
                                    //   4     5   6  level 2
           { 
               print_currentlevel(root->left,level-1); // we have to again & again level 0 then do level-1
               print_currentlevel(root->right,level-1);
               
           }
           }
           /////////////////////////////////////////////////////////////////////////////
        void printlevelorder_recursive(Node* root){
              int height =height_tree(root);
              int i;
              for ( i = 0; i < height; i++)       // it will go level 0 to height of tree
                                    // to print all node level wise
              {
                    print_currentlevel(root,i);// this is responsible for to print all data horzontally 
                                              // at all of same level data
              }
              }   
     

};

int main(int argc, char const *argv[])
{     

     Node *root = new Node(2);
    root->left = new Node(4);
    root->right = new Node(5);
    root->right->left = new Node(6);   // or this can be done by fn buildtree();
    root->right->right = new Node(7);
    root->right->right->left = new Node(8);
    root->right->right->left->left = new Node(10);
    root->right->right->left->right = new Node(11);
    root->right->right->right = new Node(9);
    root->right->right->left->right->left = new Node(12);
    // root->preorder_traversal(root);
    ////////////////////////////////////////////////////////////////////////////////////////////
     //  Node *ele=NULL;
      //ele=ele->buildtree();  cout<<endl;
     root->preorder_traversal(root); cout<<endl;
     root->level_order_traversal(root); cout<<endl; 
      int c= root->height_tree(root);
      int c1=root->get_heightm2(root);
      int c2=root->get_no_of_node(root);
     cout<<c<<endl; cout<<c1<<endl;  cout<<c2<<endl;
     root->printlevelorder_recursive(root); cout<<endl;
     root->level_order_traversal_treeForm(root); cout<<endl;


    return 0;
}
