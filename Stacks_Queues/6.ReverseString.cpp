// https://practice.geeksforgeeks.org/problems/reverse-a-string-using-stack/1

// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;
char* reverse(char *str, int len);
int main()
{
    long long int t;
    cin>>t;
    while(t--)
    {
        char str[10000];
        cin>>str;
        long long int len=strlen(str);
        char *ch=reverse(str,len);
        for(int i=0;i<len;i++)
        {
            cout<<ch[i];
        }
        cout<<endl;
    }
        return 0;
}

// } Driver Code Ends

class MyStack {
    private:
        char arr[101];
        int top;
    public:
        MyStack() {top = -1;}
        void push(char);
        char pop();
};

void MyStack::push(char x){
    if(top == 100) return;
    arr[++top] = x;
};

char MyStack::pop(){
    if(top == -1) return -1;
    top--;
    return arr[top+1];
}

//return the address of the string
char* reverse(char *S, int len)
{
    //code here
    MyStack sq = MyStack();
    for(int i = 0; i < len; i++){
        sq.push(S[i]);
    }
    for(int i = 0; i < len; i++){
        char temp = sq.pop();
        S[i] = temp;
    }
    return S;
}