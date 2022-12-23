//Importing Libraries
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//Start of main function
int main()
{

    //Function for clearing the terminal
    system("cls");
    //Declaring string variables
    char message[100], ch;
    char response[5];
    //Declaring integer variables
    int i, key, op;

    //Instructions for using the program
    printf("***Welcome to Caeser-Cipher Program***\n");
    printf("\nHere Are the Operations which you can perform: \n");
    printf("1. Encrypting a String");
    printf("\n2. Decrypting a String");

    //Start of While loop
    while (response != "No")
    {

        //Taking input from user for performing operation
        printf("\n\nEnter the number of operation (1 or 2) you want to perform: ");
        scanf("%d", &op);

        //If condition when op variable is equal to 1(Encryption will start)
        if (op == 1)
        {

            //Asking user input for message to be encrypted
            printf("\nEnter a message to encrypt: ");
            scanf("%s", &message);
            //Asking user input for the encryption key
            printf("\nEnter key (The key must be a number eg.1,2,3...): ");
            scanf("%d", &key);
            
            //for loop for iterating the string given by user
            for (i = 0; message[i] != '\0'; ++i)
            {   
                //storing the iterated string in new variable ch
                ch = message[i];
                //if statement for checking if those iterated alphabets comes bw lower case a and z
                if (ch >= 'a' && ch <= 'z')
                {   
                    //adding key to the variable for encryption(+ sign for shifting the alphabets ahead)
                    ch = ch + key;
                    //if statement when the alphabet is greater then lower case z
                    if (ch > 'z')
                    {   
                        //alloting of the key to this situation
                        ch = ch - 'z' + 'a' - 1;
                    }
                    //new message(encrypted) alloted to variable ch
                    message[i] = ch;
                }
                //else if statement to check if the alphabets lie bw uppercase A and Z
                else if (ch >= 'A' && ch <= 'Z')
                {   
                    //adding key to the variable for encryption(+ sign for shifting the alphabets ahead)
                    ch = ch + key;
                    //if statement when the alphabet is greater then upper case z
                    if (ch > 'Z')
                    {   
                        //alloting of the key to this situation
                        ch = ch - 'Z' + 'A' - 1;
                    }
                    //new message(encrypted) alloted to variable ch
                    message[i] = ch;
                }
            }
            //Printing the Encrypted message
            printf("\nEncrypted message: %s", message, "\n");
        }

        //If condition when op variable is equal to 2(Decryption will start)        
        else if (op == 2)
        {   
            //Asking user input for message to be Decrypted
            printf("\nEnter a message to decrypt: ");
            scanf("%s", &message);
            //Asking user input for the Decryption key
            printf("\nEnter key: ");
            scanf("%d", &key);

            //for loop for iterating the string given by user
            for (i = 0; message[i] != '\0'; ++i)
            {   
                //storing the iterated string in new variable ch
                ch = message[i];
                //if statement for checking if those iterated alphabets comes bw lower case a and z
                if (ch >= 'a' && ch <= 'z')
                {   
                    //adding key to the variable for encryption(- sign for shifting the alphabets behind)
                    ch = ch - key;
                    //if statement when the alphabet is lesser then lower case a
                    if (ch < 'a')
                    {   
                        //alloting of the key to this situation
                        ch = ch + 'z' - 'a' + 1;
                    }
                    //new message(encrypted) alloted to variable ch
                    message[i] = ch;
                }
                //else if statement to check if the alphabets lie bw uppercase A and Z
                else if (ch >= 'A' && ch <= 'Z')
                {   
                    //adding key to the variable for encryption(- sign for shifting the alphabets behind)
                    ch = ch - key;
                    //if statement when the alphabet is lesser then upper case A
                    if (ch < 'A')
                    {   
                        //alloting of the key to this situation
                        ch = ch + 'Z' - 'A' + 1;
                    }
                    //new message(encrypted) alloted to variable ch
                    message[i] = ch;
                }
            }
            //Printing the Decrypted message
            printf("\nDecrypted message: %s", message, "\n");
        }
        //Else statement if user gives input other than 1 or 2
        else {
            printf("\nWrong Input!\n");
            exit(0);
        }

        //Asking user whether to run again or not
        printf("\n\nDo you wanna perform again? Yes or No: ");
        scanf("%s", &response);

        //if statement when user inputs yes(while loop runs again)
        if (!strcmp(response,"Yes") || !strcmp(response,"yes") || !strcmp(response,"YES"))
        {
            
            continue;
        }

        //else if statement when user inputs no(while loop terminates)
        else if (response == "No"  || !strcmp(response,"NO") || !strcmp(response,"no")) {
            printf("\nThanks for Using Caeser Cipher Program");
            exit(1);
        }

        //else statement when user gives input other than yes or no
        else {
            printf("\nWrong Input!");
            exit(1);
        }
    }
}