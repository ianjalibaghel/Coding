class Solution {
public:
    bool isValid(string s) {
        stack<char> sk;
        int n=s.length();
        cout<<n;
        if(n%2!=0)
            return 0;
        
        int i=0;
        while(i<n){
            char ch=s[i];
           if(ch=='(' || ch=='[' || ch=='{'){
            sk.push(ch);
            i++;
           } 

           else{
            if(!sk.empty()){
                char top=sk.top();
                if((ch==')' && top=='(')||(ch==']' && top=='[')||(ch=='}' && top=='{')){
                    sk.pop();
                    i++;
                }
                else{
                    return false;
                }
            }
            else{
                return false;
            }
           }

        }

        if(sk.empty()){
            return true;
        }
       return false;
    }
};