#include <iostream>
#include <string>

using namespace std;

int main() {
    string str;
    
    int i, j, N, count;
    

    

    cin >> N;
    count = N;

    for (int a = 0; a < N; a++) {

        cin >> str;
        int l = str.length();

        for (i = 0; i < l - 1; i++) {

            bool s = false;
            bool overlap = false;
            
            for (j = i+1; j < l; j++) {

                // 나뉘어 떨어졌는지 확인.
                if (str[i] != str[j]) s = true;
                
                if (s && (str[i] == str[j])) {
                    overlap = true;
                    count--;
                }

                //cout << "(" << str[i] << ", " << str[j] << ", " << overlap << ") ";
                if (overlap) break;
            }
            //cout << endl;
            if (overlap) break;
            
        }
    }
    cout << count;
}