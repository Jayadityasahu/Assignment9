#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>


struct Student
{
    char name[50];
    int rollNumber;
    float percentage;
};

struct Student database[100];
int numRecords = 0;

void insert()
{
    char temp = 'Y';
    while ((temp == 'Y' || temp == 'y') && numRecords < 100)
    {
        printf("Enter the records (Name, Roll Number, Percentage): ");
        scanf("%s %d %f", database[numRecords].name, &database[numRecords].rollNumber, &database[numRecords].percentage);
        numRecords++;

        if (numRecords != 1)
        {
            for (int i = 0; i < numRecords; i++)
            {
                for (int j = 0; j < numRecords - i - 1; j++)
                {
                    if (database[j].rollNumber > database[j + 1].rollNumber)
                    {
                        struct Student temp2 = database[j];
                        database[j] = database[j + 1];
                        database[j + 1] = temp2;
                    }
                }
            }
        }
        printf("Record inserted\n");
        printf("Do you wish to continue (Y/N):");
        scanf("%s", &temp);
    }
}

void viewdata()
{
    if (numRecords != 0)
        for (int i = 0; i < numRecords; i++)
            printf("%d : %s %d %.2f\n", i + 1, database[i].name, database[i].rollNumber, database[i].percentage);
    else
        printf("Database is empty.\n");
}

void sortName()
{
    for (int i = 0; i < numRecords - 1; i++)
        for (int j = 0; j < numRecords - i - 1; j++)
            if (strcmp(database[j].name, database[j + 1].name) > 0)
            {
                struct Student temp = database[j];
                database[j] = database[j + 1];
                database[j + 1] = temp;
            }

    printf("Database sorted by name.\n");
}

char *findOne(const char search[])
{
    static char result[50];
    for (int i = 0; i < numRecords; i++)
        if (strncmp(database[i].name, search, strlen(search)) == 0)
        {
            strcpy(result, database[i].name);
            return result;
        }
    return "No record found";
}

void specs()
{
    float highest = 0, lowest = 0, sum = 0, variance = 0;
    for (int i = 0; i < numRecords; i++)
    {
        sum += database[i].percentage;
        if (database[i].percentage > highest)
            highest = database[i].percentage;
        if (database[i].percentage < lowest)
            lowest = database[i].percentage;
    }
    float mean = sum / numRecords;

    for (int i = 0; i < numRecords; i++)
        variance += pow(database[i].percentage - mean, 2);
    float stnd_dev = sqrt(variance / numRecords);

    printf("Number of records: %d\n", numRecords);
    printf("Highest percentage: %.2f\n", highest);
    printf("Lowest percentage: %.2f\n", lowest);
    printf("Mean: %.2f\n", mean);
    printf("Standard Deviation: %.2f\n", stnd_dev);
}

void deleteRecord(int rollNumber)
{
    for (int i = 0; i < numRecords; i++)
        if (database[i].rollNumber == rollNumber)
        {
            for (int j = i; j < numRecords - 1; j++)
                database[j] = database[j + 1];
            numRecords--;
            printf("Record with roll number %d deleted\n", rollNumber);
            return;
        }
    printf("Record with roll number %d not found\n", rollNumber);
}

int main()
{
    insert();
    printf("\n");

    viewdata();
    printf("\n");

    sortName();
    printf("\n");

    char Search;
    printf("Search: ");
    scanf("%s", Search);
    printf("Record starting with '%s': %s\n", Search, findOne("Search"));

    specs();
    printf("\n");

    int delete_roll;
    printf("Enter the Roll Number you want to delete from Database: ");
    scanf("%d", &delete_roll);
    deleteRecord(delete_roll);

    specs();

    return 0;
}