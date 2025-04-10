/******************
Name: Ahmad abu bakr
ID: 213109192
Assignment: ex2
*******************/

#include <stdio.h>

int main() {
    int equal = 0;
    int sumCheer = 0;
    int sumSmile = 0;
    int powerOf10 = 1;
    int digitsCounter = 0;
    int tryCount = -1;
    int errorCounter = 0, smilePosition = 0, cheerPosition = 0, commaPosition = 0, numbersValidator = 0, endOfLinePosition = 0, upNormality = 0;
    int number10, sum10 = 0;
    int n1, n2 = 0;
    int temp;
    int temp2;
    int primeCounter = 0;
    int n, i;
    int num1 = 0, num2 = 0;

    printf("Choose an option:\n\n%s%s%s%s%s%s%s",
           "    1. Happy Face\n\n",
           "    2. Balanced Number\n\n",
           "    3. Generous Number\n\n",
           "    4. Circle Of Joy\n\n",
           "    5. Happy Numbers\n\n",
           "    6. Festival Of Laughter\n\n",
           "    7. Exit\n\n");

    int option;
    scanf("%d", &option);

    while (option > 7 || option < 1) {
        printf("This option is not available, please try again.\n");
        scanf("%d", &option);
    }

    switch (option) {
        case 1:
            printf("Happy Face\n");
            char eyes, mouth, nose;
            printf("Enter the Eyes, Nose and Mouth of the Happy Face:\n");
            scanf(" %c %c %c", &eyes, &nose, &mouth);
            int odd;
            printf("Enter a positive and odd number:\n");
            scanf("%d", &odd);
            while ((odd % 2 == 0) || (odd < 0)) {
                printf("Odd Positive number is not valid, Please Enter it again:\n");
                scanf("%d", &odd);
            }
            printf("%c ", eyes);
            for (int i = 0; i < (odd - 1); i++) {
                printf(" ");
            }
            printf("%c\n", eyes);

            for (int i = 0; i < ((odd) / 2 + 1); i++) {
                printf(" ");
            }
            printf("%c\n", nose);

            printf("\\");
            for (int i = 0; i < odd; i++) {
                printf("%c", mouth);
            }
            printf("/");
            break;

        case 2:
            printf("Enter a number:");
            int number, numberTemp, sum1 = 0, numberTemp2 = 0, sum2 = 0;
            digitsCounter = 1;
            scanf("%d", &number);
            while (number < 0) {
                printf("Only positive number is allowed, please try again:\n");
                scanf("%d", &number);
            }
            numberTemp = number;
            numberTemp2 = number;
            for (int i = 0; i < 10; i++) {
                number = number / 10;
                if (number == 0) {
                    break;
                }
                digitsCounter++;
            }
            if (digitsCounter % 2 == 1) {
                for (int i = 0; i < digitsCounter / 2; i++) {
                    sum1 = sum1 + (numberTemp % 10);
                    numberTemp = numberTemp / 10;
                }
                for (int i = 0; i < (digitsCounter / 2) + 1; i++) {
                    numberTemp2 = numberTemp2 / 10;
                }
                for (int i = 0; i < digitsCounter / 2; i++) {
                    sum2 = sum2 + (numberTemp2 % 10);
                    numberTemp2 = numberTemp2 / 10;
                }
            } else {
                for (int i = 0; i < digitsCounter / 2; i++) {
                    sum1 = sum1 + (numberTemp % 10);
                    numberTemp = numberTemp / 10;
                }
                for (int i = 0; i < (digitsCounter / 2) - 1; i++) {
                    numberTemp2 = numberTemp2 / 10;
                }
                for (int i = 0; i < digitsCounter / 2; i++) {
                    numberTemp2 = numberTemp2 / 10;
                    sum2 = sum2 + (numberTemp2 % 10);
                }
            }
            if (sum1 == sum2) {
                printf("This number is balanced and brings harmony!\n");
            } else {
                printf("This number isn't balanced and destroys harmony.\n");
            }
            break;

        case 3:
            printf("Enter a number:");
            scanf("%d", &number10);
            while (number10 < 0) {
                printf("Only positive number is allowed, please try again:\n");
                scanf("%d", &number10);
            }
            for (int i = 1; i < number10; i++) {
                if (number10 % i == 0) {
                    sum10 = sum10 + i;
                }
            }
            if (sum10 > number10) {
                printf("This number is generous!\n");
            } else {
                printf("This number does not share.\n");
            }
            break;

        case 4:
            printf("Enter a number:");
            digitsCounter = 1;
            scanf("%d", &n1);
            temp = n1;
            temp2 = n1;
            while (n1 < 0) {
                printf("Only positive number is allowed, please try again:\n");
                scanf("%d", &n1);
            }
            for (int i = 0; i < 10; i++) {
                n1 = n1 / 10;
                if (n1 == 0) {
                    break;
                }
                digitsCounter++;
            }
            int iinverse = digitsCounter - 1;
            int power = 1;
            for (int i = 0; i < digitsCounter; i++) {
                for (int g = 0; g < iinverse; g++) {
                    power = power * 10;
                }
                iinverse--;
                n2 = n2 + ((temp % 10) * power);
                temp = temp / 10;
                power = 1;
            }
            for (int i = 2; i < temp2 - 1; i++) {
                if ((temp2 % i) == 0) {
                    primeCounter++;
                    break;
                }
            }
            for (int i = 2; i < n2 - 1; i++) {
                if (n2 % i == 0) {
                    primeCounter++;
                    break;
                }
            }
            if ((n2 == 0) || (n2 == 1)) {
                printf("The circle remains incomplete.\n");
            } else if (primeCounter == 0) {
                printf("This number completes the circle of joy!\n");
            } else {
                printf("The circle remains incomplete.\n");
            }
            break;

        case 5:
            printf("Enter a number: ");
            scanf("%d", &n);
            while (n <= 0) {
                printf("Only positive number is allowed, please try again: ");
                scanf("%d", &n);
            }
            printf("Between 1 and %d only these numbers bring happiness: ", n);
            for (i = 1; i <= n; i++) {
                int temp = i;
                while (1) {
                    int sum = 0;
                    int current = temp;
                    while (current > 0) {
                        int digit = current % 10;
                        sum += digit * digit;
                        current /= 10;
                    }
                    if (sum == 1) {
                        printf("%d ", i);
                        break;
                    } else if (sum == 4) {
                        break;
                    }
                    temp = sum;
                }
            }
            break;

        case 6:
            printf("Enter a smile and cheer number:\n");
            char phrase[1000];
            // We need the user to give us his input and to re-enter it if it's not in a certain style.
            while ((errorCounter != 4) || (numbersValidator != 2) || (upNormality != 0) || (equal != 0)) {
                if (tryCount > 0) {
                    printf("Only 2 different positive numbers in the given format are allowed for the festival, please try again:\n");
                }
                // Filling the array with garbage values to avoid random values so we can manipulate the string each time it restarts.
                for (int i = 0; i < 1000; i++) {
                    phrase[i] = '\0';
                }
                // Restarting the counters for each new input after reset.
                errorCounter = 0;
                smilePosition = 999; // 999 is a flag to indicate that it has not been set yet.
                cheerPosition = 0;
                commaPosition = 0;
                numbersValidator = 0;
                endOfLinePosition = 0;
                upNormality = 0;
                digitsCounter = 0;
                powerOf10 = 1;
                equal = 0;
                sumSmile = 0;
                sumCheer = 0;
                // Asking user for input until Enter is pressed.
                for (int i = 0; i < 1000; i++) {
                    phrase[i] = getchar();
                    if (phrase[i] == '\n') {
                        endOfLinePosition = i;
                        break;
                    }
                }
                // Pattern recognition in the input string: detecting "smile:".
                for (int i = 0; i < 1000; i++) {
                    if ((phrase[i] == 's') && (phrase[i + 1] == 'm') && (phrase[i + 2] == 'i') &&
                        (phrase[i + 3] == 'l') && (phrase[i + 4] == 'e') && (phrase[i + 5] == ':')) {
                        errorCounter++;
                        smilePosition = i;
                    }
                }
                // Comma detection.
                for (int i = 0; i < 1000; i++) {
                    if (phrase[i] == ',') {
                        errorCounter++;
                        commaPosition = i;
                    }
                }
                // Detect "cheer:".
                for (int i = 0; i < 1000; i++) {
                    if ((phrase[i] == 'c') && (phrase[i + 1] == 'h') && (phrase[i + 2] == 'e') &&
                        (phrase[i + 3] == 'e') && (phrase[i + 4] == 'r') && (phrase[i + 5] == ':')) {
                        errorCounter++;
                        cheerPosition = i;
                    }
                }
                // Order validation.
                if ((commaPosition > smilePosition) && (commaPosition < cheerPosition)) {
                    errorCounter++;
                }
                // Validate characters between "smile:" and ",".
                if (errorCounter == 4) {
                    for (int i = smilePosition + 6; i < commaPosition; i++) {
                        if (phrase[i] != '0' && phrase[i] != '1' && phrase[i] != '2' && phrase[i] != '3' &&
                            phrase[i] != '4' && phrase[i] != '5' && phrase[i] != '6' && phrase[i] != '7' &&
                            phrase[i] != '8' && phrase[i] != '9' && phrase[i] != ' ') {
                            errorCounter--;
                        }
                    }
                }
                // Check for at least one digit between "smile:" and ",".
                if (errorCounter == 4) {
                    for (int i = smilePosition + 6; i < commaPosition; i++) {
                        if (phrase[i] == '0' || phrase[i] == '1' || phrase[i] == '2' || phrase[i] == '3' ||
                            phrase[i] == '4' || phrase[i] == '5' || phrase[i] == '6' || phrase[i] == '7' ||
                            phrase[i] == '8' || phrase[i] == '9') {
                            numbersValidator++;
                            break;
                        }
                    }
                }
                // Same check for "cheer:" and end of line.
                if (errorCounter == 4) {
                    for (int i = cheerPosition + 6; i < endOfLinePosition; i++) {
                        if (phrase[i] != '0' && phrase[i] != '1' && phrase[i] != '2' && phrase[i] != '3' &&
                            phrase[i] != '4' && phrase[i] != '5' && phrase[i] != '6' && phrase[i] != '7' &&
                            phrase[i] != '8' && phrase[i] != '9' && phrase[i] != ' ') {
                            errorCounter--;
                        }
                    }
                }
                if (errorCounter == 4) {
                    for (int i = cheerPosition + 6; i < endOfLinePosition; i++) {
                        if (phrase[i] == '0' || phrase[i] == '1' || phrase[i] == '2' || phrase[i] == '3' ||
                            phrase[i] == '4' || phrase[i] == '5' || phrase[i] == '6' || phrase[i] == '7' ||
                            phrase[i] == '8' || phrase[i] == '9') {
                            numbersValidator++;
                            break;
                        }
                    }
                }
                // Final check: before the line.
                if (errorCounter == 4 && numbersValidator == 2) {
                    for (int i = 0; i < smilePosition; i++) {
                        if (phrase[i] != '\0' && phrase[i] != '\n') {
                            upNormality++;
                        }
                    }
                }
                // Final check: after the line.
                if (errorCounter == 4 && numbersValidator == 2) {
                    for (int i = endOfLinePosition + 1; i < 1000; i++) {
                        if (phrase[i] != '\0' && phrase[i] != '\n') {
                            upNormality++;
                        }
                    }
                }
                // Check if the two numbers are equal.
                if (errorCounter == 4 && numbersValidator == 2 && upNormality == 0) {
                    for (int i = smilePosition + 6; i < commaPosition; i++) {
                        if (phrase[i] == '0' || phrase[i] == '1' || phrase[i] == '2' || phrase[i] == '3' ||
                            phrase[i] == '4' || phrase[i] == '5' || phrase[i] == '6' || phrase[i] == '7' ||
                            phrase[i] == '8' || phrase[i] == '9') {
                            digitsCounter++;
                        }
                    }
                    for (int i = 0; i < digitsCounter - 1; i++) {
                        powerOf10 = powerOf10 * 10;
                    }
                    for (int i = smilePosition + 6; i < commaPosition; i++) {
                        if (phrase[i] == '0' || phrase[i] == '1' || phrase[i] == '2' || phrase[i] == '3' ||
                            phrase[i] == '4' || phrase[i] == '5' || phrase[i] == '6' || phrase[i] == '7' ||
                            phrase[i] == '8' || phrase[i] == '9') {
                            sumSmile = sumSmile + (phrase[i] - 48) * powerOf10;
                            powerOf10 = powerOf10 / 10;
                        }
                    }
                }
                digitsCounter = 0;
                powerOf10 = 1;
                if (errorCounter == 4 && numbersValidator == 2 && upNormality == 0) {
                    for (int i = cheerPosition + 6; i < endOfLinePosition; i++) {
                        if (phrase[i] == '0' || phrase[i] == '1' || phrase[i] == '2' || phrase[i] == '3' ||
                            phrase[i] == '4' || phrase[i] == '5' || phrase[i] == '6' || phrase[i] == '7' ||
                            phrase[i] == '8' || phrase[i] == '9') {
                            digitsCounter++;
                        }
                    }
                    for (int i = 0; i < digitsCounter - 1; i++) {
                        powerOf10 = powerOf10 * 10;
                    }
                    for (int i = cheerPosition + 6; i < endOfLinePosition; i++) {
                        if (phrase[i] == '0' || phrase[i] == '1' || phrase[i] == '2' || phrase[i] == '3' ||
                            phrase[i] == '4' || phrase[i] == '5' || phrase[i] == '6' || phrase[i] == '7' ||
                            phrase[i] == '8' || phrase[i] == '9') {
                            sumCheer = sumCheer + (phrase[i] - 48) * powerOf10;
                            powerOf10 = powerOf10 / 10;
                        }
                    }
                    if (sumSmile == sumCheer) {
                        equal++;
                    }
                }
                tryCount++;
            }
            int maxNumber = 0;
            printf("Enter the maximum number of the festival:\n");
            scanf("%d", &maxNumber);
            while (maxNumber < 0) {
                printf("Only positive maximum number is allowed, please try again:\n");
                scanf("%d", &maxNumber);
            }
            for (int i = 1; i <= maxNumber; i++) {
                if (i % sumSmile == 0 && i % sumCheer == 0) {
                    printf("Festival!\n");
                } else if (i % sumSmile == 0) {
                    printf("Smile!\n");
                } else if (i % sumCheer == 0) {
                    printf("Cheer!\n");
                } else {
                    printf("%d\n", i);
                }
            }
            break;

        case 7:
            printf("Thank you for your journey through Numerial!\n");
            break;
    }
    return 0;
}
