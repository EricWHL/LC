#include <stdio.h>

int game(int* guess, int guessSize, int* answer, int answerSize)
{
    int ret = 0;
    int idx = 0;

    if(guessSize != answerSize) {
        return 0;
    }
    
    while(idx < guessSize){
        if(*guess++ == *answer++){
            ret ++;
        }
        idx ++;
    }
    
    return ret;
}
