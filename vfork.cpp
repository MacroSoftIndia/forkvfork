


//Vfork :
#include<sys/types.h>
#include<sys/stat.h>
#include<unistd.h>
#include<fcntl.h>
#include<string.h>
#include<errno.h>
#include<iostream>
#include<stdio.h>
#include<stdlib.h>
pid_t fork(void);
using namespace std;
int main()
{
int var=10;
pid_t pid;
cout<<"before vfork"<<endl;
if((pid=vfork())<0)
perror("vfork");
else if(pid=0)
{
var+=10;
exit(0);
}
cout<<var<<endl;
cout<<pid;
return 0;
}
