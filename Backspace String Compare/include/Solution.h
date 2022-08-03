#ifndef SOLUTION_H
#define SOLUTION_H
#include <string>
#include <iostream>

using namespace std;

class Solution
{
    public:
    bool backspaceCompare(string s, string t) {
        string snew, tnew;
        int aux = 0;
        for(int i=0; i<s.length(); i++){
            if(s[i] != '#'){
                snew += s[i];
                aux++;
            }else{
                if(!snew.empty()){
                    snew.erase(snew.begin() + aux-1);
                    aux--;
                }
            }
        }

        aux = 0;
        for(int j=0; j<t.length(); j++){
            if(t[j] != '#'){
                tnew += t[j];
                aux++;
            }else{
                if(!tnew.empty()){
                    tnew.erase(tnew.begin() + aux-1);
                    aux--;
                }
            }
        }
        cout<<snew<<endl;
        cout<<tnew<<endl;
        if(snew == tnew){
            return true;
        }else{
            return false;
        }
    }
};

#endif // SOLUTION_H
