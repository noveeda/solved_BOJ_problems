#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int n;
    
    while(true){
        scanf("%d", &n);
        
        vector<int> vec;
        int sum = 0;
        
        if(n == -1) break;
        
        for(int i = 1; i < n; i++){
            if(n % i == 0) {
                vec.push_back(i);
                sum += i;
            }
        }
        
        if(sum != n) printf("%d is NOT perfect.\n", n);
        else{
            printf("%d = ", n);
            for(int i = 0; i < vec.size() - 1; i++){
                printf("%d + ", vec[i]);
            }
            printf("%d\n", vec.back());
        }
    }

    return 0;
}
