#include <iostream>
#include <queue>
#include <climits>
#include <unordered_map>

using namespace std;
class Node{
public:
    int val;
    Node* left;
    Node* right;

    // constructor
    Node(int val){
        this->val = val;
        this->left = NULL;
        this->right = NULL;
    }
};

int height(Node* root){
    if(root== NULL) return 0;
    return 1+max(height(root->left),height(root->right));
}

Node* construct(int arr[],int n){
    
    queue<Node* > q;
    Node* root = new Node(arr[0]);
    q.push(root);
    int i=1;
    int j=2;
    while(q.size()>0 && i<n){
        Node* temp = q.front();
        q.pop();
        Node* l;
        Node* r;
        if(arr[i]!=INT_MIN) l=new Node(arr[i]);
        else l=NULL;
        if(j!=n && arr[j]!=INT_MIN) r=new Node(arr[j]);
        else r=NULL;
        temp->left=l;
        temp->right=r;
        if(l!=NULL)q.push(l);
        if(r!=NULL)q.push(r);
        i+=2;
        j+=2;
    }
    return root;
}
void topView(Node* root){
    unordered_map<int,int> m;
    queue< pair<Node*,int>> q;

    pair<Node*,int> r;
    // assigning value of r;
    r.first = root;
    r.second = 0;

    q.push(r);
    // m[0] = root->val;
    while(q.size()){
        Node* temp = (q.front()).first;
        int lev = (q.front()).second;
        q.pop();
        if(m.find(lev)==m.end()){//target not exist
            m[lev]=temp->val;
        }
        if(temp->left!=NULL){
            pair<Node*,int> p;
            // assigning value of r;
            p.first = temp->left;
            p.second = lev-1;
            q.push(p);
        }
        if(temp->right!=NULL){
            pair<Node*,int> p;
            // assigning value of r;
            p.first = temp->right;
            p.second = lev+1;
            q.push(p);
        }
    }
    // upar tak mera map bhara chuka hai;

    // find min and max level from map
    int minLev = INT_MAX;
    int maxLev = INT_MIN;

    for(auto x : m){
        int level = x.first;
        minLev = min(minLev,level);
        maxLev = max(maxLev,level);
    }
    
    for(int i = minLev ;i<=maxLev;i++){
        cout<<m[i]<<" ";
    }
    
}
void nthLevel(Node* a,int curr,int value){

    if(a == NULL) return; // base case
    if(curr == value){
        cout<<a->val<<" "; 
        return;
    }
    nthLevel(a->left,curr+1,value); // call1
    nthLevel(a->right,curr+1,value); //call2
}
void nthLevelRev(Node* a,int curr,int value){

    if(a == NULL) return; // base case
    if(curr == value){
        cout<<a->val<<" "; 
        return;
    }
    nthLevelRev(a->right,curr+1,value); //call2
    nthLevelRev(a->left,curr+1,value); // call1
    
}
int main(){
    int arr[]={1,2,3,4,5,INT_MIN,6,INT_MIN,INT_MIN,7,8,INT_MIN};
    int n=sizeof(arr)/sizeof(arr[0]);
    Node* root = construct(arr,n);
    // vector<int> ans;
    topView(root);
    

}