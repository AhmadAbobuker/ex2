/******************
Name:ahmad abu bakr
ID:213109192
Assignment: ex2
*******************/
#include <stdio.h>

int main() {
    int choice;

    while(1) {
        printf("Choose an option:\n");
        printf("\t1. Happy Face\n");
        printf("\t2. Balanced Number\n");
        printf("\t3. Generous Number\n");
        printf("\t4. Circle Of Joy\n");
        printf("\t5. Happy Numbers\n");
        printf("\t6. Festival Of Laughter\n");
        printf("\t7. Exit\n");

        scanf("%d", &choice);

        if(choice < 1 || choice > 7) {
            printf("This option is not available, please try again.\n");
            continue;
        }

        if(choice == 7) {
            printf("Thank you for your journey through Numeria!\n");
            break;
        }

        if(choice == 1) {  // Happy Face
            char e, n, m;
            int size;

            printf("Enter symbols for the eyes, nose, and mouth:\n");
            scanf(" %c %c %c", &e, &n, &m);

            printf("Enter face size:\n");
            scanf("%d", &size);
            while(size <= 0 || size % 2 == 0) {
                printf("The face's size must be an odd and positive number, please try again:\n");
                scanf("%d", &size);
            }

            // Eyes
            printf("%c", e);
            for(int i = 0; i < size-2; i++) printf(" ");
            printf("%c\n", e);

            // Nose
            for(int i = 0; i < (size-1)/2; i++) printf(" ");
            printf("%c\n", n);

            // Mouth
            printf("\\");
            for(int i = 0; i < size; i++) printf("%c", m);
            printf("/\n");
        }
        else if(choice == 2) {  // Balanced Number
            int num, original, digits = 0, sum1 = 0, sum2 = 0;

            printf("Enter a number:\n");
            scanf("%d", &num);
            while(num <= 0) {
                printf("Only positive number is allowed, please try again:\n");
                scanf("%d", &num);
            }

            original = num;

            // Count digits
            while(num > 0) {
                digits++;
                num /= 10;
            }

            num = original;
            int half = digits/2;

            // Calculate sums
            for(int i = 0; i < half; i++) {
                sum1 += num%10;
                num /= 10;
            }

            if(digits%2) num /= 10;

            for(int i = 0; i < half; i++) {
                sum2 += num%10;
                num /= 10;
            }

            if(sum1 == sum2)
                printf("This number is balanced and brings harmony!\n");
            else
                printf("This number isn't balanced and destroys harmony.\n");
        }
        else if(choice == 3) {  // Generous Number
            int num, sum = 0;

            printf("Enter a number:\n");
            scanf("%d", &num);
            while(num <= 0) {
                printf("Only positive number is allowed, please try again:\n");
                scanf("%d", &num);
            }

            for(int i = 1; i < num; i++) {
                if(num%i == 0) sum += i;
            }

            if(sum > num)
                printf("This number is generous!\n");
            else
                printf("This number does not share.\n");
        }
        else if(choice == 4) {  // Circle Of Joy
            int num, rev = 0, temp;
            int is_prime1 = 1, is_prime2 = 1;

            printf("Enter a number:\n");
            scanf("%d", &num);
            while(num <= 0) {
                printf("Only positive number is allowed, please try again:\n");
                scanf("%d", &num);
            }

            if(num == 1) {
                printf("The circle remains incomplete.\n");
                continue;
            }

            // Reverse number
            temp = num;
            while(temp > 0) {
                rev = rev*10 + temp%10;
                temp /= 10;
            }

            // Check original number
            for(int i = 2; i*i <= num; i++) {
                if(num%i == 0) {
                    is_prime1 = 0;
                    break;
                }
            }

            // Check reversed number
            if(rev < 2) is_prime2 = 0;
            else {
                for(int i = 2; i*i <= rev; i++) {
                    if(rev%i == 0) {
                        is_prime2 = 0;
                        break;
                    }
                }
            }

            if(is_prime1 && is_prime2)
                printf("This number completes the circle of joy!\n");
            else
                printf("The circle remains incomplete.\n");
        }
        else if(choice == 5) {  // Happy Numbers
            int n, current, sum, temp;

            printf("Enter a number:\n");
            scanf("%d", &n);
            while(n <= 0) {
                printf("Only positive number is allowed, please try again:\n");
                scanf("%d", &n);
            }

            printf("Between 1 and %d only these numbers bring happiness: ", n);

            for(int i = 1; i <= n; i++) {
                current = i;
                while(1) {
                    sum = 0;
                    while(current > 0) {
                        temp = current%10;
                        sum += temp*temp;
                        current /= 10;
                    }
                    if(sum == 1) {
                        printf("%d ", i);
                        break;
                    }
                    if(sum == 4) break;
                    current = sum;
                }
            }
            printf("\n");
        }
        else if(choice == 6) {  // Festival of Laughter
            int smile = 0, cheer = 0, max;
            char c;

            while(1) {
                smile = cheer = 0;
                printf("Enter a smile and cheer number:\n");

                // Clear input buffer
                while((c = getchar()) != '\n' && c != EOF);

                // Flexible input parsing
                if(scanf(" smile : %d , cheer : %d", &smile, &cheer) == 2 ||
                   scanf(" smile:%d,cheer:%d", &smile, &cheer) == 2) {
                    if(smile > 0 && cheer > 0 && smile != cheer) break;
                }

                printf("Only 2 different positive numbers in the given format are allowed for the festival, please try again:\n");
            }

            printf("Enter the maximum number of the festival:\n");
            scanf("%d", &max);
            while(max <= 0) {
                printf("Only positive maximum number is allowed, please try again:\n");
                scanf("%d", &max);
            }

            for(int i = 1; i <= max; i++) {
                if(i % smile == 0 && i % cheer == 0)
                    printf("Festival!\n");
                else if(i % smile == 0)
                    printf("Smile!\n");
                else if(i % cheer == 0)
                    printf("Cheer!\n");
                else
                    printf("%d\n", i);
            }
        }
    }

    return 0;
}