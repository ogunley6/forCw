#include <stdio.h>
#include <stdlib.h>

int main()
{
    char result[1]; //This is the variable for the users answer
    printf("PLease select one of the options. \n");//The lines up to 11 is the menu
    printf("1: ls \n");
    printf("2: who \n");
    printf("3: ping \n");
    scanf("%s, result");
    if(strcmp(result, "a")== 0) //if users is a
    {
        int pid = fork(); //this forks the process
        if(pid!=0) //parent process
        {
            wait();
            printf("This is the parent process my PID (process ID) is %d, my PPID is %d, \n ", getpid(),getppid());
            printf("My child process has finished. \n")
        }

        else if
        {
            printf("I am the child process, my PID is %d, my PPID is %d \n", getpid(), getppid());
            sleep(2);
            execl ("/bin/ls",".", (char*)0);
        }
    }

    else if (strcmp(answer, "2")== 0)
    {
        int pid = fork();
        if(pid!=0)
        {
            wait();
            printf("This is the parent process my PID (process ID) is %d, my PPID is %d, \n ", getpid(),getppid());
            printf("My child process has finished. \n")

        }
        else if
        {
            printf("I am the child process, my PID is %d, my PPID is %d \n", getpid(), getppid());
            sleep(2);
            execl ("/bin/who", "who", "-u", (char*)0);
        }

    }
     else if (strcmp(answer, "3")== 0)
    {
        int pid = fork();
        if(pid!=0)
        {
            wait();
            printf("This is the parent process my PID (process ID) is %d, my PPID is %d, \n ", getpid(),getppid());
            execl ("/bin/ping", "ping", "www.apple.com", "-c 1", (char*)0);
            printf("My child process has finished. \n")

        }
        else if
        {
            printf("I am the child process, my PID is %d, my PPID is %d \n", getpid(), getppid());
            sleep(2);
            execl ("/bin/ping", "ping", "www.youtube.com", "-c 1", (char*)0);
        }

    }

    else // if an invalid option is entered
    {
        printf("This is not a valid option \n");
    }
    return 0;
}
