// https://practice.geeksforgeeks.org/problems/find-the-median0527/1#
// 
#include<bits/stdc++.h>
using namespace std;

//////////////////////////////////
//////      APPROACH 1      //////
//////////////////////////////////
// Time Complexity - O(nlogn)
class Solution
{
public:
	public:
		int find_median(vector<int> v)
		{
		    // Code here.
		    sort(v.begin(), v.end());
		    if(v.size()%2 == 1){
		        return v[v.size()/2];
		    }else{
		        return ((v[v.size()/2] + v[v.size()/2 - 1])/2);
		    }
		}
};

int main(){
    int T;
    cin >> T;
    while(T--)
    {
    	int n; 
    	cin >> n;
    	vector<int> v(n);
    	for(int i = 0; i < n; i++)
    		cin>>v[i];
    	Solution ob;
    	int ans = ob.find_median(v);
    	cout << ans <<"\n";
    }
	return 0;
}