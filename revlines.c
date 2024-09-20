/*
    Nick Lodge
    9/20/24
*/

#include <stdio.h>
#include <get_line.h>

main(){
    int len;
    int MAXLINE = 1000;
    char line[MAXLINE];

    max = 0;
    while((len = get_line(line, MAXLINE)) > 0){
        reverse(line);
        printf("%s ", line);
    }

}