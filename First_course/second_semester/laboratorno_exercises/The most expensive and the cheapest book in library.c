#include <stdio.h>

typedef struct {
    char title[50];
    char author[30];
    int year;
    float price;

}Book;

void multi(Book listWithBooks[5]){
    int max = listWithBooks[0].price;
    int min = listWithBooks[0].price;
    double priceSum = 0;

    for (int i = 0; i < 5; i++){
        priceSum += listWithBooks[i].price;
        if (max < listWithBooks[i].price){
            max = listWithBooks[i].price;
        }
        if (min > listWithBooks[i].price){
            min = listWithBooks[i].price;
        }
    }
    for (int i = 0; i < 5; i++){
        if (listWithBooks[i].price == max){
            printf("The most expensive book: %s %s %d %.2lf \n", listWithBooks[i].title, listWithBooks[i].author, listWithBooks[i].year, listWithBooks[i].price);
        }
        if (listWithBooks[i].price == min){
            printf("The cheapest book: %s %s %d %.2lf \n", listWithBooks[i].title, listWithBooks[i].author, listWithBooks[i].year, listWithBooks[i].price);
        }
    }
    printf("The average price is %.2lf\n", priceSum / 5);
}

int main(){

    Book bookList[5];

    for (int i = 0; i < 5; i++){
        printf("Type parameters for book %d (title, author, year, price): ", i+1);
        scanf("%s %s %d %lf", &bookList[i].title, &bookList[i].author, &bookList[i].year, &bookList[i].price);
    }


    multi(bookList);
    return 0;
}
