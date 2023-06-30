#include<stdio.h>

int main(){
	printf("----Main Menu----\n\n");
	printf("1.Add Books\n");
	printf("2.Display Book Information\n");
	printf("3.Search Books(Book Status)\n");
	printf("4.Exit\n\n");
	
	int a1;
	printf("Enter :");
	scanf("%d", &a1);
	printf("\n\n");
	
	if(a1==1){
		printf("You can add book information\n\n");
		printf("Choose a category:\n\n");
		printf("1.Computing\n");
		printf("2.Electronic\n");
		printf("3.Mechanical\n\n");
		
		int a2;
		printf("Choose a category:\n\n");
	    scanf("%d",&a2);
	    
	    printf("\n\n");
	    
	    if(a2==1){
	    	printf("You have choose Computer category\n\n");
	    	printf("1.introduction to C\n");
	    	printf("2.introduction to Python\n");
	    	printf("3.introduction to R Programing\n\n");
	    	
	    	int a3;
			printf("Choose a book:\n\n");
		    scanf("%d",&a3);
		    
		    printf("\n\n");
		    
		    if(a3==1){
		    	printf("You have choose introduction to C category\n\n");
		    	
		    	char book_namea[50];
		    	char author_namea[50];
		    	int pagea;
		    	int pricea;
		    	
		    	printf("Book name:");
		    	scanf("%s",&book_namea);
		    	printf("\n\n");
		    	
		    	printf("Author name:");
		    	scanf("%s",&author_namea);
		    	printf("\n\n");
		    	
		    	printf("Pages:");
		    	scanf("%d",&pagea);
		    	printf("\n\n");
		    	
		    	printf("Price:");
		    	scanf("%d",&pricea);
		    	printf("\n\n");
		    	
		
		
	
		}
		
			else if(a3==2){
			    	printf("You have choose introduction to Python category\n\n");
			    	
			    	char book_nameb[50];
			    	char author_nameb[50];
			    	int pageb;
			    	int priceb;
			    	
			    	printf("Book name:");
			    	scanf("%s",&book_nameb);
			    	printf("\n\n");
			    	
			    	printf("Author name:");
			    	scanf("%s",&author_nameb);
			    	printf("\n\n");
			    	
			    	printf("Pages:");
			    	scanf("%d",&pageb);
			    	printf("\n\n");
			    	
			    	printf("Price:");
			    	scanf("%d",&priceb);
			    	printf("\n\n");
			
		
	}
		    else if(a3==3){
		    	printf("You have choose introduction to R Programing category\n\n");
		    	
		    	char book_namec[50];
		    	char author_namec[50];
		    	int pagec;
		    	int pricec;
		    	
		    	printf("Book name:");
		    	scanf("%s",&book_namec);
		    	printf("\n\n");
		    	
		    	printf("Author name:");
		    	scanf("%s",&author_namec);
		    	printf("\n\n");
		    	
		    	printf("Pages:");
		    	scanf("%d",&pagec);
		    	printf("\n\n");
		    	
		    	printf("Price:");
		    	scanf("%d",&pricec);
		    	printf("\n\n");
		
		
	}}
	    else if(a2==2){
	    	printf("You have choose Electronic category\n\n");
	    	printf("1.Practical Electronics for Inventors\n");
	    	printf("2.The art of Electronics\n");
	    	printf("3.Fundermentals of digital circuits\n\n");
	    	
	    	int a4;
			printf("Choose a book:\n\n");
		    scanf("%d",&a4);
		    
		    printf("\n\n");
		    
		    if(a4==1){
		    	printf("You have choose Practical Electronics for Inventors\n\n");
		    	
		    	char book_named[50];
		    	char author_named[50];
		    	int paged;
		    	int priced;
		    	
		    	printf("Book name:");
		    	scanf("%s",&book_named);
		    	printf("\n\n");
		    	
		    	printf("Author name:");
		    	scanf("%s",&author_named);
		    	printf("\n\n");
		    	
		    	printf("Pages:");
		    	scanf("%d",&paged);
		    	printf("\n\n");
		    	
		    	printf("Price:");
		    	scanf("%d",&priced);
		    	printf("\n\n");
		    	
		
		
	
		}
		
			else if(a4==2){
			    	printf("You have choose The art of Electronics\n\n");
			    	
			    	char book_namee[50];
			    	char author_namee[50];
			    	int pagee;
			    	int pricee;
			    	
			    	printf("Book name:");
			    	scanf("%s",&book_namee);
			    	printf("\n\n");
			    	
			    	printf("Author name:");
			    	scanf("%s",&author_namee);
			    	printf("\n\n");
			    	
			    	printf("Pages:");
			    	scanf("%d",&pagee);
			    	printf("\n\n");
			    	
			    	printf("Price:");
			    	scanf("%d",&pricee);
			    	printf("\n\n");
		
		
	}
			else if(a4==3){
			    	printf("You have choose Fundermentals of digital circuits\n\n");
			    	
			    	char book_namef[50];
			    	char author_namef[50];
			    	int pagef;
			    	int pricef;
			    	
			    	printf("Book name:");
			    	scanf("%s",&book_namef);
			    	printf("\n\n");
			    	
			    	printf("Author name:");
			    	scanf("%s",&author_namef);
			    	printf("\n\n");
			    	
			    	printf("Pages:");
			    	scanf("%d",&pagef);
			    	printf("\n\n");
			    	
			    	printf("Price:");
			    	scanf("%d",&pricef);
			    	printf("\n\n");
			
		
	}}
	    else if(a2==3){
	    	printf("You have choose Mechanical category\n\n");
	    	printf("1.introduction to Autocad\n");
	    	printf("2.Fundermentals of Thermodynamics\n");
	    	printf("3.Mechanical Enginerring: Conventional and Objective Type\n\n");
	    	
	    	int a5;
			printf("Choose a book:\n\n");
		    scanf("%d",&a5);
		    
		    printf("\n\n");
		    
		    if(a5==1){
		    	printf("You have choose introduction to Autocad\n\n");
		    	
		    	char book_nameg[50];
		    	char author_nameg[50];
		    	int pageg;
		    	int priceg;
		    	
		    	printf("Book name:");
		    	scanf("%s",&book_nameg);
		    	printf("\n\n");
		    	
		    	printf("Author name:");
		    	scanf("%s",&author_nameg);
		    	printf("\n\n");
		    	
		    	printf("Pages:");
		    	scanf("%d",&pageg);
		    	printf("\n\n");
		    	
		    	printf("Price:");
		    	scanf("%d",&priceg);
		    	printf("\n\n");
		    	
		
		
	
		}
		
			else if(a5==2){
			    	printf("You have choose Fundermentals of Thermodynamics\n\n");
			    	
			    	char book_nameh[50];
			    	char author_nameh[50];
			    	int pageh;
			    	int priceh;
			    	
			    	printf("Book name:");
			    	scanf("%s",&book_nameh);
			    	printf("\n\n");
			    	
			    	printf("Author name:");
			    	scanf("%s",&author_nameh);
			    	printf("\n\n");
			    	
			    	printf("Pages:");
			    	scanf("%d",&pageh);
			    	printf("\n\n");
			    	
			    	printf("Price:");
			    	scanf("%d",&priceh);
			    	printf("\n\n");
		
		
	}
			else if(a5==3){
			    	printf("You have choose Mechanical Enginerring: Conventional and Objective Type\n\n");
			    	
			    	char book_namei[50];
			    	char author_namei[50];
			    	int pagei;
			    	int pricei;
			    	
			    	printf("Book name:");
			    	scanf("%s",&book_namei);
			    	printf("\n\n");
			    	
			    	printf("Author name:");
			    	scanf("%s",&author_namei);
			    	printf("\n\n");
			    	
			    	printf("Pages:");
			    	scanf("%d",&pagei);
			    	printf("\n\n");
			    	
			    	printf("Price:");
			    	scanf("%d",&pricei);
			    	printf("\n\n");
			
		
	}}}
	else if(a1==3){
		printf("You can search the book(Book Status)\n\n");
		printf("Press the code:123 for Introduction to C\n");
		printf("Press the code:456 for Introduction to Python\n");
		printf("Press the code:789 for Introduction to R Programming\n");
		printf("Press the code:523 for Practical Electronics for Inventors\n");
		printf("Press the code:759 for The art of Electronics\n");
		printf("Press the code:157 for Fundermentals of digital circuits\n");
		printf("Press the code:359 for introduction to Autocad\n");
		printf("Press the code:153 for Fundermentals of Thermodynamics\n");
		printf("Press the code:104 for Mechanical Enginerring: Conventional and Objective Type\n");
		
		int a6;
		printf("Enter the book to search (USE THE CODE):");
		scanf("%d",&a6);
		
		printf("\n");
		
		switch(a6)
		{
			case 123:
					printf("Book name: Introduction to C\n\n");
					printf("Book status: 2 Copies left\n\n");
					break;
			case 456:
					printf("Book name: Introduction to Python\n\n");
					printf("Book status: 10 Copies left\n\n");
					break;	
			case 789:
					printf("Book name: Introduction to R Programming\n\n");
					printf("Book status: 1 Copies left\n\n");
					break;					
			case 523:
					printf("Book name: Practical Electronics for Inventors\n\n");
					printf("Book status: 20 Copies left\n\n");
					break;					
			case 759:
					printf("Book name: The art of Electronics\n\n");
					printf("Book status: 30 Copies left\n\n");
					break;		
			case 157:
					printf("Book name: Fundermentals of digital circuits\n\n");
					printf("Book status: Out of stock\n\n");
					break;					
			case 359:
				    printf("Book name: introduction to Autocad\n\n");
			    	printf("Book status: 4 Copies left\n\n");
			   		break;	
			case 153:
					printf("Book name: Fundermentals of Thermodynamics\n\n");
					printf("Book status: 5 Copies left\n\n");
					break;	
			case 104:
					printf("Book name: Mechanical Enginerring: Conventional and Objective Type\n\n");
					printf("Book status: 2 Copies left\n\n");
					break;		
														
		}
	
		
	}
	
	else if(a1==4){
		printf("The library is closed\n\n");
		printf("Have a nice day");
		
	}
	
}

