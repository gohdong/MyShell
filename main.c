
#include <stdio.h>
#include <unistd.h>
#include <string.h>

int main(){
    char *inputCommand;
    char *currentDir;
    // printf("\033[0;31mWelcome To G Shell!\n");


    while (1)
    {
        currentDir = getcwd(currentDir,200);
        printf("gohdong@minishell %s> ",currentDir);
        scanf("%s",inputCommand);
        
        if(strcmp(inputCommand,"exit")==0){
            break;
        }
        
        else if(strstr(inputCommand,"cd")!=NULL){
            strcat(currentDir,"/..");
            chdir(currentDir);
        }
        
        else{
            printf("Unknown Command Sorry\n");
        }

        
    }

    printf("Good Bye!");
    

    return 0;
}

