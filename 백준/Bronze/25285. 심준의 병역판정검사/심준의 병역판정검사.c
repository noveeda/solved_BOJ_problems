#include <stdio.h>

int main() {
    int T; // T: 테스트 케이스 개수
    int ht, wt; // ht: 신장, wt: 체중
    double bmi;  // BMI 값 계산을 위한 변수

    // 테스트 케이스 개수 입력 받기
    scanf("%d", &T);

    // T번 반복하여 입력과 계산을 수행
    while (T--) {
        // 신장(ht)과 체중(wt) 입력 받기
        scanf("%d %d", &ht, &wt);

        // BMI 계산: BMI = 체중(kg) / (신장(m) ^ 2)
        bmi = (double)wt / (double)((ht / 100.0) * (ht / 100.0));
        
        // 신장이 140.1 미만이면 6급
        if (ht < 140.1) {
            printf("6\n");
        }
        // 신장이 140 이상 146 미만이면 5급
        else if (ht < 146) {
            printf("5\n");
        }
        // 신장이 146 이상 159 미만이면 4급
        else if (ht < 159) {
            printf("4\n");
        }
        // 신장이 159 이상 161 미만이면 BMI에 따라 3급 또는 5급을 판별
        else if (ht < 161) {
            // BMI가 16.0 이상 35.0 미만이면 3급
            if (bmi >= 16.0 && bmi < 35.0) {
                printf("3\n");
            }
            // 그 외는 5급
            else {
                //printf("5\n");
                printf("4\n");
            }
        }
        // 신장이 161 이상 204 미만이면 BMI에 따라 1급, 2급, 3급, 4급, 5급을 판별
        else if (ht < 204) {
            // BMI가 20.0 이상 25.0 미만이면 1급
            if (bmi >= 20.0 && bmi < 25.0) {
                printf("1\n");
            }
            // BMI가 18.5 이상 20.0 미만이면 2급
            else if (
                (bmi >= 18.5 && bmi < 20.0) || 
                (bmi >= 25.0 && bmi < 30.0)
                ) {
                printf("2\n");
            }
            // BMI가 16.0 이상 18.5 미만이면 4급
            else if (
                (bmi >= 16.0 && bmi < 18.5) || 
                (bmi >= 30.0 && bmi < 35.0)
            ) {
                printf("3\n");
            }
            // BMI가 30.0 이상 35.0 미만이면 3급
            else {
                printf("4\n");
            }
        }
        else{
            printf("4\n");
        }
    }

    return 0;
}