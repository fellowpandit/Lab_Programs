#include <iostream>
using namespace std;

/*
 Design a Program in C++ for the following operations on Strings.
a. Read a main String (STR), a Pattern String (PAT) and a Replace String
(REP)
b. Perform Pattern Matching Operation: Find and Replace all
occurrences of PAT in STR with REP if PAT exists in STR. Report suitable
messages in case PAT does not exist in STR
 */

class String{
private:
    string STR, PAT, REP;
public:
    String(string STR, string PAT, string REP){
        this->STR = STR;
        this->REP = REP;
        this->PAT = PAT;
    }

    int patternPosition(){
        int lenSTR = STR.length();
        for(int i=0;i<lenSTR;i++){
            string str = "";
            for(int j=i;j<lenSTR;j++){
                str+=STR[j];
                if(str == PAT){
                    return i;
                }
            }
        }
        return -1;
    };

    string patternReplace(){
        int lenPAT = PAT.length();
        int lenSTR = STR.length();
        int posPAT = patternPosition();
        int i;
        if(posPAT==-1){
            return STR;
        }
        string newSTR = "";
        for(i=0;i<posPAT;i++){
            newSTR+=STR[i];
        }
        newSTR+=REP;
        for(i=posPAT+lenPAT;i<lenSTR;i++){
            newSTR+=STR[i];
        }
        STR = newSTR;
        return STR;
    }
};

int main(){
    string STR, PAT, REP;
    cout<<"Enter the main string: ";
    cin>>STR;
    cout<<"Enter the pattern: ";
    cin>>PAT;
    cout<<"Enter the replace string: ";
    cin>>REP;
    String str(STR,PAT,REP);
    string newSTR= str.patternReplace();

    if(newSTR!=STR){
        cout<<"The new string is: "<<newSTR;
    }
    else{
        cout<<"Pattern Not Found!";
    }


}
