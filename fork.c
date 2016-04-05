//Fork :


#include<sys/types.h>
#include<sys/stat.h>
#include<unistd.h>
#include<fcntl.h>
#include<string.h>
#include<errno.h>
#include<iostream>
#include<stdio.h>
pid_t fork(void);
using namespace std;
int main()
{
int var=10;
pid_t pid;
cout<<"before fork"<<endl;
if((pid=fork())<0)
perror("fork");
else if(pid=0)
{
var+=10;
cout<<"child process "<<endl;
}
else
cout<<"parent process";
cout<<var<<endl;
return 0;
}
