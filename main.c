/*GRADING SYSTEM*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void adminpass();
void adminmenupage();
void user();
void adduser();
void removeuser();
void edituser();
void viewuser();
void semselect();
void sem1();
void sem2();
void sem3();
void sem4();
void sem5();

char passadmin[9];
char loginuser[20],loginpass[9];
char username[5][20],password[5][9];
char newusername[20],newpassword[9];
int adminattempt;
int selectmenu;
int selectmenuattempt;
int adminmenu;
int attadmin;
int attemptlog;
int up=0;
int attemptregis=0;
int a,b,c;
int addswitch,addswitchatt;
int removeswitch,removeswitchatt;
int editswitch,editswitchatt;
int viewswitch,viewswitchatt;
int selectsem,selectsematt;
int mark[7];
int backsem;
float pointer[]={4.00,3.75,3.50,3.25,3.00,2.75,2.50,2.25,2.00,1.75};
float markpointer[7];
float gpa[5],cgpa;


int main()
{
    printf("\n\tG R A D I N G  S Y S T E M\n\n\tDSET1 - GROUP 1 \n\t---------------- \n\n\t1.ADAM HARITH \n\n\t2.ADIKA QASTURI \n\n\t3.AHMAD DANIAL \n\n\t4.AHMAD FIRAS \n\n\t5.AHMAD IKMAL\n\t");

    sleep(3);
    system("cls");
    while(selectmenuattempt<3&&(selectmenu<1||selectmenu>3))
    {

        printf("\n\tG R A D I N G  S Y S T E M\n\t1.Admin\n\t2.User\n\t3.Exit\n\n\tPlease make your selection : ");

        scanf("%d",&selectmenu);

        system("cls");
        switch (selectmenu)
        {
            case 1:
            adminpass();
            break;

            case 2:
            user();
            break;

            case 3:
            printf("\n\t\tExit!\n\n");
            break;

            default:
            printf("\n\t\tWrong selection\n\n");
            sleep(3);
            system("cls");
            selectmenuattempt++;

        }


    }

    if(selectmenuattempt==3)
    {
        printf("\n\tyou have no more attempt");
    }
    return 0;
}

void adminpass()
{
    while(adminattempt<3)
    {
        printf("\n\t\tG R A D I N G  S Y S T E M\n\n\t\tPassword : ");
        scanf("%s",&passadmin);
        if(strlen(passadmin)==8)
        {
            if(strcmp(passadmin,"12345678")==0)
            {
                system("cls");
                printf("\n\t\tPassword Correct\n");
                sleep(3);
                system("cls");
                adminmenupage();
                break;
            }
            else
            {
                printf("\n\t\tPassword Wrong\n\t\t");
                sleep(3);
                system("cls");
                adminattempt++;
            }
        }
        else
        {
            printf("\n\t\tPassword Must be 8 Characters\n\t\t");
            sleep(3);
            system("cls");
            adminattempt++;
        }
    }
    if(adminattempt==3)
    {
        printf("\n\t\tYOU HAVE NO MORE ATTEMPT LEFT");
    }
    return 0;
}

void adminmenupage()
{
    do
    {
        system("cls");
        printf("\n\tG R A D I N G  S Y S T E M\n\n\tADMIN MENU\n\t----------\n\t1.ADD USER\n\t2.EDIT USER\n\t3.DELETE USER\n\t4.VIEW USER\n\t5.EXIT USER\n\n\t");

        scanf("%d",&adminmenu);
        system("cls");

            switch (adminmenu)
                {
                    case 1:
                    adduser();
                    break;

                    case 2:
                    edituser();
                    break;

                    case 3:
                    removeuser();
                    break;

                    case 4:
                    viewuser();
                    break;

                    case 5:
                    printf("\n\tBYE!!! \n\t");
                    break;

                    default:
                    printf("\n\tWrong selection\n\t");
                    sleep(3);
                    system("cls");
                    attadmin++;
                }

    }while(attadmin<3&&(adminmenu<1 || adminmenu>5));
    if(attadmin==3)
    {
    printf("\n\tBYE!!!\n\t");
    }

    return 0;

}

void user()
{
    do
    {
        system("cls");
        printf("\n\t\t\tLOGIN TO GRADING SYSTEM\n\t\t\t~~~~~~~~~~~~~~~~~~~~~~~~~\n\t\t\tUsername : ");
        scanf(" %[^\n]s",&loginuser);
        printf("\n\t\t\tPassword : ");
        scanf("%s",&loginpass);

        if(strlen(loginuser)>4&&strlen(loginuser)<20&&strlen(loginpass)==8)
        {
            if(strcmp(loginuser,username[0])==0)
            {
                if(strcmp(loginpass,password[0])==0)
                {
                    printf("\n\t\t\tWelcome %s !",username[0]);
                    attemptlog=0;
                    semselect();
                    break;
                }
                else
                {
                    printf("\n\t\t\tWrong Password!!!");
                    sleep(2);
                    attemptlog++;
                }

            }
            else if(strcmp(loginuser,username[1])==0)
            {
                if(strcmp(loginpass,password[1])==0)
                {
                    printf("\n\t\t\tWelcome %s !",username[1]);
                    attemptlog=0;
                    semselect();
                    break;
                }
                else
                {
                    printf("\n\t\t\tWrong Password!!!");
                    sleep(2);
                    attemptlog++;
                }
            }
            else if(strcmp(loginuser,username[2])==0)
            {
                if(strcmp(loginpass,password[2])==0)
                {
                    printf("\n\t\t\tWelcome %s !",username[2]);
                    attemptlog=0;
                    semselect();
                    break;
                }
                else
                {
                    printf("\n\t\t\tWrong Password!!!");
                    sleep(2);
                    attemptlog++;
                }
            }
            else if(strcmp(loginuser,username[3])==0)
            {
                if(strcmp(loginpass,password[3])==0)
                {
                    printf("\n\t\t\tWelcome %s !",username[3]);
                    attemptlog=0;
                    semselect();
                    break;
                }
                else
                {
                    printf("\n\t\t\tWrong Password!!!");
                    sleep(2);
                    attemptlog++;
                }
            }
            else if(strcmp(loginuser,username[4])==0)
            {
                if(strcmp(loginpass,password[4])==0)
                {
                    printf("\n\t\t\tWelcome %s !",username[4]);
                    attemptlog=0;
                    semselect();
                    break;
                }
                else
                {
                    printf("\n\t\t\tWrong Password!!!");
                    sleep(2);
                    attemptlog++;
                }
            }

            else
            {
                printf("\n\t\t\tUser Does not Exist!\n\t\t\t");
                sleep(3);
                attemptlog++;
            }
            break;
        }
        else
        {
            printf("\n\t\t\tDoes meet Requirement\n\t\t\tUsername must be more than 4 characters and less than 20 characters\n\t\t\tPassword must be 8 characters");
            sleep(3);
            attemptlog++;
        }

    }while(attemptlog<3);

    return 0;
}

void adduser()
{
    do
    {
        system("cls");
        printf("\n\t\t\tREGISTER TO GRADING SYSTEM\n\t\t\t~~~~~~~~~~~~~~~~~~~~~~~~~\n\t\t\t");
        printf("\n\t\t\tList of Users : ");
        printf("\n\t\t\tUser 1 : \n\t\t\tUsername : %s \tPassword : %s",username[0],password[0]);
        printf("\n\t\t\tUser 2 : \n\t\t\tUsername : %s \tPassword : %s",username[1],password[1]);
        printf("\n\t\t\tUser 3 : \n\t\t\tUsername : %s \tPassword : %s",username[2],password[2]);
        printf("\n\t\t\tUser 4 : \n\t\t\tUsername : %s \tPassword : %s",username[3],password[3]);
        printf("\n\t\t\tUser 5 : \n\t\t\tUsername : %s \tPassword : %s",username[4],password[4]);
        printf("\n\t\t\tPlease Select User to add : ");
        scanf("%d",&b);
        c = b-1;
        printf("\n\t\t\tUsername : ");
        scanf(" %[^\n]s",&username[c]);
        printf("\n\t\t\tPassword : ");
        scanf("%s",&password[c]);

        if(strlen(username[c])>4&&strlen(username[c])<20&&strlen(password[c])==8)
        {
            printf("\n\t\t\tYour username is %s\n\t\t\tYour password is %s\n\t\t\t",username[c],password[c]);
            sleep(2);
            system("cls");
            do
            {
                printf("\n\t\t\tPlease make Selection : \n\t\t\t1.Add User again\n\t\t\t2.Return to adminmenu\n\t\t\t3.User Login\n\t\t\tSelection : ");
                scanf("%d",&addswitch);
                switch(addswitch)
                {
                    case 1 :
                    adduser();
                    break;

                    case 2 :
                    adminmenupage();
                    break;

                    case 3 :
                    user();
                    break;

                    default :
                    printf("\n\t\t\tWrong Selection");
                    addswitchatt++;
                    sleep(2);
                    system("cls");
                }
            }while(addswitchatt<3&&addswitch<0&&addswitch>3);

        }
        else
        {
            printf("\n\t\t\tDoes meet Requirement\n\t\t\tUsername must be more than 4 characters and less than 20 characters\n\t\t\tPassword must be more than 4 characters and less than 8 characters");
            sleep(3);
            username[c][0]=0;
            password[c][0]=0;
            attemptregis++;
        }
    }while(attemptregis<3);

    return 0;
}

void removeuser()
{
    system("cls");
    printf("\n\t\t\tList of Users : ");
    printf("\n\t\t\tUser 1 : \n\t\t\tUsername : %s \tPassword : %s",username[0],password[0]);
    printf("\n\t\t\tUser 2 : \n\t\t\tUsername : %s \tPassword : %s",username[1],password[1]);
    printf("\n\t\t\tUser 3 : \n\t\t\tUsername : %s \tPassword : %s",username[2],password[2]);
    printf("\n\t\t\tUser 4 : \n\t\t\tUsername : %s \tPassword : %s",username[3],password[3]);
    printf("\n\t\t\tUser 5 : \n\t\t\tUsername : %s \tPassword : %s",username[4],password[4]);
    printf("\n\t\t\tPlease Select User to remove : ");
    scanf("%d",&b);
    c = b-1;
    username[c][0]=0;
    password[c][0]=0;
    printf("\n\t\t\tUser 1 : \n\t\t\tUsername : %s \tPassword : %s",username[c],password[c]);
    sleep(2);
    system("cls");
    do
    {
        printf("\n\t\t\tPlease make Selection : \n\t\t\t1.Remove User again\n\t\t\t2.Return to adminmenu\n\t\t\t3.User Login\n\t\t\tSelection : ");
        scanf("%d",&removeswitch);
        switch(removeswitch)
        {
            case 1 :
            removeuser();
            break;

            case 2 :
            adminmenupage();
            break;

            case 3 :
            user();
            break;

            default :
            printf("\n\t\t\tWrong Selection");
            removeswitchatt++;
            sleep(2);
            system("cls");
        }
    }while(removeswitchatt<3&&removeswitch<0&&removeswitch>3);
    return 0;
}

void edituser()
{
    system("cls");
    printf("\n\t\t\tList of Users : ");
    printf("\n\t\t\tUser 1 : \n\t\t\tUsername : %s \tPassword : %s",username[0],password[0]);
    printf("\n\t\t\tUser 2 : \n\t\t\tUsername : %s \tPassword : %s",username[1],password[1]);
    printf("\n\t\t\tUser 3 : \n\t\t\tUsername : %s \tPassword : %s",username[2],password[2]);
    printf("\n\t\t\tUser 4 : \n\t\t\tUsername : %s \tPassword : %s",username[3],password[3]);
    printf("\n\t\t\tUser 5 : \n\t\t\tUsername : %s \tPassword : %s",username[4],password[4]);
    printf("\n\t\t\tPlease Select User to edit : ");
    scanf("%d",&b);
    c = b-1;
    printf("\n\t\t\tEnter New Username : ");
    scanf("%s",&username[c]);
    printf("\n\t\t\tEnter New Password : ");
    scanf("%s",&password[c]);
    printf("\n\t\t\tUser %d : \n\t\t\tUsername : %s \tPassword : %s",b,username[c],password[c]);
    sleep(2);
    system("cls");
    do
    {
        printf("\n\t\t\tPlease make Selection : \n\t\t\t1.Edit User again\n\t\t\t2.Return to adminmenu\n\t\t\t3.User Login\n\t\t\tSelection : ");
        scanf("%d",&editswitch);
        switch(editswitch)
        {
            case 1 :
            edituser();
            break;

            case 2 :
            adminmenupage();
            break;

            case 3 :
            user();
            break;

            default :
            printf("\n\t\t\tWrong Selection");
            editswitchatt++;
            sleep(2);
            system("cls");
        }
    }while(editswitchatt<3&&editswitch<0&&editswitch>3);

    return 0;
}

void viewuser()
{
    system("cls");
    printf("\n\t\t\tList of Users : ");
    printf("\n\t\t\tUser 1 : \n\t\t\tUsername : %s \tPassword : %s",username[0],password[0]);
    printf("\n\t\t\tUser 2 : \n\t\t\tUsername : %s \tPassword : %s",username[1],password[1]);
    printf("\n\t\t\tUser 3 : \n\t\t\tUsername : %s \tPassword : %s",username[2],password[2]);
    printf("\n\t\t\tUser 4 : \n\t\t\tUsername : %s \tPassword : %s",username[3],password[3]);
    printf("\n\t\t\tUser 5 : \n\t\t\tUsername : %s \tPassword : %s",username[4],password[4]);
    sleep(2);
    system("cls");
    do
    {
        printf("\n\t\t\tPlease make Selection : \n\t\t\t1.View User again\n\t\t\t2.Return to adminmenu\n\t\t\t3.User Login\n\t\t\tSelection : ");
        scanf("%d",&viewswitch);
        switch(viewswitch)
        {
            case 1 :
            viewuser();
            break;

            case 2 :
            adminmenupage();
            break;

            case 3 :
            user();
            break;

            default :
            printf("\n\t\t\tWrong Selection");
            viewswitchatt++;
            sleep(2);
            system("cls");
        }
    }while(viewswitchatt<3&&viewswitch<0&&viewswitch>3);
    return 0;
}

void semselect()
{

    while(selectsematt<3)
    {
        system("cls");
        printf("\n\t\t\tPlease select Semester : \n\t\t\t1.Semester 1\n\t\t\t2.Semester 2\n\t\t\t3.Semester 3\n\t\t\t4.Semester 4\n\t\t\t5.Semester 5\n\n\t\t\tYour Selection : ");
        scanf("%d",&selectsem);
        switch(selectsem)
        {
            case 1 :
            sem1();
            break;
            case 2 :
            sem2();
            break;
            case 3 :
            sem3();
            break;
            case 4 :
            sem4();
            break;
            case 5 :
            sem5();
            break;
            default :
            printf("\n\t\t\twrong selection");
            sleep(2);
            selectsematt++;
            system("cls");

        }
        break;
    }
    return 0;
}

void sem1()
{
    system("cls");
    printf("\n\t\t\tSemester 1\n\n\t\t\tSubject list :");
    printf("\n\t\t\t1.GEL 2312 German Language 1 : ");
    scanf("%d",&mark[0]);
    printf("\n\t\t\t2.CIT 0513 COMPUTER & PROGRAMMING : ");
    scanf("%d",&mark[1]);
    printf("\n\t\t\t3.MPU 2222 EFFECTIVE COMMUNICATION SKILLS : ");
    scanf("%d",&mark[2]);
    printf("\n\t\t\t4.CIT 0612 COMPUTER ETHICS & VALUES : ");
    scanf("%d",&mark[3]);
    printf("\n\t\t\t5.MAP 2223 DISCRETE MATHEMATICS : ");
    scanf("%d",&mark[4]);
    printf("\n\t\t\t6.SDT 2113 BASIC OF SOFTWARE ENGINEERING : ");
    scanf("%d",&mark[5]);
    printf("\n\t\t\t7.CIT 0623 OPERATING SYSTEMS : ");
    scanf("%d",&mark[6]);

    //subject 1
    if(mark[0]>=85)
    {
        markpointer[0]=pointer[0];
    }
    else if(mark[0]<=84&&mark[0]>=75)
    {
        markpointer[0]=pointer[1];
    }
    else if(mark[0]<=74&&mark[0]>=70)
    {
        markpointer[0]=pointer[2];
    }
    else if(mark[0]<=69&&mark[0]>=65)
    {
        markpointer[0]=pointer[3];
    }
    else if(mark[0]<=64&&mark[0]>=60)
    {
        markpointer[0]=pointer[4];
    }
    else if(mark[0]<=59&&mark[0]>=55)
    {
        markpointer[0]=pointer[5];
    }
    else if(mark[0]<=54&&mark[0]>=50)
    {
        markpointer[0]=pointer[6];
    }
    else if(mark[0]<=49&&mark[0]>=45)
    {
        markpointer[0]=pointer[7];
    }
    else if(mark[0]<=44&&mark[0]>=40)
    {
        markpointer[0]=pointer[8];
    }
    else if(mark[0]<=39)
    {
        markpointer[0]=pointer[9];
    }

//subject 2
    if(mark[1]>=85)
    {
        markpointer[1]=pointer[0];
    }
    else if(mark[1]<=84&&mark[1]>=75)
    {
        markpointer[1]=pointer[1];
    }
    else if(mark[1]<=74&&mark[1]>=70)
    {
        markpointer[1]=pointer[2];
    }
    else if(mark[1]<=69&&mark[1]>=65)
    {
        markpointer[1]=pointer[3];
    }
    else if(mark[1]<=64&&mark[1]>=60)
    {
        markpointer[1]=pointer[4];
    }
    else if(mark[1]<=59&&mark[1]>=55)
    {
        markpointer[1]=pointer[5];
    }
    else if(mark[1]<=54&&mark[1]>=50)
    {
        markpointer[1]=pointer[6];
    }
    else if(mark[1]<=49&&mark[1]>=45)
    {
        markpointer[1]=pointer[7];
    }
    else if(mark[1]<=44&&mark[1]>=40)
    {
        markpointer[1]=pointer[8];
    }
    else if(mark[1]<=39)
    {
        markpointer[1]=pointer[9];
    }

    //subject 3
    if(mark[2]>=85)
    {
        markpointer[2]=pointer[0];
    }
    else if(mark[2]<=84&&mark[2]>=75)
    {
        markpointer[2]=pointer[1];
    }
    else if(mark[2]<=74&&mark[2]>=70)
    {
        markpointer[2]=pointer[2];
    }
    else if(mark[2]<=69&&mark[2]>=65)
    {
        markpointer[2]=pointer[3];
    }
    else if(mark[2]<=64&&mark[2]>=60)
    {
        markpointer[2]=pointer[4];
    }
    else if(mark[2]<=59&&mark[2]>=55)
    {
        markpointer[2]=pointer[5];
    }
    else if(mark[2]<=54&&mark[2]>=50)
    {
        markpointer[2]=pointer[6];
    }
    else if(mark[2]<=49&&mark[2]>=45)
    {
        markpointer[2]=pointer[7];
    }
    else if(mark[2]<=44&&mark[2]>=40)
    {
        markpointer[2]=pointer[8];
    }
    else if(mark[2]<=39)
    {
        markpointer[2]=pointer[9];
    }

    //subject 4
    if(mark[3]>=85)
    {
        markpointer[3]=pointer[0];
    }
    else if(mark[3]<=84&&mark[3]>=75)
    {
        markpointer[3]=pointer[1];
    }
    else if(mark[3]<=74&&mark[3]>=70)
    {
        markpointer[3]=pointer[2];
    }
    else if(mark[3]<=65&&mark[3]>=65)
    {
        markpointer[3]=pointer[3];
    }
    else if(mark[3]<=64&&mark[3]>=60)
    {
        markpointer[3]=pointer[4];
    }
    else if(mark[3]<=59&&mark[3]>=55)
    {
        markpointer[3]=pointer[5];
    }
    else if(mark[3]<=54&&mark[3]>=50)
    {
        markpointer[3]=pointer[6];
    }
    else if(mark[3]<=49&&mark[3]>=45)
    {
        markpointer[3]=pointer[7];
    }
    else if(mark[3]<=44&&mark[3]>=40)
    {
        markpointer[3]=pointer[8];
    }
    else if(mark[3]<=39)
    {
        markpointer[3]=pointer[9];
    }

    //subject 5
    if(mark[4]>=85)
    {
        markpointer[4]=pointer[0];
    }
    else if(mark[4]<=84&&mark[4]>=75)
    {
        markpointer[4]=pointer[1];
    }
    else if(mark[4]<=74&&mark[4]>=70)
    {
        markpointer[4]=pointer[2];
    }
    else if(mark[4]<=69&&mark[4]>=65)
    {
        markpointer[4]=pointer[3];
    }
    else if(mark[4]<=64&&mark[4]>=60)
    {
        markpointer[4]=pointer[4];
    }
    else if(mark[4]<=59&&mark[4]>=55)
    {
        markpointer[4]=pointer[5];
    }
    else if(mark[4]<=54&&mark[4]>=50)
    {
        markpointer[4]=pointer[6];
    }
    else if(mark[4]<=49&&mark[4]>=45)
    {
        markpointer[4]=pointer[7];
    }
    else if(mark[4]<=44&&mark[4]>=40)
    {
        markpointer[4]=pointer[8];
    }
    else if(mark[4]<=39)
    {
        markpointer[4]=pointer[9];
    }

    //subject 6
    if(mark[5]>=85)
    {
        markpointer[5]=pointer[0];
    }
    else if(mark[5]<=84&&mark[5]>=75)
    {
        markpointer[5]=pointer[1];
    }
    else if(mark[5]<=74&&mark[5]>=70)
    {
        markpointer[5]=pointer[2];
    }
    else if(mark[5]<=69&&mark[5]>=65)
    {
        markpointer[5]=pointer[3];
    }
    else if(mark[5]<=64&&mark[5]>=60)
    {
        markpointer[5]=pointer[4];
    }
    else if(mark[5]<=59&&mark[5]>=55)
    {
        markpointer[5]=pointer[5];
    }
    else if(mark[5]<=54&&mark[5]>=50)
    {
        markpointer[0]=pointer[6];
    }
    else if(mark[5]<=49&&mark[5]>=45)
    {
        markpointer[5]=pointer[7];
    }
    else if(mark[5]<=44&&mark[5]>=40)
    {
        markpointer[5]=pointer[8];
    }
    else if(mark[5]<=39)
    {
        markpointer[5]=pointer[9];
    }

    //subject 7
    if(mark[6]>=85)
    {
        markpointer[6]=pointer[0];
    }
    else if(mark[6]<=84&&mark[6]>=75)
    {
        markpointer[6]=pointer[1];
    }
    else if(mark[6]<=74&&mark[6]>=70)
    {
        markpointer[6]=pointer[2];
    }
    else if(mark[6]<=69&&mark[6]>=65)
    {
        markpointer[6]=pointer[3];
    }
    else if(mark[6]<=64&&mark[6]>=60)
    {
        markpointer[6]=pointer[4];
    }
    else if(mark[6]<=59&&mark[6]>=55)
    {
        markpointer[6]=pointer[5];
    }
    else if(mark[6]<=54&&mark[6]>=50)
    {
        markpointer[6]=pointer[6];
    }
    else if(mark[6]<=49&&mark[6]>=45)
    {
        markpointer[6]=pointer[7];
    }
    else if(mark[6]<=44&&mark[6]>=40)
    {
        markpointer[6]=pointer[8];
    }
    else if(mark[6]<=39)
    {
        markpointer[6]=pointer[9];
    }

    gpa[0] = (markpointer[0]+markpointer[1]+markpointer[2]+markpointer[3]+markpointer[4]+markpointer[5]+markpointer[6])/7;
    cgpa = gpa[0];


    system("cls");
    printf("\n\t\t\tSemester 1\n\n\t\t\tSubject list :");
    printf("\n\t\t\t1.GEL 2312 German Language 1 : %.2f",markpointer[0]);
    printf("\n\t\t\t2.CIT 0513 COMPUTER & PROGRAMMING : %.2f",markpointer[1]);
    printf("\n\t\t\t3.MPU 2222 EFFECTIVE COMMUNICATION SKILLS : %.2f",markpointer[2]);
    printf("\n\t\t\t4.CIT 0612 COMPUTER ETHICS & VALUES : %.2f",markpointer[3]);
    printf("\n\t\t\t5.MAP 2223 DISCRETE MATHEMATICS : %.2f",markpointer[4]);
    printf("\n\t\t\t6.SDT 2113 BASIC OF SOFTWARE ENGINEERING : %.2f",markpointer[5]);
    printf("\n\t\t\t7.CIT 0623 OPERATING SYSTEMS : %.2f",markpointer[6]);
    printf("\n\n\t\t\tYour SEM 1 GPA = %.2f\n\t\t\tYour CGPA = %.2f",gpa[0],cgpa);
    sleep(3);

    do
    {
        system("cls");
        printf("\n\t\t\tBack to Select Semester?\n\t\t\t1.Yes\n\t\t\t2.No");
        scanf("%d",&backsem);
        if(backsem=1)
        {
            semselect();
            break;
        }
        else if(backsem=2)
        {
            printf("\n\t\t\tBye!!!\n\t");
            break;
        }
        else
        {
            printf("\n\t\t\tWrong Selection\n\t");
        }
    }while(backsem<1&&backsem>2);
    return 0;
}

void sem2()
{
    system("cls");
    printf("\n\t\t\tEnter Your Sem 1 GPA : ");
    scanf("%f",&gpa[0]);

    system("cls");
    printf("\n\t\t\tSemester 1\n\n\t\t\tSubject list :");
    printf("\n\t\t\t1.GEL 2312 German Language 1 : ");
    scanf("%d",&mark[0]);
    printf("\n\t\t\t2.CIT 0513 COMPUTER & PROGRAMMING : ");
    scanf("%d",&mark[1]);
    printf("\n\t\t\t3.MPU 2222 EFFECTIVE COMMUNICATION SKILLS : ");
    scanf("%d",&mark[2]);
    printf("\n\t\t\t4.CIT 0612 COMPUTER ETHICS & VALUES : ");
    scanf("%d",&mark[3]);
    printf("\n\t\t\t5.MAP 2223 DISCRETE MATHEMATICS : ");
    scanf("%d",&mark[4]);
    printf("\n\t\t\t6.SDT 2113 BASIC OF SOFTWARE ENGINEERING : ");
    scanf("%d",&mark[5]);
    printf("\n\t\t\t7.CIT 0623 OPERATING SYSTEMS : ");
    scanf("%d",&mark[6]);

    //subject 1
    if(mark[0]>=85)
    {
        markpointer[0]=pointer[0];
    }
    else if(mark[0]<=84&&mark[0]>=75)
    {
        markpointer[0]=pointer[1];
    }
    else if(mark[0]<=74&&mark[0]>=70)
    {
        markpointer[0]=pointer[2];
    }
    else if(mark[0]<=69&&mark[0]>=65)
    {
        markpointer[0]=pointer[3];
    }
    else if(mark[0]<=64&&mark[0]>=60)
    {
        markpointer[0]=pointer[4];
    }
    else if(mark[0]<=59&&mark[0]>=55)
    {
        markpointer[0]=pointer[5];
    }
    else if(mark[0]<=54&&mark[0]>=50)
    {
        markpointer[0]=pointer[6];
    }
    else if(mark[0]<=49&&mark[0]>=45)
    {
        markpointer[0]=pointer[7];
    }
    else if(mark[0]<=44&&mark[0]>=40)
    {
        markpointer[0]=pointer[8];
    }
    else if(mark[0]<=39)
    {
        markpointer[0]=pointer[9];
    }

//subject 2
    if(mark[1]>=85)
    {
        markpointer[1]=pointer[0];
    }
    else if(mark[1]<=84&&mark[1]>=75)
    {
        markpointer[1]=pointer[1];
    }
    else if(mark[1]<=74&&mark[1]>=70)
    {
        markpointer[1]=pointer[2];
    }
    else if(mark[1]<=69&&mark[1]>=65)
    {
        markpointer[1]=pointer[3];
    }
    else if(mark[1]<=64&&mark[1]>=60)
    {
        markpointer[1]=pointer[4];
    }
    else if(mark[1]<=59&&mark[1]>=55)
    {
        markpointer[1]=pointer[5];
    }
    else if(mark[1]<=54&&mark[1]>=50)
    {
        markpointer[1]=pointer[6];
    }
    else if(mark[1]<=49&&mark[1]>=45)
    {
        markpointer[1]=pointer[7];
    }
    else if(mark[1]<=44&&mark[1]>=40)
    {
        markpointer[1]=pointer[8];
    }
    else if(mark[1]<=39)
    {
        markpointer[1]=pointer[9];
    }

    //subject 3
    if(mark[2]>=85)
    {
        markpointer[2]=pointer[0];
    }
    else if(mark[2]<=84&&mark[2]>=75)
    {
        markpointer[2]=pointer[1];
    }
    else if(mark[2]<=74&&mark[2]>=70)
    {
        markpointer[2]=pointer[2];
    }
    else if(mark[2]<=69&&mark[2]>=65)
    {
        markpointer[2]=pointer[3];
    }
    else if(mark[2]<=64&&mark[2]>=60)
    {
        markpointer[2]=pointer[4];
    }
    else if(mark[2]<=59&&mark[2]>=55)
    {
        markpointer[2]=pointer[5];
    }
    else if(mark[2]<=54&&mark[2]>=50)
    {
        markpointer[2]=pointer[6];
    }
    else if(mark[2]<=49&&mark[2]>=45)
    {
        markpointer[2]=pointer[7];
    }
    else if(mark[2]<=44&&mark[2]>=40)
    {
        markpointer[2]=pointer[8];
    }
    else if(mark[2]<=39)
    {
        markpointer[2]=pointer[9];
    }

    //subject 4
    if(mark[3]>=85)
    {
        markpointer[3]=pointer[0];
    }
    else if(mark[3]<=84&&mark[3]>=75)
    {
        markpointer[3]=pointer[1];
    }
    else if(mark[3]<=74&&mark[3]>=70)
    {
        markpointer[3]=pointer[2];
    }
    else if(mark[3]<=65&&mark[3]>=65)
    {
        markpointer[3]=pointer[3];
    }
    else if(mark[3]<=64&&mark[3]>=60)
    {
        markpointer[3]=pointer[4];
    }
    else if(mark[3]<=59&&mark[3]>=55)
    {
        markpointer[3]=pointer[5];
    }
    else if(mark[3]<=54&&mark[3]>=50)
    {
        markpointer[3]=pointer[6];
    }
    else if(mark[3]<=49&&mark[3]>=45)
    {
        markpointer[3]=pointer[7];
    }
    else if(mark[3]<=44&&mark[3]>=40)
    {
        markpointer[3]=pointer[8];
    }
    else if(mark[3]<=39)
    {
        markpointer[3]=pointer[9];
    }

    //subject 5
    if(mark[4]>=85)
    {
        markpointer[4]=pointer[0];
    }
    else if(mark[4]<=84&&mark[4]>=75)
    {
        markpointer[4]=pointer[1];
    }
    else if(mark[4]<=74&&mark[4]>=70)
    {
        markpointer[4]=pointer[2];
    }
    else if(mark[4]<=69&&mark[4]>=65)
    {
        markpointer[4]=pointer[3];
    }
    else if(mark[4]<=64&&mark[4]>=60)
    {
        markpointer[4]=pointer[4];
    }
    else if(mark[4]<=59&&mark[4]>=55)
    {
        markpointer[4]=pointer[5];
    }
    else if(mark[4]<=54&&mark[4]>=50)
    {
        markpointer[4]=pointer[6];
    }
    else if(mark[4]<=49&&mark[4]>=45)
    {
        markpointer[4]=pointer[7];
    }
    else if(mark[4]<=44&&mark[4]>=40)
    {
        markpointer[4]=pointer[8];
    }
    else if(mark[4]<=39)
    {
        markpointer[4]=pointer[9];
    }

    //subject 6
    if(mark[5]>=85)
    {
        markpointer[5]=pointer[0];
    }
    else if(mark[5]<=84&&mark[5]>=75)
    {
        markpointer[5]=pointer[1];
    }
    else if(mark[5]<=74&&mark[5]>=70)
    {
        markpointer[5]=pointer[2];
    }
    else if(mark[5]<=69&&mark[5]>=65)
    {
        markpointer[5]=pointer[3];
    }
    else if(mark[5]<=64&&mark[5]>=60)
    {
        markpointer[5]=pointer[4];
    }
    else if(mark[5]<=59&&mark[5]>=55)
    {
        markpointer[5]=pointer[5];
    }
    else if(mark[5]<=54&&mark[5]>=50)
    {
        markpointer[0]=pointer[6];
    }
    else if(mark[5]<=49&&mark[5]>=45)
    {
        markpointer[5]=pointer[7];
    }
    else if(mark[5]<=44&&mark[5]>=40)
    {
        markpointer[5]=pointer[8];
    }
    else if(mark[5]<=39)
    {
        markpointer[5]=pointer[9];
    }

    //subject 7
    if(mark[6]>=85)
    {
        markpointer[6]=pointer[0];
    }
    else if(mark[6]<=84&&mark[6]>=75)
    {
        markpointer[6]=pointer[1];
    }
    else if(mark[6]<=74&&mark[6]>=70)
    {
        markpointer[6]=pointer[2];
    }
    else if(mark[6]<=69&&mark[6]>=65)
    {
        markpointer[6]=pointer[3];
    }
    else if(mark[6]<=64&&mark[6]>=60)
    {
        markpointer[6]=pointer[4];
    }
    else if(mark[6]<=59&&mark[6]>=55)
    {
        markpointer[6]=pointer[5];
    }
    else if(mark[6]<=54&&mark[6]>=50)
    {
        markpointer[6]=pointer[6];
    }
    else if(mark[6]<=49&&mark[6]>=45)
    {
        markpointer[6]=pointer[7];
    }
    else if(mark[6]<=44&&mark[6]>=40)
    {
        markpointer[6]=pointer[8];
    }
    else if(mark[6]<=39)
    {
        markpointer[6]=pointer[9];
    }

    gpa[1] = (markpointer[0]+markpointer[1]+markpointer[2]+markpointer[3]+markpointer[4]+markpointer[5]+markpointer[6])/7;
    cgpa = (gpa[0]+gpa[1])/2;


    system("cls");
    printf("\n\t\t\tSemester 1\n\n\t\t\tSubject list :");
    printf("\n\t\t\t1.GEL 2312 German Language 1 : %.2f",markpointer[0]);
    printf("\n\t\t\t2.CIT 0513 COMPUTER & PROGRAMMING : %.2f",markpointer[1]);
    printf("\n\t\t\t3.MPU 2222 EFFECTIVE COMMUNICATION SKILLS : %.2f",markpointer[2]);
    printf("\n\t\t\t4.CIT 0612 COMPUTER ETHICS & VALUES : %.2f",markpointer[3]);
    printf("\n\t\t\t5.MAP 2223 DISCRETE MATHEMATICS : %.2f",markpointer[4]);
    printf("\n\t\t\t6.SDT 2113 BASIC OF SOFTWARE ENGINEERING : %.2f",markpointer[5]);
    printf("\n\t\t\t7.CIT 0623 OPERATING SYSTEMS : %.2f",markpointer[6]);
    printf("\n\n\t\t\tYour SEM 2 GPA = %.2f\n\t\t\tYour CGPA = %.2f",gpa[1],cgpa);
    sleep(3);

     do
    {
        system("cls");
        printf("\n\t\t\tBack to Select Semester?\n\t\t\t1.Yes\n\t\t\t2.No");
        scanf("%d",&backsem);
        if(backsem=1)
        {
            semselect();
            break;
        }
        else if(backsem=2)
        {
            printf("\n\t\t\tBye!!!\n\t");
            break;
        }
        else
        {
            printf("\n\t\t\tWrong Selection\n\t");
        }
    }while(backsem<1&&backsem>2);
    return 0;
}

void sem3()
{
    system("cls");
    printf("\n\t\t\tEnter Your Sem 1 GPA : ");
    scanf("%f",&gpa[0]);
    printf("\n\t\t\tEnter Your Sem 2 GPA : ");
    scanf("%f",&gpa[1]);

    system("cls");
    printf("\n\t\t\tSemester 1\n\n\t\t\tSubject list :");
    printf("\n\t\t\t1.GEL 2312 German Language 1 : ");
    scanf("%d",&mark[0]);
    printf("\n\t\t\t2.CIT 0513 COMPUTER & PROGRAMMING : ");
    scanf("%d",&mark[1]);
    printf("\n\t\t\t3.MPU 2222 EFFECTIVE COMMUNICATION SKILLS : ");
    scanf("%d",&mark[2]);
    printf("\n\t\t\t4.CIT 0612 COMPUTER ETHICS & VALUES : ");
    scanf("%d",&mark[3]);
    printf("\n\t\t\t5.MAP 2223 DISCRETE MATHEMATICS : ");
    scanf("%d",&mark[4]);
    printf("\n\t\t\t6.SDT 2113 BASIC OF SOFTWARE ENGINEERING : ");
    scanf("%d",&mark[5]);
    printf("\n\t\t\t7.CIT 0623 OPERATING SYSTEMS : ");
    scanf("%d",&mark[6]);

    //subject 1
    if(mark[0]>=85)
    {
        markpointer[0]=pointer[0];
    }
    else if(mark[0]<=84&&mark[0]>=75)
    {
        markpointer[0]=pointer[1];
    }
    else if(mark[0]<=74&&mark[0]>=70)
    {
        markpointer[0]=pointer[2];
    }
    else if(mark[0]<=69&&mark[0]>=65)
    {
        markpointer[0]=pointer[3];
    }
    else if(mark[0]<=64&&mark[0]>=60)
    {
        markpointer[0]=pointer[4];
    }
    else if(mark[0]<=59&&mark[0]>=55)
    {
        markpointer[0]=pointer[5];
    }
    else if(mark[0]<=54&&mark[0]>=50)
    {
        markpointer[0]=pointer[6];
    }
    else if(mark[0]<=49&&mark[0]>=45)
    {
        markpointer[0]=pointer[7];
    }
    else if(mark[0]<=44&&mark[0]>=40)
    {
        markpointer[0]=pointer[8];
    }
    else if(mark[0]<=39)
    {
        markpointer[0]=pointer[9];
    }

//subject 2
    if(mark[1]>=85)
    {
        markpointer[1]=pointer[0];
    }
    else if(mark[1]<=84&&mark[1]>=75)
    {
        markpointer[1]=pointer[1];
    }
    else if(mark[1]<=74&&mark[1]>=70)
    {
        markpointer[1]=pointer[2];
    }
    else if(mark[1]<=69&&mark[1]>=65)
    {
        markpointer[1]=pointer[3];
    }
    else if(mark[1]<=64&&mark[1]>=60)
    {
        markpointer[1]=pointer[4];
    }
    else if(mark[1]<=59&&mark[1]>=55)
    {
        markpointer[1]=pointer[5];
    }
    else if(mark[1]<=54&&mark[1]>=50)
    {
        markpointer[1]=pointer[6];
    }
    else if(mark[1]<=49&&mark[1]>=45)
    {
        markpointer[1]=pointer[7];
    }
    else if(mark[1]<=44&&mark[1]>=40)
    {
        markpointer[1]=pointer[8];
    }
    else if(mark[1]<=39)
    {
        markpointer[1]=pointer[9];
    }

    //subject 3
    if(mark[2]>=85)
    {
        markpointer[2]=pointer[0];
    }
    else if(mark[2]<=84&&mark[2]>=75)
    {
        markpointer[2]=pointer[1];
    }
    else if(mark[2]<=74&&mark[2]>=70)
    {
        markpointer[2]=pointer[2];
    }
    else if(mark[2]<=69&&mark[2]>=65)
    {
        markpointer[2]=pointer[3];
    }
    else if(mark[2]<=64&&mark[2]>=60)
    {
        markpointer[2]=pointer[4];
    }
    else if(mark[2]<=59&&mark[2]>=55)
    {
        markpointer[2]=pointer[5];
    }
    else if(mark[2]<=54&&mark[2]>=50)
    {
        markpointer[2]=pointer[6];
    }
    else if(mark[2]<=49&&mark[2]>=45)
    {
        markpointer[2]=pointer[7];
    }
    else if(mark[2]<=44&&mark[2]>=40)
    {
        markpointer[2]=pointer[8];
    }
    else if(mark[2]<=39)
    {
        markpointer[2]=pointer[9];
    }

    //subject 4
    if(mark[3]>=85)
    {
        markpointer[3]=pointer[0];
    }
    else if(mark[3]<=84&&mark[3]>=75)
    {
        markpointer[3]=pointer[1];
    }
    else if(mark[3]<=74&&mark[3]>=70)
    {
        markpointer[3]=pointer[2];
    }
    else if(mark[3]<=65&&mark[3]>=65)
    {
        markpointer[3]=pointer[3];
    }
    else if(mark[3]<=64&&mark[3]>=60)
    {
        markpointer[3]=pointer[4];
    }
    else if(mark[3]<=59&&mark[3]>=55)
    {
        markpointer[3]=pointer[5];
    }
    else if(mark[3]<=54&&mark[3]>=50)
    {
        markpointer[3]=pointer[6];
    }
    else if(mark[3]<=49&&mark[3]>=45)
    {
        markpointer[3]=pointer[7];
    }
    else if(mark[3]<=44&&mark[3]>=40)
    {
        markpointer[3]=pointer[8];
    }
    else if(mark[3]<=39)
    {
        markpointer[3]=pointer[9];
    }

    //subject 5
    if(mark[4]>=85)
    {
        markpointer[4]=pointer[0];
    }
    else if(mark[4]<=84&&mark[4]>=75)
    {
        markpointer[4]=pointer[1];
    }
    else if(mark[4]<=74&&mark[4]>=70)
    {
        markpointer[4]=pointer[2];
    }
    else if(mark[4]<=69&&mark[4]>=65)
    {
        markpointer[4]=pointer[3];
    }
    else if(mark[4]<=64&&mark[4]>=60)
    {
        markpointer[4]=pointer[4];
    }
    else if(mark[4]<=59&&mark[4]>=55)
    {
        markpointer[4]=pointer[5];
    }
    else if(mark[4]<=54&&mark[4]>=50)
    {
        markpointer[4]=pointer[6];
    }
    else if(mark[4]<=49&&mark[4]>=45)
    {
        markpointer[4]=pointer[7];
    }
    else if(mark[4]<=44&&mark[4]>=40)
    {
        markpointer[4]=pointer[8];
    }
    else if(mark[4]<=39)
    {
        markpointer[4]=pointer[9];
    }

    //subject 6
    if(mark[5]>=85)
    {
        markpointer[5]=pointer[0];
    }
    else if(mark[5]<=84&&mark[5]>=75)
    {
        markpointer[5]=pointer[1];
    }
    else if(mark[5]<=74&&mark[5]>=70)
    {
        markpointer[5]=pointer[2];
    }
    else if(mark[5]<=69&&mark[5]>=65)
    {
        markpointer[5]=pointer[3];
    }
    else if(mark[5]<=64&&mark[5]>=60)
    {
        markpointer[5]=pointer[4];
    }
    else if(mark[5]<=59&&mark[5]>=55)
    {
        markpointer[5]=pointer[5];
    }
    else if(mark[5]<=54&&mark[5]>=50)
    {
        markpointer[0]=pointer[6];
    }
    else if(mark[5]<=49&&mark[5]>=45)
    {
        markpointer[5]=pointer[7];
    }
    else if(mark[5]<=44&&mark[5]>=40)
    {
        markpointer[5]=pointer[8];
    }
    else if(mark[5]<=39)
    {
        markpointer[5]=pointer[9];
    }

    //subject 7
    if(mark[6]>=85)
    {
        markpointer[6]=pointer[0];
    }
    else if(mark[6]<=84&&mark[6]>=75)
    {
        markpointer[6]=pointer[1];
    }
    else if(mark[6]<=74&&mark[6]>=70)
    {
        markpointer[6]=pointer[2];
    }
    else if(mark[6]<=69&&mark[6]>=65)
    {
        markpointer[6]=pointer[3];
    }
    else if(mark[6]<=64&&mark[6]>=60)
    {
        markpointer[6]=pointer[4];
    }
    else if(mark[6]<=59&&mark[6]>=55)
    {
        markpointer[6]=pointer[5];
    }
    else if(mark[6]<=54&&mark[6]>=50)
    {
        markpointer[6]=pointer[6];
    }
    else if(mark[6]<=49&&mark[6]>=45)
    {
        markpointer[6]=pointer[7];
    }
    else if(mark[6]<=44&&mark[6]>=40)
    {
        markpointer[6]=pointer[8];
    }
    else if(mark[6]<=39)
    {
        markpointer[6]=pointer[9];
    }

    gpa[2] = (markpointer[0]+markpointer[1]+markpointer[2]+markpointer[3]+markpointer[4]+markpointer[5]+markpointer[6])/7;
    cgpa = (gpa[0]+gpa[1]+gpa[2])/3;


    system("cls");
    printf("\n\t\t\tSemester 1\n\n\t\t\tSubject list :");
    printf("\n\t\t\t1.GEL 2312 German Language 1 : %.2f",markpointer[0]);
    printf("\n\t\t\t2.CIT 0513 COMPUTER & PROGRAMMING : %.2f",markpointer[1]);
    printf("\n\t\t\t3.MPU 2222 EFFECTIVE COMMUNICATION SKILLS : %.2f",markpointer[2]);
    printf("\n\t\t\t4.CIT 0612 COMPUTER ETHICS & VALUES : %.2f",markpointer[3]);
    printf("\n\t\t\t5.MAP 2223 DISCRETE MATHEMATICS : %.2f",markpointer[4]);
    printf("\n\t\t\t6.SDT 2113 BASIC OF SOFTWARE ENGINEERING : %.2f",markpointer[5]);
    printf("\n\t\t\t7.CIT 0623 OPERATING SYSTEMS : %.2f",markpointer[6]);
    printf("\n\n\t\t\tYour SEM 3 GPA = %.2f\n\t\t\tYour CGPA = %.2f",gpa[2],cgpa);
    sleep(3);

     do
    {
        system("cls");
        printf("\n\t\t\tBack to Select Semester?\n\t\t\t1.Yes\n\t\t\t2.No");
        scanf("%d",&backsem);
        if(backsem=1)
        {
            semselect();
            break;
        }
        else if(backsem=2)
        {
            printf("\n\t\t\tBye!!!\n\t");
            break;
        }
        else
        {
            printf("\n\t\t\tWrong Selection\n\t");
        }
    }while(backsem<1&&backsem>2);
    return 0;
}

void sem4()
{
    system("cls");
    printf("\n\t\t\tEnter Your Sem 1 GPA : ");
    scanf("%f",&gpa[0]);
    printf("\n\t\t\tEnter Your Sem 2 GPA : ");
    scanf("%f",&gpa[1]);
    printf("\n\t\t\tEnter Your Sem 3 GPA : ");
    scanf("%f",&gpa[2]);

    system("cls");
    printf("\n\t\t\tSemester 1\n\n\t\t\tSubject list :");
    printf("\n\t\t\t1.GEL 2312 German Language 1 : ");
    scanf("%d",&mark[0]);
    printf("\n\t\t\t2.CIT 0513 COMPUTER & PROGRAMMING : ");
    scanf("%d",&mark[1]);
    printf("\n\t\t\t3.MPU 2222 EFFECTIVE COMMUNICATION SKILLS : ");
    scanf("%d",&mark[2]);
    printf("\n\t\t\t4.CIT 0612 COMPUTER ETHICS & VALUES : ");
    scanf("%d",&mark[3]);
    printf("\n\t\t\t5.MAP 2223 DISCRETE MATHEMATICS : ");
    scanf("%d",&mark[4]);
    printf("\n\t\t\t6.SDT 2113 BASIC OF SOFTWARE ENGINEERING : ");
    scanf("%d",&mark[5]);
    printf("\n\t\t\t7.CIT 0623 OPERATING SYSTEMS : ");
    scanf("%d",&mark[6]);

    //subject 1
    if(mark[0]>=85)
    {
        markpointer[0]=pointer[0];
    }
    else if(mark[0]<=84&&mark[0]>=75)
    {
        markpointer[0]=pointer[1];
    }
    else if(mark[0]<=74&&mark[0]>=70)
    {
        markpointer[0]=pointer[2];
    }
    else if(mark[0]<=69&&mark[0]>=65)
    {
        markpointer[0]=pointer[3];
    }
    else if(mark[0]<=64&&mark[0]>=60)
    {
        markpointer[0]=pointer[4];
    }
    else if(mark[0]<=59&&mark[0]>=55)
    {
        markpointer[0]=pointer[5];
    }
    else if(mark[0]<=54&&mark[0]>=50)
    {
        markpointer[0]=pointer[6];
    }
    else if(mark[0]<=49&&mark[0]>=45)
    {
        markpointer[0]=pointer[7];
    }
    else if(mark[0]<=44&&mark[0]>=40)
    {
        markpointer[0]=pointer[8];
    }
    else if(mark[0]<=39)
    {
        markpointer[0]=pointer[9];
    }

//subject 2
    if(mark[1]>=85)
    {
        markpointer[1]=pointer[0];
    }
    else if(mark[1]<=84&&mark[1]>=75)
    {
        markpointer[1]=pointer[1];
    }
    else if(mark[1]<=74&&mark[1]>=70)
    {
        markpointer[1]=pointer[2];
    }
    else if(mark[1]<=69&&mark[1]>=65)
    {
        markpointer[1]=pointer[3];
    }
    else if(mark[1]<=64&&mark[1]>=60)
    {
        markpointer[1]=pointer[4];
    }
    else if(mark[1]<=59&&mark[1]>=55)
    {
        markpointer[1]=pointer[5];
    }
    else if(mark[1]<=54&&mark[1]>=50)
    {
        markpointer[1]=pointer[6];
    }
    else if(mark[1]<=49&&mark[1]>=45)
    {
        markpointer[1]=pointer[7];
    }
    else if(mark[1]<=44&&mark[1]>=40)
    {
        markpointer[1]=pointer[8];
    }
    else if(mark[1]<=39)
    {
        markpointer[1]=pointer[9];
    }

    //subject 3
    if(mark[2]>=85)
    {
        markpointer[2]=pointer[0];
    }
    else if(mark[2]<=84&&mark[2]>=75)
    {
        markpointer[2]=pointer[1];
    }
    else if(mark[2]<=74&&mark[2]>=70)
    {
        markpointer[2]=pointer[2];
    }
    else if(mark[2]<=69&&mark[2]>=65)
    {
        markpointer[2]=pointer[3];
    }
    else if(mark[2]<=64&&mark[2]>=60)
    {
        markpointer[2]=pointer[4];
    }
    else if(mark[2]<=59&&mark[2]>=55)
    {
        markpointer[2]=pointer[5];
    }
    else if(mark[2]<=54&&mark[2]>=50)
    {
        markpointer[2]=pointer[6];
    }
    else if(mark[2]<=49&&mark[2]>=45)
    {
        markpointer[2]=pointer[7];
    }
    else if(mark[2]<=44&&mark[2]>=40)
    {
        markpointer[2]=pointer[8];
    }
    else if(mark[2]<=39)
    {
        markpointer[2]=pointer[9];
    }

    //subject 4
    if(mark[3]>=85)
    {
        markpointer[3]=pointer[0];
    }
    else if(mark[3]<=84&&mark[3]>=75)
    {
        markpointer[3]=pointer[1];
    }
    else if(mark[3]<=74&&mark[3]>=70)
    {
        markpointer[3]=pointer[2];
    }
    else if(mark[3]<=65&&mark[3]>=65)
    {
        markpointer[3]=pointer[3];
    }
    else if(mark[3]<=64&&mark[3]>=60)
    {
        markpointer[3]=pointer[4];
    }
    else if(mark[3]<=59&&mark[3]>=55)
    {
        markpointer[3]=pointer[5];
    }
    else if(mark[3]<=54&&mark[3]>=50)
    {
        markpointer[3]=pointer[6];
    }
    else if(mark[3]<=49&&mark[3]>=45)
    {
        markpointer[3]=pointer[7];
    }
    else if(mark[3]<=44&&mark[3]>=40)
    {
        markpointer[3]=pointer[8];
    }
    else if(mark[3]<=39)
    {
        markpointer[3]=pointer[9];
    }

    //subject 5
    if(mark[4]>=85)
    {
        markpointer[4]=pointer[0];
    }
    else if(mark[4]<=84&&mark[4]>=75)
    {
        markpointer[4]=pointer[1];
    }
    else if(mark[4]<=74&&mark[4]>=70)
    {
        markpointer[4]=pointer[2];
    }
    else if(mark[4]<=69&&mark[4]>=65)
    {
        markpointer[4]=pointer[3];
    }
    else if(mark[4]<=64&&mark[4]>=60)
    {
        markpointer[4]=pointer[4];
    }
    else if(mark[4]<=59&&mark[4]>=55)
    {
        markpointer[4]=pointer[5];
    }
    else if(mark[4]<=54&&mark[4]>=50)
    {
        markpointer[4]=pointer[6];
    }
    else if(mark[4]<=49&&mark[4]>=45)
    {
        markpointer[4]=pointer[7];
    }
    else if(mark[4]<=44&&mark[4]>=40)
    {
        markpointer[4]=pointer[8];
    }
    else if(mark[4]<=39)
    {
        markpointer[4]=pointer[9];
    }

    //subject 6
    if(mark[5]>=85)
    {
        markpointer[5]=pointer[0];
    }
    else if(mark[5]<=84&&mark[5]>=75)
    {
        markpointer[5]=pointer[1];
    }
    else if(mark[5]<=74&&mark[5]>=70)
    {
        markpointer[5]=pointer[2];
    }
    else if(mark[5]<=69&&mark[5]>=65)
    {
        markpointer[5]=pointer[3];
    }
    else if(mark[5]<=64&&mark[5]>=60)
    {
        markpointer[5]=pointer[4];
    }
    else if(mark[5]<=59&&mark[5]>=55)
    {
        markpointer[5]=pointer[5];
    }
    else if(mark[5]<=54&&mark[5]>=50)
    {
        markpointer[0]=pointer[6];
    }
    else if(mark[5]<=49&&mark[5]>=45)
    {
        markpointer[5]=pointer[7];
    }
    else if(mark[5]<=44&&mark[5]>=40)
    {
        markpointer[5]=pointer[8];
    }
    else if(mark[5]<=39)
    {
        markpointer[5]=pointer[9];
    }

    //subject 7
    if(mark[6]>=85)
    {
        markpointer[6]=pointer[0];
    }
    else if(mark[6]<=84&&mark[6]>=75)
    {
        markpointer[6]=pointer[1];
    }
    else if(mark[6]<=74&&mark[6]>=70)
    {
        markpointer[6]=pointer[2];
    }
    else if(mark[6]<=69&&mark[6]>=65)
    {
        markpointer[6]=pointer[3];
    }
    else if(mark[6]<=64&&mark[6]>=60)
    {
        markpointer[6]=pointer[4];
    }
    else if(mark[6]<=59&&mark[6]>=55)
    {
        markpointer[6]=pointer[5];
    }
    else if(mark[6]<=54&&mark[6]>=50)
    {
        markpointer[6]=pointer[6];
    }
    else if(mark[6]<=49&&mark[6]>=45)
    {
        markpointer[6]=pointer[7];
    }
    else if(mark[6]<=44&&mark[6]>=40)
    {
        markpointer[6]=pointer[8];
    }
    else if(mark[6]<=39)
    {
        markpointer[6]=pointer[9];
    }

    gpa[3] = (markpointer[0]+markpointer[1]+markpointer[2]+markpointer[3]+markpointer[4]+markpointer[5]+markpointer[6])/7;
    cgpa = (gpa[0]+gpa[1]+gpa[2]+gpa[3])/4;


    system("cls");
    printf("\n\t\t\tSemester 1\n\n\t\t\tSubject list :");
    printf("\n\t\t\t1.GEL 2312 German Language 1 : %.2f",markpointer[0]);
    printf("\n\t\t\t2.CIT 0513 COMPUTER & PROGRAMMING : %.2f",markpointer[1]);
    printf("\n\t\t\t3.MPU 2222 EFFECTIVE COMMUNICATION SKILLS : %.2f",markpointer[2]);
    printf("\n\t\t\t4.CIT 0612 COMPUTER ETHICS & VALUES : %.2f",markpointer[3]);
    printf("\n\t\t\t5.MAP 2223 DISCRETE MATHEMATICS : %.2f",markpointer[4]);
    printf("\n\t\t\t6.SDT 2113 BASIC OF SOFTWARE ENGINEERING : %.2f",markpointer[5]);
    printf("\n\t\t\t7.CIT 0623 OPERATING SYSTEMS : %.2f",markpointer[6]);
    printf("\n\n\t\t\tYour SEM 4 GPA = %.2f\n\t\t\tYour CGPA = %.2f",gpa[3],cgpa);
    sleep(3);

     do
    {
        system("cls");
        printf("\n\t\t\tBack to Select Semester?\n\t\t\t1.Yes\n\t\t\t2.No");
        scanf("%d",&backsem);
        if(backsem=1)
        {
            semselect();
            break;
        }
        else if(backsem=2)
        {
            printf("\n\t\t\tBye!!!\n\t");
            break;
        }
        else
        {
            printf("\n\t\t\tWrong Selection\n\t");
        }
    }while(backsem<1&&backsem>2);
    return 0;
}

void sem5()
{
    system("cls");
    printf("\n\t\t\tEnter Your Sem 1 GPA : ");
    scanf("%f",&gpa[0]);
    printf("\n\t\t\tEnter Your Sem 2 GPA : ");
    scanf("%f",&gpa[1]);
    printf("\n\t\t\tEnter Your Sem 3 GPA : ");
    scanf("%f",&gpa[2]);
    printf("\n\t\t\tEnter Your Sem 4 GPA : ");
    scanf("%f",&gpa[3]);

    system("cls");
    printf("\n\t\t\tSemester 1\n\n\t\t\tSubject list :");
    printf("\n\t\t\t1.GEL 2312 German Language 1 : ");
    scanf("%d",&mark[0]);
    printf("\n\t\t\t2.CIT 0513 COMPUTER & PROGRAMMING : ");
    scanf("%d",&mark[1]);
    printf("\n\t\t\t3.MPU 2222 EFFECTIVE COMMUNICATION SKILLS : ");
    scanf("%d",&mark[2]);
    printf("\n\t\t\t4.CIT 0612 COMPUTER ETHICS & VALUES : ");
    scanf("%d",&mark[3]);
    printf("\n\t\t\t5.MAP 2223 DISCRETE MATHEMATICS : ");
    scanf("%d",&mark[4]);
    printf("\n\t\t\t6.SDT 2113 BASIC OF SOFTWARE ENGINEERING : ");
    scanf("%d",&mark[5]);
    printf("\n\t\t\t7.CIT 0623 OPERATING SYSTEMS : ");
    scanf("%d",&mark[6]);

    //subject 1
    if(mark[0]>=85)
    {
        markpointer[0]=pointer[0];
    }
    else if(mark[0]<=84&&mark[0]>=75)
    {
        markpointer[0]=pointer[1];
    }
    else if(mark[0]<=74&&mark[0]>=70)
    {
        markpointer[0]=pointer[2];
    }
    else if(mark[0]<=69&&mark[0]>=65)
    {
        markpointer[0]=pointer[3];
    }
    else if(mark[0]<=64&&mark[0]>=60)
    {
        markpointer[0]=pointer[4];
    }
    else if(mark[0]<=59&&mark[0]>=55)
    {
        markpointer[0]=pointer[5];
    }
    else if(mark[0]<=54&&mark[0]>=50)
    {
        markpointer[0]=pointer[6];
    }
    else if(mark[0]<=49&&mark[0]>=45)
    {
        markpointer[0]=pointer[7];
    }
    else if(mark[0]<=44&&mark[0]>=40)
    {
        markpointer[0]=pointer[8];
    }
    else if(mark[0]<=39)
    {
        markpointer[0]=pointer[9];
    }

//subject 2
    if(mark[1]>=85)
    {
        markpointer[1]=pointer[0];
    }
    else if(mark[1]<=84&&mark[1]>=75)
    {
        markpointer[1]=pointer[1];
    }
    else if(mark[1]<=74&&mark[1]>=70)
    {
        markpointer[1]=pointer[2];
    }
    else if(mark[1]<=69&&mark[1]>=65)
    {
        markpointer[1]=pointer[3];
    }
    else if(mark[1]<=64&&mark[1]>=60)
    {
        markpointer[1]=pointer[4];
    }
    else if(mark[1]<=59&&mark[1]>=55)
    {
        markpointer[1]=pointer[5];
    }
    else if(mark[1]<=54&&mark[1]>=50)
    {
        markpointer[1]=pointer[6];
    }
    else if(mark[1]<=49&&mark[1]>=45)
    {
        markpointer[1]=pointer[7];
    }
    else if(mark[1]<=44&&mark[1]>=40)
    {
        markpointer[1]=pointer[8];
    }
    else if(mark[1]<=39)
    {
        markpointer[1]=pointer[9];
    }

    //subject 3
    if(mark[2]>=85)
    {
        markpointer[2]=pointer[0];
    }
    else if(mark[2]<=84&&mark[2]>=75)
    {
        markpointer[2]=pointer[1];
    }
    else if(mark[2]<=74&&mark[2]>=70)
    {
        markpointer[2]=pointer[2];
    }
    else if(mark[2]<=69&&mark[2]>=65)
    {
        markpointer[2]=pointer[3];
    }
    else if(mark[2]<=64&&mark[2]>=60)
    {
        markpointer[2]=pointer[4];
    }
    else if(mark[2]<=59&&mark[2]>=55)
    {
        markpointer[2]=pointer[5];
    }
    else if(mark[2]<=54&&mark[2]>=50)
    {
        markpointer[2]=pointer[6];
    }
    else if(mark[2]<=49&&mark[2]>=45)
    {
        markpointer[2]=pointer[7];
    }
    else if(mark[2]<=44&&mark[2]>=40)
    {
        markpointer[2]=pointer[8];
    }
    else if(mark[2]<=39)
    {
        markpointer[2]=pointer[9];
    }

    //subject 4
    if(mark[3]>=85)
    {
        markpointer[3]=pointer[0];
    }
    else if(mark[3]<=84&&mark[3]>=75)
    {
        markpointer[3]=pointer[1];
    }
    else if(mark[3]<=74&&mark[3]>=70)
    {
        markpointer[3]=pointer[2];
    }
    else if(mark[3]<=65&&mark[3]>=65)
    {
        markpointer[3]=pointer[3];
    }
    else if(mark[3]<=64&&mark[3]>=60)
    {
        markpointer[3]=pointer[4];
    }
    else if(mark[3]<=59&&mark[3]>=55)
    {
        markpointer[3]=pointer[5];
    }
    else if(mark[3]<=54&&mark[3]>=50)
    {
        markpointer[3]=pointer[6];
    }
    else if(mark[3]<=49&&mark[3]>=45)
    {
        markpointer[3]=pointer[7];
    }
    else if(mark[3]<=44&&mark[3]>=40)
    {
        markpointer[3]=pointer[8];
    }
    else if(mark[3]<=39)
    {
        markpointer[3]=pointer[9];
    }

    //subject 5
    if(mark[4]>=85)
    {
        markpointer[4]=pointer[0];
    }
    else if(mark[4]<=84&&mark[4]>=75)
    {
        markpointer[4]=pointer[1];
    }
    else if(mark[4]<=74&&mark[4]>=70)
    {
        markpointer[4]=pointer[2];
    }
    else if(mark[4]<=69&&mark[4]>=65)
    {
        markpointer[4]=pointer[3];
    }
    else if(mark[4]<=64&&mark[4]>=60)
    {
        markpointer[4]=pointer[4];
    }
    else if(mark[4]<=59&&mark[4]>=55)
    {
        markpointer[4]=pointer[5];
    }
    else if(mark[4]<=54&&mark[4]>=50)
    {
        markpointer[4]=pointer[6];
    }
    else if(mark[4]<=49&&mark[4]>=45)
    {
        markpointer[4]=pointer[7];
    }
    else if(mark[4]<=44&&mark[4]>=40)
    {
        markpointer[4]=pointer[8];
    }
    else if(mark[4]<=39)
    {
        markpointer[4]=pointer[9];
    }

    //subject 6
    if(mark[5]>=85)
    {
        markpointer[5]=pointer[0];
    }
    else if(mark[5]<=84&&mark[5]>=75)
    {
        markpointer[5]=pointer[1];
    }
    else if(mark[5]<=74&&mark[5]>=70)
    {
        markpointer[5]=pointer[2];
    }
    else if(mark[5]<=69&&mark[5]>=65)
    {
        markpointer[5]=pointer[3];
    }
    else if(mark[5]<=64&&mark[5]>=60)
    {
        markpointer[5]=pointer[4];
    }
    else if(mark[5]<=59&&mark[5]>=55)
    {
        markpointer[5]=pointer[5];
    }
    else if(mark[5]<=54&&mark[5]>=50)
    {
        markpointer[0]=pointer[6];
    }
    else if(mark[5]<=49&&mark[5]>=45)
    {
        markpointer[5]=pointer[7];
    }
    else if(mark[5]<=44&&mark[5]>=40)
    {
        markpointer[5]=pointer[8];
    }
    else if(mark[5]<=39)
    {
        markpointer[5]=pointer[9];
    }

    //subject 7
    if(mark[6]>=85)
    {
        markpointer[6]=pointer[0];
    }
    else if(mark[6]<=84&&mark[6]>=75)
    {
        markpointer[6]=pointer[1];
    }
    else if(mark[6]<=74&&mark[6]>=70)
    {
        markpointer[6]=pointer[2];
    }
    else if(mark[6]<=69&&mark[6]>=65)
    {
        markpointer[6]=pointer[3];
    }
    else if(mark[6]<=64&&mark[6]>=60)
    {
        markpointer[6]=pointer[4];
    }
    else if(mark[6]<=59&&mark[6]>=55)
    {
        markpointer[6]=pointer[5];
    }
    else if(mark[6]<=54&&mark[6]>=50)
    {
        markpointer[6]=pointer[6];
    }
    else if(mark[6]<=49&&mark[6]>=45)
    {
        markpointer[6]=pointer[7];
    }
    else if(mark[6]<=44&&mark[6]>=40)
    {
        markpointer[6]=pointer[8];
    }
    else if(mark[6]<=39)
    {
        markpointer[6]=pointer[9];
    }

    gpa[4] = (markpointer[0]+markpointer[1]+markpointer[2]+markpointer[3]+markpointer[4]+markpointer[5]+markpointer[6])/7;
    cgpa = (gpa[0]+gpa[1]+gpa[2]+gpa[3]+gpa[4])/5;


    system("cls");
    printf("\n\t\t\tSemester 1\n\n\t\t\tSubject list :");
    printf("\n\t\t\t1.GEL 2312 German Language 1 : %.2f",markpointer[0]);
    printf("\n\t\t\t2.CIT 0513 COMPUTER & PROGRAMMING : %.2f",markpointer[1]);
    printf("\n\t\t\t3.MPU 2222 EFFECTIVE COMMUNICATION SKILLS : %.2f",markpointer[2]);
    printf("\n\t\t\t4.CIT 0612 COMPUTER ETHICS & VALUES : %.2f",markpointer[3]);
    printf("\n\t\t\t5.MAP 2223 DISCRETE MATHEMATICS : %.2f",markpointer[4]);
    printf("\n\t\t\t6.SDT 2113 BASIC OF SOFTWARE ENGINEERING : %.2f",markpointer[5]);
    printf("\n\t\t\t7.CIT 0623 OPERATING SYSTEMS : %.2f",markpointer[6]);
    printf("\n\n\t\t\tYour SEM 5 GPA = %.2f\n\t\t\tYour CGPA = %.2f",gpa[4],cgpa);
    sleep(3);

    do
    {
        system("cls");
        printf("\n\t\t\tBack to Select Semester?\n\t\t\t1.Yes\n\t\t\t2.No");
        scanf("%d",&backsem);
        if(backsem=1)
        {
            semselect();
            break;
        }
        else if(backsem=2)
        {
            printf("\n\t\t\tBye!!!\n\t");
            break;
        }
        else
        {
            printf("\n\t\t\tWrong Selection\n\t");
        }
    }while(backsem<1&&backsem>2);
    return 0;
}
