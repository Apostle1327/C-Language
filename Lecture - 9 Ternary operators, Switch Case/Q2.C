// Q2. W.A.P. to Create a Menu-Driven program for Telecom Call Service Conbersation.
// Must use Nested Switch Case.

#include<stdio.h>
#include<conio.h>

// Main Program Beginning.

main()

{
// Passing Variables.

 int Language, Choice;

 clrscr();

 printf("\nPress 1 to choose English");
 printf("\nPress 2 to choose Hindi");
 printf("\nPress 3 to choose Gujarati\n");
 printf("\n\nEnter Your choice : ");
 scanf("%d", &Language);

// Switch Case Condition Deploying.

 switch(Language)

 {
  case 1:
  printf("\nEnglish Options");
  printf("\n1 : Internet Pack Recharge");
  printf("\n2 : Top-Up Pack Recharge");
  printf("\n3 : Combo Pack Recharge");
  printf("\n\nEnter Your Choice : ");
  scanf("%d", &Choice);

	switch(Choice)

	{
	 case 1:
	 printf("\nYou have Successfully recharged Your Internet pack");
	 break;

	 case 2:
	 printf("\nYou have Successfully recharged Your Top-Up pack");
	 break;

	 case 3:
	 printf("\nYou have Successfully recharged Your Combo pack");
	 break;

	 default:
	 printf("\nPlease enter a Correct value from the List");
	}break;

  case 2:
  printf("\nHindi Options");
  printf("\n1 : Internet Pack Recharge");
  printf("\n2 : Top-Up Pack Recharge");
  printf("\n3 : Combo Pack Recharge");
  printf("\n\nEnter Your Choice : ");
  scanf("%d", &Choice);

  switch(Choice)

  {
   case 1:
   printf("\nAapne safaltapurvak apne Internet Pack ka recharge kar liya hai");
   break;

   case 2:
   printf("\nAapne safaltapurvak apne Top-Up Pack ka recharge kar liya hai");
   break;

   case 3:
   printf("\nAapne safaltapurvak apne Combo Pack ka recharge kar liya hai");
   break;

   default:
   printf("\nKripya karke suchi mein se diye gaye sahi mulyon ka chunaav karein");
  }break;

  case 3:
	printf("\nGujarati Options");
  printf("\n1 : Internet Pack Recharge");
  printf("\n2 : Top-Up Pack Recharge");
  printf("\n3 : Combo Pack Recharge");
  printf("\n\nEnter Your Choice : ");
  scanf("%d", &Choice);

  switch(Choice)

  {
   case 1:
   printf("\nTamara Internet Pack nu safaltapurvak recharge thai gayu chhe");
   break;

   case 2:
   printf("\nTamara Top-Up Pack nu safaltapurvak recharge thai gayu chhe");
   break;

   case 3:
   printf("\nTamara Combo pack nu safaltapurvak recharge thai gayu chhe");
   break;

   default:
   printf("\nKrupa kari ne suchi ma aapva-ma aavel mulyo mathi saacha mulya ni pasandgi karo");

  }break;

 }

 getch();
}