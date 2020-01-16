/*
-------------------------------------------------------
Name         : Union
Author       : Kushal Singh Rathore
Discription  : Union Problem
-------------------------------------------------------
*/

#include<stdio.h>
struct store{
    double price;
    union{
        struct b{
            char *title;
            char *author;
            int num_page;
        }book;

        struct d{
            int color;
            int size;
            char *design;
        }shirt;
    }item;
};

int main()
{
    struct store s;
    s.item.book.title="The Alchemist";
    s.item.book.author="Paulo Coelho";
    s.item.book.num_page=197;
    printf("%s\n",s.item.book.title);
    return 0;
    
}