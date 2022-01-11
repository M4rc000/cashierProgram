#include <stdio.h>

// MENU //
int log();
int products ();
int buy ();
int calc();
int openfile();

// STRUCT
struct identity{
    char firstName[10];
    char lastName[10];
};

log(){
    struct identity x;

    printf("Enter the First Name : ");
    scanf("%s", &x.firstName);
    printf("Enter the Last Name : ");
    scanf("%s", &x.lastName);

    printf("\nWelcome Back %s %s\n", x.firstName,x.lastName);
    printf("\n---------------------");
}

// VARIABLES //
int  i=1, pin, price, code, totalPurchase = 0, totalPay, discount = 50000, input,total;
int pay (int num1, int num2);
char kar = 'y';

int openfile (){
char buff[255];
FILE *fptr;

// Membuka File
if ((fptr = fopen("CashierProgram.c","r")) == NULL){
    printf("ERROR : FILE NOT FOUND !!!");
    exit(1);
}

while (fgets(buff, sizeof(buff), fptr)){
printf("%s", buff);
}
// Tutup File
fclose(fptr);
}


int calc()
{
    int arr[100], size, i, sum = 0;
    
    printf("Enter how many interger:\n");
    scanf("%d",&size);
    
    printf("Enter the number:\n");
    for(i = 0; i < size; i++)
          scanf("%d",&arr[i]);
          
    for(i = 0; i < size; i++)
          sum = sum + arr[i]; 
    
    printf("Sum = %d\n",sum);
    
    return 0;
}

int products (){

    printf("\nList of Products\n");
    printf("\n\n<> Foods\n");
    printf("\n======================================================================");
    printf("\n| [1] Chitato                           |           Rp 10000         |\n");
    printf("|--------------------------------------------------------------------|\n");
    printf("| [2] Bread                             |           Rp 15000         |\n");
    printf("|--------------------------------------------------------------------|\n");
    printf("| [3] Popcorn                           |           Rp  7000         |\n");
    printf("|--------------------------------------------------------------------|\n");
    printf("| [4] Pringles Potato Crisps            |           Rp 25000         |\n");
    printf("|--------------------------------------------------------------------|\n");
    printf("| [5] Roma                              |           Rp  8000         |\n");
    printf("|--------------------------------------------------------------------|\n");
    printf("| [6] Nuggets                           |           Rp 10000         |\n");
    printf("|--------------------------------------------------------------------|\n");
    printf("| [7] Sausage                           |           Rp 10000         |\n");
    printf("|--------------------------------------------------------------------|\n");
    printf("| [8] Peanuts                           |           Rp  8000         |\n");
    printf("|--------------------------------------------------------------------|\n");
    printf("| [9] Nabati Richeese Wafer             |           Rp 10000         |\n");
    printf("|--------------------------------------------------------------------|\n");
    printf("| [10] Candy                            |           Rp  1000         |\n");
    printf("|--------------------------------------------------------------------|\n");
    printf("| [11] Khong Guan Crackers              |           Rp  7000         |\n");
    printf("|--------------------------------------------------------------------|\n");
    printf("| [12] Sukro                            |           Rp 10000         |\n");
    printf("|--------------------------------------------------------------------|\n");
    printf("| [13] Oreo                             |           Rp 12000         |\n");
    printf("|--------------------------------------------------------------------|\n");
    printf("| [14] Taro                             |           Rp  5000         |\n");
    printf("|--------------------------------------------------------------------|\n");
    printf("| [15] Astor                            |           Rp  6000         |\n");
    printf("======================================================================\n");

    printf("\n\n<> Drinks\n");
    printf("\n======================================================================");
    printf("\n| [1] Mineral Water                      |           Rp  5000        |\n");
    printf("|--------------------------------------------------------------------|\n");
    printf("| [2] Carbonate Drink                    |           Rp 15000        |\n");
    printf("|--------------------------------------------------------------------|\n");
    printf("| [3] Milk                               |           Rp  6000        |\n");
    printf("|--------------------------------------------------------------------|\n");
    printf("| [4] Coffee                             |           Rp 10000        |\n");
    printf("|--------------------------------------------------------------------|\n");
    printf("| [5] Tea                                |           Rp  4000        |\n");
    printf("|--------------------------------------------------------------------|\n");
    printf("| [6] Syrup                              |           Rp 15000        |\n");
    printf("|--------------------------------------------------------------------|\n");
    printf("| [7] Juice                              |           Rp 10000        |\n");
    printf("======================================================================");

    printf("\n\nPress [1] For Back To Main Menu");
    printf("\nPress [2] For Buy Product");
    printf("\nPress [0] For Exit");
    printf("\n\nSelect the Menu : ");
    scanf("%d", &input);

    if ( input == 0){
        return 0;
    }

    switch (input){
        case 1:
        main();
        break;

        case 2:
        buy();
        break;

        default:
        printf("Wrong Input");
        break;
    }
}

