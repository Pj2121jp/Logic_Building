/*
    To create new regular file 

    int creat(char * file_name, int permissio);

    file_name : name of new file 
    permission : File Permissions

    Read : 4
    Write : 2
    Execute : 1

    Owner of file
    Group Members
    Others 
*/

#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>

int main()
{
    int fd = 0;

    fd = creat("Marvellous.txt",0777);

    if(fd== -1)
    {
        printf("Unable to open file\n");
    }
    else
    {
        printf("File is successfully opened with fd : %d\n",fd);
    }
    return 0;
}