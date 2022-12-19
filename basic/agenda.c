#include <stdio.h>
#include <string.h>

/* enum Status {INACTIVE,ACTIVE};
enum Active active;
status = INACTIVE; */

typedef enum 
{
    INACTIVE, ACTIVE
} Status; 

typedef struct 
{
    int id_;
    Status status;
    char firstName [30];
    char lastName [30];
    char company [30];
    char jobTitle [30];
    char emailAdress [30];
    char phone [30];
    char birthday [9];
    char notes [120];
} Contact;

void addContact();
void showContact();
void updateContact();
void anonimateContact();
int main ()
{
    Status status;
    status = INACTIVE;
    printf("%d", status);
}
