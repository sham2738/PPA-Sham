#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>

int main()
{
    char Name[30];
    int fd = 0;
    int iRet = 0;
    char Data[30]= {'\0'};

    printf("Enter name of file that you want to open: \n");
    scanf("%s",Name);

    fd = open(Name, O_RDWR);
    lseek(fd,10,SEEK_SET);
    iRet = read(fd,Data,10);

    printf("%d bytes gets successfully written into the file\n",iRet);

    printf("%s\n",Data);
    
    close(fd);

    return 0;
}