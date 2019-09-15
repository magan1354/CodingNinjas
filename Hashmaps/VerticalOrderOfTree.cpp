#include<bits/stdc++.h> 	
//	void printBinaryTreeVerticalOrder(BinaryTreeNode<int>* root) {	  	}

void getVerticalOrder(BinaryTreeNode<int>*  root, int hd, map<int, vector<int>> &m) 
{ 
    // Base case 
    if (root == NULL) 
        return; 
  
    // Store current node in map 'm' 
    m[hd].push_back(root->data); 
  
    // Store nodes in left subtree 
    getVerticalOrder(root->left, hd-1, m); 
  
    // Store nodes in right subtree 
    getVerticalOrder(root->right, hd+1, m); 
} 
  
// The main function to print vertical order of a binary tree 
// with the given root 
void printBinaryTreeVerticalOrder(BinaryTreeNode<int>*  root) 
{ 
    // Create a map and store vertical oder in map using 
    // function getVerticalOrder() 
    map < int,vector<int> > m; 
    int hd = 0; 
    getVerticalOrder(root, hd,m); 
  
    // Traverse the map and print nodes at every horigontal 
    // distance (hd) 
    map< int,vector<int> > :: iterator it; 
    for (it=m.begin(); it!=m.end(); it++) 
    { 
        for (int i=0; i<it->second.size(); ++i) 
            cout << it->second[i] << " "; 
        cout << endl; 
    } 
} 

