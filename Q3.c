#include<stdio.h> 
#include<unistd.h> 
int main() 
{ 
printf("To execute pstree command\n\n"); 
execl("/usr/bin/pstree","pstree",NULL); 
} 

