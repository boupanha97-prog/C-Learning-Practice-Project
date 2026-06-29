#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    printf("Welcome to Big Money \n");
    printf("____ \n");
    
    int ln;
    int m;
    int win=0;
    
    printf("ជ្រើសរើសលេខសំណាងរបស់អ្នក: 1.ក្តាម, 2.ខ្លា, 3.បង្កង, 4.មាន់, 5.ឃ្លោក, 6.ត្រី \n");
    
    printf("ជ្រើសរើស: " );
    scanf("%d", &ln);
    
    printf("ដាក់លុយ: ");
    scanf("%d", &m);

    printf("លទ្ធផល: ");
    
    srand(time(0));
    int i = rand()%6+1;
    int j = rand()%6+1;
    int k = rand()%6+1;
    
    switch (i){
        case 1:
            printf("ក្តាម");
            break;
        case 2:
            printf("ខ្លា");
            break;
        case 3:
            printf("បង្កង");
            break;
        case 4:
            printf("មាន់");
            break;
        case 5:
            printf("ឃ្លោក");
            break;
        case 6:
            printf("ត្រី");
            break;
    }
    
    printf(" ");
    switch (j){        case 1:
            printf("ក្តាម");
            break;
        case 2:
            printf("ខ្លា");
            break;
        case 3:
            printf("បង្កង");
            break;
        case 4:
            printf("មាន់");
            break;
        case 5:
            printf("ឃ្លោក");
            break;
        case 6:
            printf("ត្រី");
            break;
    }
    
    printf(" ");
    switch (k){        case 1:
            printf("ក្តាម");
            break;
        case 2:
            printf("ខ្លា");
            break;
        case 3:
            printf("បង្កង");
            break;
        case 4:
            printf("មាន់");
            break;
        case 5:
            printf("ឃ្លោក");
            break;
        case 6:
            printf("ត្រី");
            break;
    }
    
    if (i==ln){
       win = win + m; 
    }
    if (j==ln){
        win = win + m;
    }
    if (k==ln){
        win = win + m;
    }
    
    if (win==0){
        printf("\nដាក់លុយចាក់ថែម");
    }
    else {
        printf("\n ខ្មោចអោយ អ្នកឈ្នះបាន: %d", win);
        printf("\n ចាក់ថែមដើម្បីខ្លាយជាអ្នកមាន");
    }
    return 0;
}