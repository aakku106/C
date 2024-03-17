#include <stdio.h>
struct book
{
    char title[20];
    float price;
};
void main()
{
    struct book b, *ptr;
    ptr = &b;
    printf("title of book");
    gets(ptr->title);
    printf("price of book");
    scanf("%f", &ptr->price);
    printf("\n name of book");
    puts(b.title);
    printf("\n price of book %f", b.price);
}