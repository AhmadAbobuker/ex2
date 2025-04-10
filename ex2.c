#include <stdio.h>

int main() {
    int Equal = 0;
	int sumcheer = 0;
	int sumsmile = 0;
    int powerof10 = 1;
    int digitscounter = 0;
	int try = -1;
    int ErrorCounter = 0, SmilePosition = 0, CheerPosition = 0, CommaPosition = 0, NumbersValidater = 0, EndOfLinePosition = 0, UpNormality = 0;
    int number10, sum10 = 0;
    int n1, n2 = 0;
    int temp;
    int temp2;
    int primecounter = 0;
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

        for (int i = 0; i < ((odd)); i++) {
            printf("%c", mouth);
        }
        printf("/");
        break;
    case 2:
        printf("Enter a number:");
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

        }
        else {
            printf("This number does not share.\n");
        }
        break;
    case 4:
        printf("Enter a number:");
        digitscounter = 1;
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
        for (int i = 0; i < digitscounter; i++) {
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
                }
                else if (sum == 4) {
                    break;
                }

                temp = sum;
            }
        }
        break;
    case 6:
        printf("Enter a smile and cheer number:\n");
        char Phrase[1000];
        //we need the user to give us his input and to reEnter it if its not in a certin style for that we need a while loop

        while ((ErrorCounter != 4) || (NumbersValidater != 2) || (UpNormality != 0)||(Equal!=0)) {
            if (try > 0) {
                printf("Only 2 different positive numbers in the given format are allowed for the festival, please try again:\n");
            }
            //filing the array with garbage values to avoid random vlaues so we can manipulate the string each time it restarts
            for (int i = 0; i < 1000; i++) {
                Phrase[i] = '\0';
            }
            //Restarting the Counters for each new input after reset
            ErrorCounter = 0;
			SmilePosition = 999;// it being 999 is a flag for the machine to know that it has not been set yet , it solves the problem of 0 being a valid value
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
            //we need to store the garbage value \n before any input
            //Phrase[0]=getchar() ;
            //Asking user for input till he clicks Enter
            for (int i = 0; i < 1000; i++) {
                Phrase[i] = getchar();
                //breaking mechansim in case of Enter
                if (Phrase[i] == '\n') {
                    //saving the EndOfLinePosition for later
                    EndOfLinePosition = i;
                    break;
                }
            }
            //The checking mechansim should recgonize a pattren within the string so we teach it to recgonize "smile:"
            //and recgonize "cheer:" and "," ,and there order in the array

            //smile: detction
            for (int i = 0; i < 1000; i++) {
                if ((Phrase[i] == 's') && (Phrase[i + 1] == 'm') && (Phrase[i + 2] == 'i') && (Phrase[i + 3] == 'l') && (Phrase[i + 4] == 'e') && (Phrase[i + 5] == ':')) {
                    //here we introduce the Error counter each recgonition earns us a point
                    ErrorCounter++;
                    //here we introduce the Position saver to validate order
                    SmilePosition = i;
                }
            }
            //comma detction
            for (int i = 0; i < 1000; i++) {
                if ((Phrase[i] == ',')) {
                    ErrorCounter++;
                    CommaPosition = i;
                }
            }
            //cheer:detction
            for (int i = 0; i < 1000; i++) {
                if ((Phrase[i] == 'c') && (Phrase[i + 1] == 'h') && (Phrase[i + 2] == 'e') && (Phrase[i + 3] == 'e') && (Phrase[i + 4] == 'r') && (Phrase[i + 5] == ':')) {
                    ErrorCounter++;
                    CheerPosition = i;
                }
            }
            //Order validation mechansim
            if ((CommaPosition > SmilePosition) && (CommaPosition < CheerPosition)) {

                ErrorCounter++;

            }
            //validation of what is in bettwen the "smile:" and "," , and "cheer:" and "\n" ;
            // we need the machine to check what is in bettwen only when it recgonizes the format so it dosent check randomly
            //thus the ErrorCounter must be 4 then and only then what is in bettwen matters

            //"smile:" and "," *in bettwen the array only can hold numbers and " "
            if (ErrorCounter == 4) {
                for (int i = SmilePosition + 6; i < CommaPosition; i++) {
                    if ((Phrase[i] != '0') && (Phrase[i] != '1') && (Phrase[i] != '2') && (Phrase[i] != '3') && (Phrase[i] != '4') && (Phrase[i] != '5') && (Phrase[i] != '6') && (Phrase[i] != '7') && (Phrase[i] != '8') && (Phrase[i] != '9') && (Phrase[i] != ' ')) {
                        //in Such a case the space bettwen a comma and smile: is unknown
                        //but what is known is the format we need which is only numbers and spaces
                        //so for each wrong char in the array we take 1 from the ErrorCounter so the machine flags an Error
                        // in case of succuess the ErrorCounter remains unchanged
                        ErrorCounter--;
                    }
                }
            }
            //Edge case would be if there is no numbers in bettwen since spaces are allowed so we fix that by detction for
            //numbers after confirming the format so we introduce a NumbersValidater
            if (ErrorCounter == 4) {
                for (int i = SmilePosition + 6; i < CommaPosition; i++) {
                    if ((Phrase[i] == '0') || (Phrase[i] == '1') || (Phrase[i] == '2') || (Phrase[i] == '3') || (Phrase[i] == '4') || (Phrase[i] == '5') || (Phrase[i] == '6') || (Phrase[i] == '7') || (Phrase[i] == '8') || (Phrase[i] == '9')) {
                        NumbersValidater++;
                        //since all is requierd after confirming the format is at least one number exists we close the loop
                        break;
                    }
                }
            }
            //we do the same for "cheer:" and "\n"
            if (ErrorCounter == 4) {
                for (int i = CheerPosition + 6; i < EndOfLinePosition; i++) {
                    if ((Phrase[i] != '0') && (Phrase[i] != '1') && (Phrase[i] != '2') && (Phrase[i] != '3') && (Phrase[i] != '4') && (Phrase[i] != '5') && (Phrase[i] != '6') && (Phrase[i] != '7') && (Phrase[i] != '8') && (Phrase[i] != '9') && (Phrase[i] != ' ')) {
                        ErrorCounter--;
                    }
                }
            }

            if (ErrorCounter == 4) {
                for (int i = CheerPosition + 6; i < EndOfLinePosition; i++) {
                    if ((Phrase[i] == '0') || (Phrase[i] == '1') || (Phrase[i] == '2') || (Phrase[i] == '3') || (Phrase[i] == '4') || (Phrase[i] == '5') || (Phrase[i] == '6') || (Phrase[i] == '7') || (Phrase[i] == '8') || (Phrase[i] == '9')) {
                        NumbersValidater++;
                        //since all is requierd after confirming the format is at least one number exists we close the loop
                        break;
                    }
                }
            }
            //The machine now can recgonize this line and patterns withing the line  "Smile:integer , cheer:integer" in the string Phrase
            // A complication would be if there is more that exists
            // the solution would be for the machine to flag it as an error if something more than the trash we inputed exists
            //so we need a final check for the string before the line starts and after it ends

            //before the line starts check
            if ((ErrorCounter == 4) && (NumbersValidater == 2)) {
                for (int i = 0; i < SmilePosition; i++) {
                    if ((Phrase[i] == '\0') || (Phrase[i] == '\n')) {

                    }
                    else {
                        //here we introduce for UpNormality check within the string if it exist it will flag it
                        UpNormality++;
                    }
                }
            }
            //after the line ends check
            if ((ErrorCounter == 4) && (NumbersValidater == 2)) {
                for (int i = EndOfLinePosition + 1; i < 1000; i++) {
                    if ((Phrase[i] == '\0') || (Phrase[i] == '\n')) {

                    }
                    else {
                        //here we introduce for UpNormality check within the string if it exist it will flag it
                        UpNormality++;
                    }
                }
            }
            //we need to check if the numbers after smile and after cheer are the same in value
            //if they are we need to flag an error and return the user to reEnter the values.
		    //we need to convert the string to an intger so we can compare them
            if ((ErrorCounter == 4)&&(NumbersValidater==2)&&(UpNormality==0)) {
                for (int i = SmilePosition + 6; i < CommaPosition; i++) {
                    if ((Phrase[i] == '0') || (Phrase[i] == '1') || (Phrase[i] == '2') || (Phrase[i] == '3') || (Phrase[i] == '4') || (Phrase[i] == '5') || (Phrase[i] == '6') || (Phrase[i] == '7') || (Phrase[i] == '8') || (Phrase[i] == '9')) {
                        digitscounter++;
                    }
                }
					for (int i = 0; i < digitscounter-1; i++) {
						//constructing power of 10
						powerof10 = powerof10 * 10;
					}
					//we know how many are they now we need to run into them 1 by 1 and start multiplying them by 10 to the power of digitscounter-1
                    for (int i = SmilePosition + 6; i < CommaPosition; i++) {
                        if ((Phrase[i] == '0') || (Phrase[i] == '1') || (Phrase[i] == '2') || (Phrase[i] == '3') || (Phrase[i] == '4') || (Phrase[i] == '5') || (Phrase[i] == '6') || (Phrase[i] == '7') || (Phrase[i] == '8') || (Phrase[i] == '9')) {
                            sumsmile = sumsmile + (Phrase[i] - 48) * powerof10;
                            powerof10 = powerof10 / 10;
                        }
				}

            }
			digitscounter = 0;
			powerof10 = 1;
			//we need to do the same for cheer
			if ((ErrorCounter == 4) && (NumbersValidater == 2) && (UpNormality == 0)) {
				for (int i = CheerPosition + 6; i < EndOfLinePosition; i++) {
					if ((Phrase[i] == '0') || (Phrase[i] == '1') || (Phrase[i] == '2') || (Phrase[i] == '3') || (Phrase[i] == '4') || (Phrase[i] == '5') || (Phrase[i] == '6') || (Phrase[i] == '7') || (Phrase[i] == '8') || (Phrase[i] == '9')) {
						digitscounter++;
					}
				}
				for (int i = 0; i < digitscounter - 1; i++) {
					//constructing power of 10
					powerof10 = powerof10 * 10;
				}
				//we know how many are they now we need to run into them 1 by 1 and start multiplying them by 10 to the power of digitscounter-1
				for (int i = CheerPosition + 6; i < EndOfLinePosition; i++) {
					if ((Phrase[i] == '0') || (Phrase[i] == '1') || (Phrase[i] == '2') || (Phrase[i] == '3') || (Phrase[i] == '4') || (Phrase[i] == '5') || (Phrase[i] == '6') || (Phrase[i] == '7') || (Phrase[i] == '8') || (Phrase[i] == '9')) {
						sumcheer = sumcheer + (Phrase[i] - 48) * powerof10;
						powerof10 = powerof10 / 10;
					}
				}
                //here we need to check if the numbers are equal or not
                //if they are equal we need to flag an error and return the user to reEnter the values.
                //so we intrduce Equal checker 0 false 1 true
                if ((sumsmile == sumcheer)) {
                    Equal++;

                }
			}
            //The checks are over The pattren is set for the machine to detect if it pases all the flags then its valid
            try++;
        }

        int maxnumber = 0;
		printf("Enter the maximum number of the festival:\n");
		scanf("%d", &maxnumber);
		while (maxnumber < 0) {
			printf("Only positive maximum number is allowed, please try again:\n");
			scanf("%d", &maxnumber);
		}



        for (int i = 1; i <= maxnumber; i++)
        {
			if (i % sumsmile == 0 && i % sumcheer == 0)
			{
				printf("Festival!\n");
			}
			else if (i % sumsmile == 0)
			{
				printf("Smile!\n");
			}
			else if (i % sumcheer == 0)
			{
				printf("Cheer!\n");
			}
			else
			{
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

