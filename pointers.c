#include<stdio.h>
int main()
{
	int x = 10;
int *ptr = &x; // Pointer to x
int **ptr2 = &ptr; // Pointer to pointer to x
int ***ptr3 = &ptr2; // Pointer to pointer to pointer to x
printf("Value of x: %d\n", x); // Print value of x
printf("Value of x using ptr: %d\n", *ptr); // Print value of x using ptr
printf("Value of x using ptr2: %d\n", **ptr2); // Print value of x using ptr2
printf("Value of x using ptr3: %d\n", ***ptr3); // Print value of x using ptr3
printf("Address of x: %p\n", (void*)&x); // Print address of x
printf("Address of x using ptr: %p\n", (void*)ptr); // Print address of x using ptr
printf("Address of x using ptr2: %p\n", (void*)*ptr2); // Print address of x using ptr2
printf("Address of x using ptr3: %p\n", (void*)**ptr3); // Print address of x using ptr3
printf("Address of ptr: %p\n", (void*)&ptr); // Print address of ptr
printf("Address of ptr2: %p\n", (void*)&ptr2); // Print address of ptr2
printf("Address of ptr3: %p\n", (void*)&ptr3); // Print address of ptr3
printf("Value of ptr: %p\n", (void*)ptr); // Print value of ptr
printf("Value of ptr2: %p\n", (void*)ptr2); // Print value of ptr2
printf("Value of ptr3: %p\n", (void*)ptr3); // Print value of ptr3
printf("Value of ptr2 using ptr: %p\n", (void*)*ptr); // Print value of ptr2 using ptr
printf("Value of ptr3 using ptr2: %p\n", (void*)**ptr2); // Print value of ptr3 using ptr2
printf("Value of ptr3 using ptr: %p\n", (void*)*ptr3); // Print value of ptr3 using ptr
printf("Value of ptr3 using ptr2: %p\n", (void*)**ptr3); // Print value of ptr3 using ptr2
printf("Value of ptr3 using ptr2: %p\n", (void*)*ptr3); // Print value of ptr3 using ptr2
printf("Value of ptr3 using ptr: %p\n", (void*)*ptr2); // Print value of ptr3 using ptr
printf("Value of ptr3 using ptr2: %p\n", (void*)*ptr3); // Print value of ptr3 using ptr2
printf("Value of ptr3 using ptr2: %p\n", (void*)*ptr3); // Print value of ptr3 using ptr2
	
	
}