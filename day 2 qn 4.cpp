#include <stdio.h> 
int main(void) 
{ 
	const int j = 20; 
	int *ptr = j;
	printf("*ptr: %d\n", *ptr); 
	return 0; 
}
This program does not run because the *ptr can only point to a variable having int .But j os const int so *ptr will not point to j.

using namespace std;
#include<iostream>
int main(void) 
{ 
	int j = 20; 
	int *ptr = &j;
	cout<<(*ptr); 
	return 0; 
}
 But this program will run without any error because int*ptr is pointing to a variable with the same type int. 
