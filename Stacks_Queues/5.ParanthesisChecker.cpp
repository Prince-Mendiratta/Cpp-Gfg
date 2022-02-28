// https://practice.geeksforgeeks.org/problems/parenthesis-checker2744/1#
// https://leetcode.com/problems/valid-parentheses/description/

// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends

class MyStack{
    private:
        int arr[1000];
        int top;
    public:
        MyStack() {top = -1;}
        int pop();
        void push(int);
};

void MyStack::push(int x){
    if(top == 999) return;
    arr[++top] = x;
}

int MyStack::pop() {
    if(top == -1) return -1;
    top--;
    return arr[top+1];
}

class Solution
{
    public:
    //Function to check if brackets are balanced or not.
    bool ispar(string x)
    {
        MyStack sq = MyStack();
        bool flag = false;
        int out;
        for(int i = 0; i < x.size(); i++){
            char bracket = x[i];
            switch(bracket){
                case '(':
                    sq.push(0);
                    break;
                case ')':
                    out = sq.pop();
                    if(out != 0){
                        flag = true;
                        break;
                    }
                    break;
                case '[':
                    sq.push(1);
                    break;
                case ']':
                    out = sq.pop();
                    if(out != 1){
                        flag = true;
                        break;
                    }
                    break;
                case '{':
                    sq.push(2);
                    break;
                case '}':
                    out = sq.pop();
                    if(out != 2){
                        flag = true;
                        break;
                    }
                    break;
                default:
                    cout<<"eh";
            }
            if(flag){
                return false;
            }
        }
        int f = sq.pop();
        if(f != -1){
            return false;
        }
        return true;
    }

};

// { Driver Code Starts.

int main()
{
   int t;
   string a;
   cin>>t;
   while(t--)
   {
       cin>>a;
       Solution obj;
       if(obj.ispar(a))
        cout<<"balanced"<<endl;
       else
        cout<<"not balanced"<<endl;
   }
}  // } Driver Code Ends