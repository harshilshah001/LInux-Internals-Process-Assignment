#include<stdio.h> 
#include<unistd.h> 
int main() 
{ 
int child1, child2; 
printf("Current process pid is %d\n",getpid()); 
child1 = fork(); 
if(child1==0) 
{ 
sleep(2); 
printf("\nChild 1 process pid is %d\n",getpid()); 
printf("Child 1 parent process ppid is %d\n",getppid()); 
} 
else 
{ 
child2 = fork(); 
if(child2==0) 
{ 
sleep(2); 
printf("\nChild 2 process pid is %d\n",getpid()); 
printf("Child 2 parent process ppid is %d\n",getppid()); 
} 
else 
{ 
printf("Parent process pid is %d\n",getpid()); 
} 
} 
while(1); 
} 

