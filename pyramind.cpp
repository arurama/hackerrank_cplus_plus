/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include <string>

using namespace std;

string reverse(string a){
    string data;
    for(int i=a.size();i>=0;i--){
        data=data+a[i];
    }
    return data;
};

string sp(int m){
    string data;
    for(int u=m;u>0;u--){
        data = data + " ";
    }
    return data;
}


int main()
{
    string input="12345";
    string spdata,rev_input;
    int si=input.size();
  //  spdata= sp(5);
    rev_input=reverse(input);
  //  cout<<rev_input;
    
   // for (int i=0;i<si;i++){
   int mo=0;
        for(int j=si;j>0;j--){
            
            spdata= sp(j);
            cout<<spdata;
            cout<<input.substr(0, mo);//+reverse(input.substr(0, mo));
            cout<<input[mo]<<reverse(input.substr(0, mo))<<"\n";
            mo++;
        }
        
//    }
    return 0;
}
