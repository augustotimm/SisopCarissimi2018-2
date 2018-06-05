#include <stdio.h>
#include <stdlib.h>
#include "../include/t2fs.h"

bool testOpen2(char* filename);

int main()
{
    printf("Hello world!\n");

    char groupName[SIZEIDENTIFY+1];
    int errorCode = identify2(groupName, SIZEIDENTIFY);
    if(errorCode == -1) {
        printf("Main error");
        return -1;
    }

    char path[59];
    getcwd2(path,sizeof(path));
    printf("cwd:\n%s\n", path);
    printf("Nome do grupo:\n%s\n", groupName);


    open2("/file3");
    open2("/dir1/dir11/file111");
    open2("/dir1/dir11/file112");

    return 0;


}


/*bool testOpen2(char* filename){
    FILE2 openFile;
    openFile = open2(filename);
    return true;
}
*/

