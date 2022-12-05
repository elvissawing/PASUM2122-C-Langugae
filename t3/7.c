#include<stdio.h>
int main(void)
{
    char id_em[99],id_it[99];
    float num_item,price,discount,tot_price;

    printf("Enter ID Employee:");
    scanf("%s",&id_em);

    printf("\n Enter ID Item: ");
    scanf("%s",&id_it);

    printf("\n Enter Number of Item:");
    scanf("%f",&num_item);

    printf("\n Enter Price of Item:");
    scanf("%f",&price);

    printf("\n Enter Discount Item:");
    scanf("%f",&discount);

    puts("\n * * * * * * * * * ");

    tot_price=(num_item*price)*((100-discount)/100) ;

    printf("Total Price is RM%.2f",tot_price);

    return 0;


}
