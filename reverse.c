/*
    Nick Lodge
*/

#include <stdio.h>

char main(char line[]){

    int word_start = 0;
    int word_end;
    char val1, val2;
    int i = 0;

    while(line[i] != '\n'){
        if(line[i] != ' ' && line[i-1] = ' '){
            word_start = i;
        }else if(line[i] = ' ' && line[i-1] != ' '){
            word_end = i-1;
            int stop = (word_end/2)+1;
            for(int j = word_start; j <= stop; j++){
                val1 = line[word_start];
                val2 = line[word_end];
                line[word_start] = val2;
                line[word_end] = val1;
            }
        }
    }
    return line;
}