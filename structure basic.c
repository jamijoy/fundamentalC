#include<stdio.h>

struct Book
{
    char *book_name;
    char *writer_name;
    int   price;
    float ratings;
};

int main()
{
    struct Book booky;
    booky.book_name="let Us C";
    booky.writer_name="Yashavant kanetkat";
    booky.price=100;
    booky.ratings=7.8;

    printf("book name: \t%s\n", booky.book_name );
    printf("writer name:\t%s\n", booky.writer_name);
    printf("price: \t\t%d\n",booky.price);
    printf("ratings: \t%0.2f\n",booky.ratings);
    return 0;
}

