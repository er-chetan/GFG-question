//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution
{
    public:
    //Function to check if brackets are balanced or not.
    bool ispar(string x)
    {   
        stack<int> s;
        bool find=false;
        int count=0;
         for(int i=x.size()-1;i>=0;i--){
             if(x[i]==']' || x[i]=='}' || x[i]==')'){
                 find=true;
                s.push(x[i]);
             }else{
             	count++;
                 if((x[i]=='[' && s.size()>0) && ']'==s.top()){
                 	count--;
                 	s.pop();
				 } 
                 if((x[i]=='(' && s.size()>0) && ')'==s.top()){
                 	count--;
                 	s.pop();
				 }
                 if((x[i]=='{' && s.size()>0) && '}'==s.top()){
                 	count--;
                 	s.pop();
				 }
             }
         }
         
        if(s.size()==0 && count==0) return true;
        return false;
    }

};

//{ Driver Code Starts.

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
}
// } Driver Code Ends