int buy (){
    printf("\n  PLEASE LOGIN\n");
    printf("\nEnter your pin :");
    scanf("%d", &pin);

    if ( pin == 101) {
        printf("LOGIN IS SUCCESSFUL\n");
        printf("\n=====================================================================");
        printf("\n| Please Select The Menu Below :        |           Price            |\n");
        printf("|                                       |                            |");
        printf("\n======================================================================");
        printf("\n| [1] Chitato                           |           Rp 10000         |\n");
        printf("|--------------------------------------------------------------------|\n");
        printf("| [2] Bread                             |           Rp 15000         |\n");
        printf("|--------------------------------------------------------------------|\n");
        printf("| [3] Popcorn                           |           Rp  7000         |\n");
        printf("|--------------------------------------------------------------------|\n");
        printf("| [4] Pringles Potato Crisps            |           Rp 25000         |\n");
        printf("|--------------------------------------------------------------------|\n");
        printf("| [5] Roma                              |           Rp  8000         |\n");
        printf("|--------------------------------------------------------------------|\n");
        printf("| [6] Nuggets                           |           Rp 10000         |\n");
        printf("|--------------------------------------------------------------------|\n");
        printf("| [7] Sausage                           |           Rp 10000         |\n");
        printf("|--------------------------------------------------------------------|\n");
        printf("| [8] Peanuts                           |           Rp  8000         |\n");
        printf("|--------------------------------------------------------------------|\n");
        printf("| [9] Nabati Richeese Wafer             |           Rp 10000         |\n");
        printf("|--------------------------------------------------------------------|\n");
        printf("| [10] Candy                            |           Rp  1000         |\n");
        printf("|--------------------------------------------------------------------|\n");
        printf("| [11] Khong Guan Crackers              |           Rp  7000         |\n");
        printf("|--------------------------------------------------------------------|\n");
        printf("| [12] Sukro                            |           Rp 10000         |\n");
        printf("|--------------------------------------------------------------------|\n");
        printf("| [13] Oreo                             |           Rp 12000         |\n");
        printf("|--------------------------------------------------------------------|\n");
        printf("| [14] Taro                             |           Rp  5000         |\n");
        printf("|--------------------------------------------------------------------|\n");
        printf("| [15] Astor                            |           Rp  6000         |\n");
        printf("|--------------------------------------------------------------------|\n");
        printf("| [16] Mineral Water                    |           Rp  5000         |\n");
        printf("|--------------------------------------------------------------------|\n");
        printf("| [17] Carbonate Drink                  |           Rp 15000         |\n");
        printf("|--------------------------------------------------------------------|\n");
        printf("| [18] Milk                             |           Rp  6000         |\n");
        printf("|--------------------------------------------------------------------|\n");
        printf("| [19] Coffee                           |           Rp 10000         |\n");
        printf("|--------------------------------------------------------------------|\n");
        printf("| [20] Tea                              |           Rp  4000         |\n");
        printf("|--------------------------------------------------------------------|\n");
        printf("| [21] Syrup                            |           Rp 15000         |\n");
        printf("|--------------------------------------------------------------------|\n");
        printf("| [22] Juice                            |           Rp 10000         |\n");
        printf("======================================================================\n");
        printf("\nDISCOUNT 10%% for PURCHASE > Rp 50000\n");

        while (kar == 'y'){
            printf("\nEnter your choice");
            printf("\nItem - %d :", i);
            scanf("%d",&code);
            fflush(stdin);


            if (code == 1){
                price = 10000;
                printf("Chitato = %d\n", price);
            }
            else if (code == 2){
                price = 15000;
                printf("Bread = %d", price);
            }
            else if (code == 3){
                price = 7000;
                printf("Popcorn = %d", price);
            }
            else if (code == 4){
                price = 25000;
                printf("Pringles Potato Crisps  = %d", price);
            }
            else if (code == 5){
                price = 8000;
                printf("Roma = %d", price);
            }
            else if (code == 6){
                price = 10000;
                printf("Nuggets = %d", price);
            }
            else if (code == 7){
                price = 10000;
                printf("Sausage = %d", price);
            }
            else if (code == 8){
                price = 8000;
                printf("Peanuts = %d", price);
            }
            else if (code == 9){
                price = 10000;
                printf("Nabati Richeese Wafer = %d", price);
            }
            else if (code == 10){
                price = 1000;
                printf("Candy = %d", price);
            }
            else if (code == 11){
                price = 7000;
                printf("Khong Guan Crackers = %d", price);
            }
            else if (code == 12){
                price = 10000;
                printf("Sukro = %d", price);
            }
            else if (code == 13){
                price = 12000;
                printf("Oreo = %d", price);
            }
            else if (code == 14){
                price = 5000;
                printf("Taro = %d", price);
            }
            else if (code == 15){
                price = 6000;
                printf("Astor = %d", price);
            }
            else if (code == 16){
                price = 5000;
                printf("Mineral Water = %d", price);
            }
            else if (code == 17){
                price = 15000;
                printf("Carbonate Drink  = %d", price);
            }
            else if (code == 18){
                price = 6000;
                printf("Milk = %d", price);
            }
            else if (code == 19){
                price = 10000;
                printf("Coffee = %d", price);
            }
            else if (code == 20){
                price = 4000;
                printf("Tea = %d", price);
            }
            else if (code == 21){
                price = 15000;
                printf("Syrup = %d", price);
            }
            else if (code == 22){
                price = 10000;
                printf("Juice = %d", price);
            }
            else {
                printf("\nThe input is wrong");
            }

            totalPurchase = totalPurchase + price;
            printf("\nDo you want to buy again ? [y(yes)/any(no)]");
            scanf("%c", &kar);
            i++;
        }

        printf("\nTotal purchase = %d\n", totalPurchase);

        int pay (num1,num2){
            int result;
            if (num1 > num2){
                result = num1*10/100;
            }
            else {
                result = num1;
            }
            return result;
        }

        total = pay(totalPurchase,discount);
        totalPay = totalPurchase - total;

        printf("\nTotal Pay with discount = %d\n", totalPay);
        printf("\nThank you for shopping at MW-Mart\n");
        printf("========================================================================================================================================================================");
        printf("\n\nPress [1] For Back To Main Menu");
        printf("\nPress [0] For Exit");
        printf("\n\nSelect the Menu : ");
        scanf("%d", &input);

        if ( input == 0){
            return 0;
        }

        switch (input){
            case 1:
            main();
            break;

            default:
            printf("Wrong Input");
            break;
        }
    }

    else {
        printf("LOGIN IS FAILED\n");
    }
    if ( input == 0){
        return 0;
    }
    switch (input){
        case 2:
        buy();
        break;
    }
}

int main(){
    printf("=====================");
    printf("\nWELCOME TO THE MW-MART\n");
    printf("---------------------");
    printf("\nPress [1] to Start\n");
    scanf("%d", &input);
    if ( input == 1){
        switch (input){
            case 1:
            log();
            break;
        }
    }
    else {
        printf("LOGIN FAILED\n");
        return 0;
    }

    printf("\nPress [1] List of Products");
    printf("\nPress [2] Buying the Products");
    printf("\nPress [3] Calculator");
    printf("\nPress [0] Exit The Program");
    printf("\n\nSelect The Menu : ");
    scanf("%d", &input);
    if ( input == 0){
        return 0;
    }

    switch (input){
        case 1:
        products();
        break;

        case 2 :
        buy();
        break;

        case 3:
        calc();
        break;

        default :
        printf("Wrong Input");
        break;
    }
}

