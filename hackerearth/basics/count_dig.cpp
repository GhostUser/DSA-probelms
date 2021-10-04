#include <iostream>
#include <list>
#include <string>
#include <algorithm> 

using namespace std;

int main(){
    string s;
    cin>>s;
    int l= s.length();
    int ze=0,on=0,tw=0,th=0,fo=0,fi=0,si=0,se=0,ei=0,ni=0;
    for(int i=0; i<l;i++){
        if(s[i]=="0"){
            ze++;
        }else if(s[i]=="1"){
            on++;
        }else if(s[i]=="2"){
            tw++;
        }else if(s[i]=="3"){
            th++;
        }else if(s[i]=="4"){
            fo++;
        }else if(s[i]=="5"){
            fi++;
        }else if(s[i]=="6"){
            si++;
        }else if(s[i]=="7"){
            se++;
        }else if(s[i]=="8"){
            ei++;
        }else if(s[i]=="9"){
            ni++;
        }    
    }
    cout<<0<<ze<<endl;
    cout<<1<<on<<endl;
    cout<<2<<tw<<endl;
    cout<<3<<th<<endl;
    cout<<4<<fo<<endl;
    cout<<5<<fi<<endl;
    cout<<6<<si<<endl;
    cout<<7<<se<<endl;
    cout<<8<<ei<<endl;
    cout<<9<<ni<<endl;
    return 0;
}