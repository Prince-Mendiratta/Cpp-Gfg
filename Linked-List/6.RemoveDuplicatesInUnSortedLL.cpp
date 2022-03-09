// { Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h> 
using namespace std; 

struct Node
{
    int data;
    struct Node* next;
    
    Node(int x){
        data = x;
        next = NULL;
    }
};

void printList(Node* node) 
{ 
    while (node != NULL) { 
        cout << node->data; 
        node = node->next; 
    }  
    cout<<"\n";
} 


 // } Driver Code Ends
//User function template for C++

/* 

struct Node
{
    int data;
    struct Node* next;
    
    Node(int x){
        data = x;
        next = NULL;
    }
};

*/

class Solution
{
    public:
    Node* addOne(Node *head) 
    {
        // Your Code here
        // return head of list after adding one
        struct Node *last = head->next, *prev = head, *temp = head;
        while(last->next != NULL){
            if(prev->data == 9 && last->data == 9){
                temp = prev;
            }
            prev = last;
            last = last->next;
        }
        if(last->data != 9){
            last->data++;
        }else{
            if(temp->data == 9){
                temp = new Node(0);
                temp->next = head;
                head = temp;
            }
            temp->data = temp->data++;
            temp = temp->next;
            while(temp != NULL){
                temp->data = 0;
                temp = temp->next;
            }
        }
    }
};

// { Driver Code Starts.

int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        
        Node* head = new Node( s[0]-'0' );
        Node* tail = head;
        for(int i=1; i<s.size(); i++)
        {
            tail->next = new Node( s[i]-'0' );
            tail = tail->next;
        }
        Solution ob;
        head = ob.addOne(head);
        printList(head); 
    }
    return 0; 
} 
  // } Driver Code Ends