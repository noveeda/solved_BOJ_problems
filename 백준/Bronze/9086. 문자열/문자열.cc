#include <iostream>

using namespace std;

void ps(const string str){
    if(str.length() == 1) {
        cout << str << str << "\n";
    }
    else{
        cout << str[0] << str[str.length() - 1] << "\n";    
    }
}
int main(){
    string str;
    int t;
    cin >> t;
    
    for(int i = 0 ; i < t; i++){
        cin >> str;
        ps(str);
    }
    
    
    
    return 0;
}