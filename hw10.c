#include <stdio.h>
typedef struct
{
    char name[20];
    char country[20];
    int population;
}City;

int main()
{
    City cit[3] = {0};

    printf("Input three cities:\n");
    for (int i = 0; i < 3; i++)
    {
        printf("Name > "); scanf(" %[^\n]s", cit[i].name);
        printf("Country > "); scanf(" %[^\n]s", cit[i].country);
        printf("Population > "); scanf("%d", &cit[i].population);
    }
    printf("\n");
    printf("Printing the three cities:\n");

    for (int i = 0; i < 3; i++)
    {
        printf("%d. %s in %s with a population of %d people\n", i + 1, cit[i].name, cit[i].country, cit[i].population);
    }
    return 0;
}