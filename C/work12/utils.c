#include <stdlib.h>
#include <stdio.h>

void nullCheck(void* notNull) {
    if(notNull == NULL) {
        printf("OutOfMemoryException");
        exit(1);
    }
}

void interrupt() {
    printf("ProgramExecutingException");
    exit(1);
}