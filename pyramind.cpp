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
    
        for(int j=input.size(), mo = 0;j>0;j--,mo++){
            cout<<sp(j)<<input.substr(0, mo)<<input[mo]<<reverse(input.substr(0, mo))<<"\n";
        }
        
//    }
    return 0;
}
