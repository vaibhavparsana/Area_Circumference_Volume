#include <stdio.h>

void circumference(double radius);
void area(double radius);
void volume(double radius);
int displayMenu();
double getRadius();

int main()
{   
   void (*f[3])(double) = {circumference, area, volume};    
   int action = displayMenu();
   while (action >= 0 && action <= 3) {
	  if(action == 3){
	  	break;
	  }                              
      (*f[action])(getRadius());                                
      action = displayMenu();
   }
   printf("Program execution completed.");
} 

void circumference(double radius)
{
    double circumference = 2 * 3.14 * radius ;
    printf("\nThe circumference of circle: ");
    printf("\nRadius: %lf", radius);
    printf("\nCircumference: %lf", circumference);
    printf("\n----------------\n");
} 

void area(double radius)
{
    double area = 3.14 * radius * radius ;
    printf("\nThe area of circle: ");
    printf("\nRadius: %lf", radius);
    printf("\narea: %lf", area);
    printf("\n----------------\n");
} 

void volume(double radius)
{
    double volume =  (4 * 3.14 * radius * radius * radius)/3;
    printf("\nThe volume of sphere: ");
    printf("\nRadius: %lf", radius);
    printf("\nVolume: %lf", volume);
    printf("\n----------------\n"); 
}

int displayMenu() {
	int actionMenu;
	printf("\nACTION LIST MENU");
	printf("\nPlease enter 0 to compute circumference");
	printf("\nPlease enter 1 to compute area");
	printf("\nPlease enter 2 to compute volume");
	printf("\nPlease enter 3 to exit");	
	printf("\nPlease select one action from the above list? ");
	scanf("%d", &actionMenu);
	return actionMenu;
}
