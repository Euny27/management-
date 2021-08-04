#include <stdio.h>
#include <stdlib.h>

void admin();
void addstaff();
void editstaff();
void deletestaff();
void staff();
void adduser();
void edituser();
void deleteuser();
void addbook();
void editbook();
void deletebook();
void lendbook();
void returnedbook();
void implementfine();
void reservedbook();
void limitborrowingbook();
void searchstaffbookuser();
void searchstaffs();
void searchbook();
void searchuser();
void staffs();
void user();

void admin()

{
    int option,secret;
    printf("enter admin password\n");
    scanf("%d",&secret);
    if(secret==1234)
    {
        printf("you have successfully logged in\n");
    }
    else;
    printf("invalid password\n");
    printf("1. add staff\n");
    printf("2. edit staff\n");
    printf("3. delete staff\n");
    scanf("%d",&option);
    switch(option)
    {
    case 1:
         addstaff();
         break;
    case 2:
        editstaff();
        break;
    case 3:
            deletestaff();
            break;
    default:
        printf("Invalid option");


    }


}
void addstaff()
{
    int name,reg;
    printf("enter staff name\n");
    scanf("%d",&name);
    printf("enter registration\n");
    scanf("%d",&reg);
    printf("Staff is successfully added");
}
void editstaff()
{
    int id,pin;
    printf("enter previous id\n");
    scanf("%d",&id);
    printf("enter new id\n");
    scanf("%d",&pin);
    printf("Successfully updated");
}
void deletestaff()
{
    int name,reg;
   printf("enter staff name\n");
   scanf("%d",&name);
   printf("enter reg\n");
   scanf("%d",&reg);
   printf("Staff deleted successfully");
}
void staff()
{
    int choice;
    printf("1. adduser\n");
    printf("2. edituser\n");
    printf("3. deleteuser\n");
    printf("4. addbook\n");
    printf("5. editbook\n");
    printf("6. deletebook\n");
    printf("7. lendbook\n");
    printf("8. mark returned books\n");
    printf("9. implement fine\n");
    printf("10. limit borrowing of books to three at a time\n");
    printf("11. mark reserved books\n");
    printf("12. allow searching of a staff, book or user\n");
    scanf("%d",&choice);
    switch(choice)
    {
    case 1:
        adduser();
        break;
    case 2:
        edituser();
        break;
    case 3:
        deleteuser();
        break;
    case 4:
        addbook();
        break;
    case 5:
            editbook();
            break;
    case 6:
        deletebook();
        break;
    case 7:
        lendbook();
        break;
    case 8:
         returnedbook();
        break;
    case 9:
            implementfine();
            break;
    case 10:
        limitborrowingbook();
        break;

    case 11:
        reservedbook();
        break;
    case 12:
        /* searchstaffbookuser();*/
         break;
    default:
        printf("Invalid choice");



    }
}
void adduser()
{
    char username[20];
    int reg;
    printf("enter user name\n");
    scanf("%d",&username);
    printf("enter user reg\n");
    scanf("%d",&reg);
    printf("%s %d\n", username,reg);
    printf("User added successfully\n");
}
void edituser()
{
    int id,pin;
    printf("enter previous id\n");
    scanf("%d",&id);
    printf("enter new id\n");
    scanf("%d",&pin);
    printf("Successfully updated\n");
}
void deleteuser()
{
    char username[20];
    int reg;
    printf("enter user name\n");
    scanf("%d",&username);
    printf("enter user reg\n");
    scanf("%d",&reg);
    printf("%s %d\n", username, reg);
    printf("Deleted successfully\n");
}
void addbook()
{
    char name[20];
    char author[20];
    char edition[50];
    printf("enter book name\n");
    scanf("%d",&name);
    printf("enter author of the book\n");
    scanf("%d",&author);
    printf("enter book edition\n");
    scanf("%d",&edition);
    printf("%s %s %s\n", name,author,edition);
    printf("Book added successfully\n");
}
void editbook()
{
    char edition[50];
    char name[20];
    printf("enter book edition\n");
    scanf("%d",&edition);
    printf("enter book name\n");
    scanf("%d",&name);
    printf("%s %s\n", edition,name);
    printf("Edited successfully\n");
}
void deletebook()
{
    int name,author;
    printf("enter book name\n");
    scanf("%d",&name);
    printf("enter book author\n");
    scanf("%d",&author);
}
void lendbook()
{
    int name,reg,edition,author,book;
    printf("enter book name\n");
    scanf("%d",&book);
    printf("enter user name\n");
    scanf("%d",&name);
    printf("enter user reg\n");
    scanf("%d",&reg);
    printf("enter book edition\n");
    scanf("%d",&edition);
    printf("enter book author\n");
    scanf("%d",&author);
    printf("Book lended successfully\n");
}
void returnedbook()
{
    int book,date,name,reg,author,edition;
    printf("enter book name\n");
    scanf("%d",&book);
    printf("enter date of return\n");
    scanf("%d",&date);
    printf("enter user name\n");
    scanf("%d",name);
    printf("enter user reg\n");
    scanf("%d",&reg);
    printf("enter book author\n");
    scanf("%d",&author);
    printf("enter book edition\n");
    scanf("%d",&edition);
    printf("Book returned successfully\n");

}
void implementfine()
{
    int name,book,days;
    printf("enter user name\n");
    scanf("%d",&name);
    printf("enter book name\n");
    scanf("%d",&book);
    printf("enter days that are past due\n");
    scanf("%d",&days);
    printf("Fine implemented successfully\n");

}
void limitborrowingbook()
{
   int number;
   printf("enter selected number of books (1-3)\n");
   scanf("%d",&number);
   if(number < 1 || number > 3)
   {
       printf("min no is 1 and max is 3\n");

   }
else;

    printf("books successfully selected\n");

}

void reservedbook()
{
    int book,author,edition;
    printf("enter book name\n");
    scanf("%d",&book);
    printf("enter book author\n");
    scanf("%d",&author);
    printf("enter book edition\n");
    scanf("%d",&edition);
    printf("Book reserved successfully\n ");
}/*
void searchstaffbookuser()
{
    int staff;
    printf("enter staff name\n");
    printf("search book\n");
    printf("search user\n");
    scanf("%d",&staff);
    switch(staff)
    {
    case 1:
     searchstaffs();
       break;
    case 2:
        searchbook();
         break;
    case 3:
        searchuser();
         break;
    default:
        Printf("no more choice\n");


    }
    void searchstaffs()
    {
        int name;
        printf("enter registration\n");
        scanf("%d",&name);
        printf("staff successfully found\n");
    }
    void searchbook()
    {
        int title;
        printf("enter book title\n");
        scanf("%d",&title);
        printf("book found\n");

    }
    void searchuser()
    {
        int id;
        printf("enter user id\n");
        scanf("%d",&id);
        printf("user successfully found\n");
    }


}*/
void user()
{
    char username[20];
    int password;
    printf ("please login\n");
    printf("enter username \n");
    scanf("%s",username);
    printf("enter password\n");
    scanf("%d",&password);
    if(password==0000)
    {
        printf("logged in successfully\n");
    }
    else;
    {
        printf("invalid password\n");
    }
}

int main(void)
{



    int select;
    printf("\t Welcome To County Library Management System\n");

printf("1. enter 1 for admin\n");
printf("2. enter 2 for staff\n");
printf("3. enter 3 for user\n");
scanf("%d", &select);
switch(select)
{
    case 1:
        admin();
        break;
    case 2:

            staff();
            break;
    case 3:
            user();
            break;
    default:
            printf("\tInvalid selection");

}


}












