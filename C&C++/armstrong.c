#include<stdio.h>
#include<math.h>
int main() {
    int start, end, num, digit, sum, temp, numDigits;

    printf("Enter the start and end of the range: ");
    scanf("%d %d", &start,&end);
     printf("Armstrong numbers between %d and %d are:\n", start, end);
    for (num = start; num <= end; num++) {
        sum = 0;
        temp = num;
        numDigits = 0;

        while (temp != 0) {
            numDigits++;
            temp /= 10;
        }

        temp = num;

        while (temp != 0) {
            digit = temp % 10;
            sum += pow(digit, numDigits);
            temp /= 10;
        }

        if (sum == num) {
            printf("%d\n", num);
        }
    }

    return 0;
}