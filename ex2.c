/******************
Name:ahmad abu bakr
ID:213109192
Assignment: ex2
*******************/

#include <stdio.h>

int main() {
    int digitscounter=0 ;
    int Equal = 0;
    int sumcheer = 0;
    int sumsmile = 0;
    int powerof10 = 1;
    int try = -1;
    int ErrorCounter = 0, SmilePosition = 0, CheerPosition = 0, CommaPosition = 0, NumbersValidater = 0, EndOfLinePosition = 0, UpNormality = 0;
    int number10, sum10 = 0;
    int n1, n2 = 0;
    int temp;
    int temp2;
    int primecounter = 0;
    int n, i;

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
    case 1: {
        printf("Happy Face\n");
        char eyes, mouth, nose;
        printf("Enter symbols for the eyes, nose, and mouth:\n");
        scanf(" %c %c %c", &eyes, &nose, &mouth);
        int odd;
        printf("Enter face size:\n");
        scanf("%d", &odd);
        while ((odd % 2 == 0) || (odd < 0)) {
            printf("The face's size must be an odd and positive number, please try again:\n");
            scanf("%d", &odd);
        }
        printf("%c", eyes);
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
    }
    case 2: {
        printf("Enter a number: ");
        int number, numbertemp, sum1 = 0, numbertemp2 = 0, sum2 = 0;
        int digitscounter = 1;
        scanf("%d", &number);
        while (number < 0) {
            printf("Only positive number is allowed, please try again:\n");
            scanf("%d", &number);
        }
        numbertemp = number;
        numbertemp2 = number;
        for (int i = 0; i < 10; i++) {
            number = number / 10;
            if (number == 0) {
                break;
            }
            digitscounter++;
        }
        if (digitscounter % 2 == 1) {
            for (int i = 0; i < digitscounter / 2; i++) {
                sum1 = sum1 + (numbertemp % 10);
                numbertemp = numbertemp / 10;
            }
            for (int i = 0; (i < (digitscounter / 2) + 1); i++) {
                numbertemp2 = numbertemp2 / 10;
            }
            for (int i = 0; i < digitscounter / 2; i++) {
                sum2 = sum2 + (numbertemp2 % 10);
                numbertemp2 = numbertemp2 / 10;
            }
        }
        else {
            for (int i = 0; i < digitscounter / 2; i++) {
                sum1 = sum1 + (numbertemp % 10);
                numbertemp = numbertemp / 10;
            }
            for (int i = 0; (i < ((digitscounter / 2) - 1)); i++) {
                numbertemp2 = numbertemp2 / 10;
            }
            for (int i = 0; i < digitscounter / 2; i++) {
                numbertemp2 = numbertemp2 / 10;
                sum2 = sum2 + (numbertemp2 % 10);
            }
        }
        if (sum1 == sum2) {
            printf("This number is balanced and brings harmony!\n");
        }
        else {
            printf("This number isn't balanced and destroys harmony.\n");
        }
        break;
    }
    case 3: {
        printf("Enter a number: ");
        scanf("%d", &number10);
        while (number10 < 0) {
            printf("Only positive number is allowed, please try again:\n");
            scanf("%d", &number10);
        }
        sum10 = 0;
        for (int i = 1; i < number10; i++) {
            if (number10 % i == 0) {
                sum10 += i;
            }
        }
        if (sum10 > number10) {
            printf("This number is generous!\n");
        }
        else {
            printf("This number does not share.\n");
        }
        break;
    }
    case 4: {
        printf("Enter a number: ");
        int digitscounter = 1;
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
            digitscounter++;
        }
        int iinverse = digitscounter - 1;
        int power = 1;
        n2 = 0;
        for (int i = 0; i < digitscounter; i++) {
            for (int g = 0; g < iinverse; g++) {
                power *= 10;
            }
            iinverse--;
            n2 += ((temp % 10) * power);
            temp /= 10;
            power = 1;
        }
        primecounter = 0;
        for (int i = 2; i < temp2 - 1; i++) {
            if ((temp2 % i) == 0) {
                primecounter++;
                break;
            }
        }
        for (int i = 2; i < n2 - 1; i++) {
            if (n2 % i == 0) {
                primecounter++;
                break;
            }
        }
        if ((n2 == 0) || (n2 == 1)) {
            printf("The circle remains incomplete.\n");
        }
        else if (primecounter == 0) {
            printf("This number completes the circle of joy!\n");
        }
        else {
            printf("The circle remains incomplete.\n");
        }
        break;
    }
    case 5: {
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
                }
                else if (sum == 4) {
                    break;
                }
                temp = sum;
            }
        }
        printf("\n");
        break;
    }
    case 6: {
        printf("Enter a smile and cheer number:\n");
        char Phrase[1000];
        while ((ErrorCounter != 4) || (NumbersValidater != 2) || (UpNormality != 0) || (Equal != 0)) {
            if (try > 0) {
                printf("Only 2 different positive numbers in the given format are allowed for the festival, please try again:\n");
            }
            for (int i = 0; i < 1000; i++) Phrase[i] = '\0';
            ErrorCounter = 0;
            SmilePosition = 999;
            CheerPosition = 0;
            CommaPosition = 0;
            NumbersValidater = 0;
            EndOfLinePosition = 0;
            UpNormality = 0;
            digitscounter = 0;
            powerof10 = 1;
            Equal = 0;
            sumsmile = 0;
            sumcheer = 0;

            int c;
            while ((c = getchar()) != '\n' && c != EOF);

            for (int i = 0; i < 1000; i++) {
                Phrase[i] = getchar();
                if (Phrase[i] == '\n') {
                    EndOfLinePosition = i;
                    break;
                }
            }
            for (int i = 0; i < 1000; i++) {
                if ((Phrase[i] == 's') && (Phrase[i+1] == 'm') && (Phrase[i+2] == 'i') &&
                    (Phrase[i+3] == 'l') && (Phrase[i+4] == 'e') && (Phrase[i+5] == ':')) {
                    ErrorCounter++;
                    SmilePosition = i;
                }
            }
            for (int i = 0; i < 1000; i++) {
                if (Phrase[i] == ',') {
                    ErrorCounter++;
                    CommaPosition = i;
                }
            }
            for (int i = 0; i < 1000; i++) {
                if ((Phrase[i] == 'c') && (Phrase[i+1] == 'h') && (Phrase[i+2] == 'e') &&
                    (Phrase[i+3] == 'e') && (Phrase[i+4] == 'r') && (Phrase[i+5] == ':')) {
                    ErrorCounter++;
                    CheerPosition = i;
                }
            }
            if ((CommaPosition > SmilePosition) && (CommaPosition < CheerPosition)) {
                ErrorCounter++;
            }
            if (ErrorCounter == 4) {
                for (int i = SmilePosition + 6; i < CommaPosition; i++) {
                    if (!((Phrase[i] >= '0' && Phrase[i] <= '9') || Phrase[i] == ' ')) {
                        ErrorCounter--;
                    }
                }
            }
            if (ErrorCounter == 4) {
                for (int i = SmilePosition + 6; i < CommaPosition; i++) {
                    if (Phrase[i] >= '0' && Phrase[i] <= '9') {
                        NumbersValidater++;
                        break;
                    }
                }
            }
            if (ErrorCounter == 4) {
                for (int i = CheerPosition + 6; i < EndOfLinePosition; i++) {
                    if (!((Phrase[i] >= '0' && Phrase[i] <= '9') || Phrase[i] == ' ')) {
                        ErrorCounter--;
                    }
                }
            }
            if (ErrorCounter == 4) {
                for (int i = CheerPosition + 6; i < EndOfLinePosition; i++) {
                    if (Phrase[i] >= '0' && Phrase[i] <= '9') {
                        NumbersValidater++;
                        break;
                    }
                }
            }
            if ((ErrorCounter == 4) && (NumbersValidater == 2)) {
                for (int i = 0; i < SmilePosition; i++) {
                    if (Phrase[i] != '\0' && Phrase[i] != '\n') UpNormality++;
                }
            }
            if ((ErrorCounter == 4) && (NumbersValidater == 2)) {
                for (int i = EndOfLinePosition + 1; i < 1000; i++) {
                    if (Phrase[i] != '\0' && Phrase[i] != '\n') UpNormality++;
                }
            }
            if ((ErrorCounter == 4) && (NumbersValidater == 2) && (UpNormality == 0)) {
                for (int i = SmilePosition + 6; i < CommaPosition; i++) {
                    if (Phrase[i] >= '0' && Phrase[i] <= '9') digitscounter++;
                }
                for (int i = 0; i < digitscounter-1; i++) powerof10 *= 10;
                for (int i = SmilePosition + 6; i < CommaPosition; i++) {
                    if (Phrase[i] >= '0' && Phrase[i] <= '9') {
                        sumsmile += (Phrase[i] - 48) * powerof10;
                        powerof10 /= 10;
                    }
                }
            }
            digitscounter = 0;
            powerof10 = 1;
            if ((ErrorCounter == 4) && (NumbersValidater == 2) && (UpNormality == 0)) {
                for (int i = CheerPosition + 6; i < EndOfLinePosition; i++) {
                    if (Phrase[i] >= '0' && Phrase[i] <= '9') digitscounter++;
                }
                for (int i = 0; i < digitscounter - 1; i++) powerof10 *= 10;
                for (int i = CheerPosition + 6; i < EndOfLinePosition; i++) {
                    if (Phrase[i] >= '0' && Phrase[i] <= '9') {
                        sumcheer += (Phrase[i] - 48) * powerof10;
                        powerof10 /= 10;
                    }
                }
                if (sumsmile == sumcheer) Equal++;
            }
            try++;
        }

        int maxnumber = 0;
        printf("Enter the maximum number of the festival:\n");
        scanf("%d", &maxnumber);
        while (maxnumber < 0) {
            printf("Only positive maximum number is allowed, please try again:\n");
            scanf("%d", &maxnumber);
        }

        for (int i = 1; i <= maxnumber; i++) {
            if (i % sumsmile == 0 && i % sumcheer == 0) {
                printf("Festival!\n");
            }
            else if (i % sumsmile == 0) {
                printf("Smile!\n");
            }
            else if (i % sumcheer == 0) {
                printf("Cheer!\n");
            }
            else {
                printf("%d\n", i);
            }
        }
        break;
    }
    case 7:
        printf("Thank you for your journey through Numeria!\n");
        break;
    }

    return 0;
}