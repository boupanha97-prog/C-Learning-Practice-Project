#include <stdio.h>

void Reay(int money);
void Dob(int money);

int main() {
    int n, i;
    int a[20];

    printf("បញ្ជូលលុយរបស់អ្នក: ");
    scanf("%d", &n);

    for (i = 1; n != 0; i++) {
        a[i] = n % 10;
        n = n / 10;
    }

    for (int j = i - 1; j > 0; j--) {
        if (a[j] != 0) {
            switch (j) {
                case 1:
                    Reay(a[j]);
                    break;
                case 2:
                    Dob(a[j]);
                    break;
                case 3:
                    Reay(a[j]);
                    printf("រយ");
                    break;
                case 4:
                    Reay(a[j]);
                    printf("ពាន់");
                    break;
                case 5:
                    Reay(a[j]);
                    printf("មុឺន");
                    break;
                case 6:
                    Reay(a[j]);
                    printf("សែន");
                    break;
                case 7:
                    Reay(a[j]);
                    printf("លាន");
                    break;
                case 8:
                    Reay(a[j]);
                    printf("កោដ");
                    break;
            }
        }
    }

    return 0;
}

void Reay(int money) {
    switch (money) {
        case 1:
            printf("មួយ");
            break;
        case 2:
            printf("ពីរ");
            break;
        case 3:
            printf("បី");
            break;
        case 4:
            printf("បួន");
            break;
        case 5:
            printf("ប្រាំ");
            break;
        case 6:
            printf("ប្រាំមួយ");
            break;
        case 7:
            printf("ប្រាំពីរ");
            break;
        case 8:
            printf("ប្រាំបី");
            break;
        case 9:
            printf("ប្រាំបួន");
            break;
    }
}

void Dob(int money) {
    switch (money) {
        case 1:
            printf("ដប់");
            break;
        case 2:
            printf("ម្ភៃ");
            break;
        case 3:
            printf("សាមសិប");
            break;
        case 4:
            printf("សែសិប");
            break;
        case 5:
            printf("ហាសិប");
            break;
        case 6:
            printf("ហុកសិប");
            break;
        case 7:
            printf("ចិតសិប");
            break;
        case 8:
            printf("ប៉ែតសិប");
            break;
        case 9:
            printf("កៅសិប");
            break;
    }
}
