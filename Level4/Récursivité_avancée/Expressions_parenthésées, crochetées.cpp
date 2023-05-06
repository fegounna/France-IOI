#include <iostream>
#include <stack>
using namespace std;
int main(){
    string s;
    getline(cin,s);
    stack<char> p;
    bool test=true;
    for(int i=0;i<int(s.size());i++){
        if(s[i]=='{'||s[i]=='['||s[i]=='('||s[i]=='<'){
            p.push(s[i]);
           }
        else if(s[i]=='}'){
            if(p.empty()||p.top()!='{'){
                test=false;
                break;
            }
            p.pop();
        }
        else if(s[i]==')'){
            if(p.empty()||p.top()!='('){
                test=false;
                break;
            }
            p.pop();
        }
        else if(s[i]==']'){
            if(p.empty()||p.top()!='['){
                test=false;
                break;
            }
            p.pop();
        }
        else if(s[i]=='>'){
            if(p.empty()||p.top()!='<'){
                test=false;
                break;
            }
            p.pop();
        }
    }
    if(test&&p.empty())
        cout<<"yes";
    else
        cout<<"no";
}
