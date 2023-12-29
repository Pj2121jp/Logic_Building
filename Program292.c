/*
    write a program accept file name from user and open that file and 
    display file descriptor
*/

#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>

int main()
{
    char FileName[30];
    int fd = 0;

    printf("Enter the name of file that you want to open from current directory\n");
    scanf("%[^\n]s",FileName);

    fd = open(FileName, O_RDWR);

    if(fd==-1)
    {
        printf("Unable to open %s file \n",FileName );

    }
    else
    {
        printf("%s gets opened succesfully with file descriptor %d\n",FileName, fd);
        close(fd);
    }

    return 0;
}