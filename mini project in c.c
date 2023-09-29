#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>


void main_menu();
void r_allotment();
void student_record();
void edit_record();
void delete_record();


     struct student{
        char name[30];
       char gender[10];
       char branch[20];
       char address[100];
       char state[20];
      char district[20];
      char village[20];
      int mobile_no[15];
      char email_id[20];
      char nationality[20];
      char country[20];
      int room_no;
      char hosteltype[10];
     int billprice;
     int srlNo;
  }student;



   int main(){


        student.billprice=5400;
        printf("\t\t\n\n===============================WELCOME TO JNTU ANANTAPUR HOSTEL PORTAL===========================\n\n\t\t");
        printf("please enter your details before going to the main interface\n\n");

        printf("PLEASE ENTER YOUR NAME:");
	gets(student.name);
        printf("GENDER:");
	gets(student.gender);
        printf("BRANCH:");
	gets(student.branch);
        printf("ENTER YOUR ADDRESS:");
	gets(student.address);
        printf("ENTER YOUR STATE NAME:");
	gets(student.state);
        printf("ENTER YOUR DISTRICT NAME:");
	gets(student.district);
        printf("ENTER YOUR VILLAGE NAME:");
	gets(student.village);
        printf("ENTER YOUR E-MAIL ID NAME:");
	gets(student.email_id);

        printf("ENTER YOUR NATIONALITY NAME:");
	gets(student.nationality);
        printf("ENTER YOUR COUNTRY NAME:");
	gets(student.country);
 printf("ENTER THE MOBILE NO. :");
        gets(student.mobile_no);

      main_menu();
      return 0;
     }

   void main_menu(void){
       int choice;
       printf("\t\t\n\n=================MAIN MENU=================\n\n");
       printf("\n1.ALLOT A ROOM\n2.STUDENT RECORD\n3.EDIT RECORD\n4.DELETE RECORD\n5.EXIT\n\n");
       scanf("%d",&choice);

     switch(choice)
     {
        case 1:

         r_allotment();
         break;

       case 2:

	   student_record();
	    break;

	 case 3:

             edit_record();
	     break;

	  case 4:
	            delete_record();
	        break;

	  case 5:

		printf("Thank you for trusting our service.\n");
		main_menu();
		break;
	 }
}

	    void r_allotment(){
	  int lepakshi_no=100,nalanda_no=200,ellora_no=300,takshasila_no=400,ajanta_no=500;

		 if(student.room_no==0){
		   int type_of_hostel;
		   char c;
		   printf("ENTER THE HOSTEL NAME YOU WANT TO OCCUPY:");
		   printf("\n1.lepakshi\n2.nalanda\n3.ellora\n4.takshasila\n5.ajanta\n6.i dont want to choose anything\n\n\n");
		   scanf("%d",&type_of_hostel);
		   fflush(stdin);
		   if(type_of_hostel==1){
		      printf("\nDo you want to accept this hostel?(Yes or No)\n");
		      fflush(stdin);
		      scanf("%s",&c);
		      if(c=='y'){

			 printf("You have choosen lepakshi hostel.\n");
			 printf("Enter serial number NO. :");
			 scanf("%d",&student.srlNo);
			 student.room_no=lepakshi_no+student.srlNo;
			 printf("%d",student.room_no);
                         student.hosteltype[10]="lepakshi";
			 main_menu();
		      }
		   else
			main_menu();
		    }

		   if(type_of_hostel==2){
		      printf("\nDo you want to accept this hostel?(Yes/No)\n");
		      fflush(stdin);
		      scanf("%s",&c);
		      if(c=='y'){

			 printf("You have choosen nalanda hostel.\n");
			 printf("Enter serial number NO. :");
			 scanf("%d",&student.srlNo);
			 student.room_no=nalanda_no+student.srlNo;
			 printf("%d",student.room_no);
                          student.hosteltype[10]="nalanda";
			 main_menu();
		      }
		   else
			main_menu();
		    }

		   if(type_of_hostel==3){
		      printf("\nDo you want to accept this hostel?(Yes/No)\n");
		      fflush(stdin);
		      scanf("%s",&c);
		      if(c=='y'){

			 printf("You have choosen ellora hostel.\n");
			 printf("Enter serial number NO. :");
			 scanf("%d",&student.srlNo);
			 student.room_no=ellora_no+student.srlNo;
			 printf("%d",student.room_no);
                          student.hosteltype[10]="ellora";
			 main_menu();
		      }
		   else
			main_menu();
		    }
		    if(type_of_hostel==4){
		      printf("\nDo you want to accept this hostel?(Yes/No)\n");
		      fflush(stdin);
		      scanf("%s",&c);
		      if(c=='y'){

			 printf("You have choosen takshasila hostel.\n");
			 printf("Enter serial number NO. :");
			 scanf("%d",&student.srlNo);
			 student.room_no=takshasila_no+student.srlNo;
			 printf("%d",student.room_no);
                          student.hosteltype[10]="takshasila";
			 main_menu();
		      }
		   else
			main_menu();
		    }

		   if(type_of_hostel==5){
		      printf("\nDo you want to accept this hostel?(Yes/No)\n");
		      fflush(stdin);
		      scanf("%s",&c);
		      if(c=='y'){

			 printf("You have choosen ajanta hostel.\n");
			 printf("Enter serial number NO. :");
			 scanf("%d",&student.srlNo);
			 student.room_no=ajanta_no+student.srlNo;
                          student.hosteltype[10]="ajanta";
                         main_menu();
                      }
                   else
                        main_menu();
                    }

                     if(type_of_hostel==6)
                          main_menu();
               }
               else
		     printf("you already had booked a room");
	   }


     void student_record(void){


       FILE *fptr;

	printf("you can get your details in hostel.txt","w+");

	fptr = fopen("hostel.txt","w+");
	if(fptr == NULL){
             printf("file cant be opened\n");
         }
         else{
            fprintf(fptr,"========DETEILS==========\n");
            fprintf(fptr,"SEREIAL NUMBER:   %d\n",student.srlNo);
	        fprintf(fptr,"NAME         :   %s\n",student.name);
	        fprintf(fptr,"GENDER       :   %s\n",student.gender);
	        fprintf(fptr,"BRANCH NAME  :   %s\n",student.branch);
	        fprintf(fptr,"MOBILE NUBER :   %s\n",student.mobile_no);
            fprintf(fptr,"E-MAIL ID    :   %s\n",student.email_id);
            fprintf(fptr,"VILLAGE      :   %s\n",student.village);
            fprintf(fptr,"DISTRICT     :   %s\n",student.district);
            fprintf(fptr,"STATE        :   %s\n",student.state);
            fprintf(fptr,"NATIONALITY  :   %s\n",student.nationality);
            fprintf(fptr,"COUNTRY      :   %s\n",student.country);
            fprintf(fptr,"ROOM NUMBER  :   %d\n",student.room_no);
            fprintf(fptr,"HOSTEL TYPE  :   %s\n",student.hosteltype);
            fprintf(fptr,"BILL PRICE   :   5400");

             fprintf(fptr,"press p to print the details");

             fclose(fptr);
             main_menu();
            }
         }




      void edit_record(void){
	FILE *fptr;

        printf("you can edit your details in hostel.txt","w+");

        fptr = fopen("hostel.txt","w+");
	if(fptr == NULL){
             printf("file cant be opened\n");
         }
         else{
            fprintf(fptr,"========DETEILS==========\n");
	    fprintf(fptr,"SEREIAL NUMBER:   %d\n",student.srlNo);
            fprintf(fptr,"NAME         :   %s\n",student.name);
            fprintf(fptr,"GENDER       :   %s\n",student.gender);
            fprintf(fptr,"BRANCH NAME  :   %s\n",student.branch);
            fprintf(fptr,"MOBILE NUBER :   %s\n",student.mobile_no);
            fprintf(fptr,"E-MAIL ID    :   %s\n",student.email_id);
            fprintf(fptr,"VILLAGE      :   %s\n",student.village);
            fprintf(fptr,"DISTRICT     :   %s\n",student.district);
            fprintf(fptr,"STATE        :   %s\n",student.state);
            fprintf(fptr,"NATIONALITY  :   %s\n",student.nationality);
            fprintf(fptr,"COUNTRY      :   %s\n",student.country);
            fprintf(fptr,"ROOM NUMBER  :   %d\n",student.room_no);
            fprintf(fptr,"HOSTEL TYPE  :   %s\n",student.hosteltype);
            fprintf(fptr,"BILL PRICE   :   %d\n",student.billprice);

             fprintf(fptr,"press p to print the details");


             fclose(fptr);
             main_menu();
            }
         }

    void delete_record(void){
	      if( remove("hostel.txt") == 0)
                    printf("your data record has deleted successfully");
              else
                    printf("unable to delete the file");
        }