#include <stdio.h>

int size = 10;       
int stack[10];
int topX = -1;   

int push(int data) 
{
   if(topX != size) 
   {
      topX += 1;   
      stack[topX] = data;
   } 
   else 
      printf("Stack is full.\n");
}      

int pop() 
{
   int data;
	
   if(!isEmpty()) 
   {
      data = stack[topX];
      topX -= 1;   
      
      return data;
   } 
   else 
      printf("Stack is empty.\n");
}   

int isEmpty() 
{
   if(topX == -1)
      return 1;
   else
      return 0;
}

int clear()
{
	return topX = -1;
}
   
int top() 
{
   return stack[topX];
}

int main() 
{
	int repeat, choice, element, multElement, x;
	
	do
	{
		printf("STACK MENU\n[1] Push\n[2] Pop\n[3] Empty\n[4] Clear\n[5] Top\n[6] Print\nChoice: ");
		scanf("%d", &choice);
		
		system("cls");
		
		switch(choice)
		{
			case 1:
				system("cls");
				
				do
				{
					printf("Push (element): ");
					scanf("%d", &element);
					push(element);
					
					printf("Push again? (1 = YES | 0 = NO): ");
					scanf("%d", &multElement);
				}
				while(multElement == 1);	
						
				break;
			case 2:
				system("cls");
				
				do
				{
					pop();
					
					printf("Pop again? (1 = YES | 0 = NO): ");
					scanf("%d", &multElement);
				}
				while(multElement == 1);	
				
				break;
			case 3:
				system("cls");
				printf("Is stack empty?: %s", isEmpty() ? "Yes" : "No");
				break;
			case 4:
				clear();
				printf("Stack is now empty.");
				break;
			case 5:
				printf("Top: %d", top());
				break;
			case 6:
				system("cls");
				
				printf("Elements in Stack: ");
				for(x = 0; x <= topX; x++)
					printf("%d ", stack[x]);
			    
				break;
			default:
				printf("Invalid choice.\n");
				break;
		}
		
		printf("\nDo you wish to go back to menu? (1 = YES | 0 = NO): ");
		scanf("%d", &repeat);
		
		system("cls");
	}
	while(repeat == 1);
	
	return 0;
}
