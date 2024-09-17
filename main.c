#include <stdio.h>
#include <string.h>

struct myStudent {
    int age;
    char name[50]; // Använd en array för sträng
};

int main() {
    printf("HElLO\n");

    for (int i = 0; i < 10; i++) {
        printf("%d\n", i);
    }

    int x = 20;
    int y = 30;

    if (x == y) {
        printf("HEllo\n");
    } else if (x > y) {
        printf("BYe bye\n");
    } else {
        printf("jajajajaj\n");
    }

    struct myStudent student1;
    student1.age = 20;
    strcpy(student1.name, "Amin"); // Kopiera strängen till namnet

    // Skriva ut medlemsvariabler
    printf("Age: %d\n", student1.age);
    printf("Name: %s\n", student1.name);


    int a = 0;

    while (a < 10){
        printf("%d\n", a);
        a++;
    }


    printf("HELLO BABY\n");
    
    

    return 0;
}