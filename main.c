#include <stdio.h>
#include<conio.h>
#include <stdlib.h>
#define max 1000

// Define a structure to hold product information
struct information {
    int pno;
    char pname[max];
    float price;
} product;

FILE* ft;
void choice(void);
char New();
char files(char);

int main() {
	while(1){
    choice();
}
    return 0;
}

void choice(void) {
    char d;
    printf("%-50s, WELCOME TO MANO'S BAKERY \n");
    printf("[1] NEW PRODUCT\n[2] SEARCH PRODUCT\n[3] DELETE PRODUCT\n [4] EXIT\n");
    printf("\nENTER THE CHOICE\n");
    scanf(" %c", &d); // Use space before %c to skip leading whitespace
    switch (d) {
        case '1':
            New();
            break;
        case '2':
            break;
        case '3':
            break;
            case '4':
            	exit(0);
            	break;
        default:
            printf("\nENTER A VALID OPTION\n");
            break;
    }
}
char New() {
    printf("ENTER THE PRODUCT NUMBER\n");
    scanf("%d", &product.pno);
    printf("ENTER THE PRODUCT NAME\n");
    scanf("%s", product.pname);
    printf("ENTER THE PRODUCT PRICE\n");
    scanf("%f", &product.price);
    fprintf(ft, "%d %s %f\n", product.pno, product.pname, product.price);
    printf("IF YOU WANT TO STORE THE DATA INTO THE FILE PRESS ENTER\n IF PRESS ESC BUTTON TO BACK\n");
    if(getch()==13)
    {
    	ft=fopen(("%s",product.pname),"r+");
    	fprintf("%d",product.pno);
    	printf("FILE WAS GENERATER\n");
	}
	else if(getch()==27)
	{
		choice();
	}
    return 0;
}


