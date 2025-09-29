#include <stdio.h>

int main(){
    char countryFirst, countryLast;
    printf("Enter the first letter of the country: ");
    scanf(" %c", &countryFirst);
    printf("Enter the last letter of the country: ");
    scanf(" %c", &countryLast);

    switch(countryFirst){
        case 'P':
        case 'p':
            switch(countryLast){
                case 'T':
                case 't':
                    printf("Only one country\n");
                    printf("Pakistan");
            }
        case 'I':
        case 'i':
            switch(countryLast){
                case 'd':
                case 'D':
                    printf("2 Countries: \n");
                    printf("Ireland.\n");
                    printf("Iceland");
            }
        default:
            printf("No such country in our directory.");
    }
    return 0;
}
