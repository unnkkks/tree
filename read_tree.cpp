#include <stdio.h>
#include <stdlib.h>
#include "tree.h"


long file_size(FILE* database)
{
    long orig_pos = ftell(database);
    fseek(database, 0, SEEK_END);

    long end_pos = ftell(database);
    fseek(database, orig_pos, SEEK_SET);

    return end_pos;  
}

void reading(FILE* database)
{   
    long num_of_chars = file_size(database);
    char* buffer = (char*) calloc(num_of_chars+1, sizeof(char));
    
    fread(buffer, sizeof(char), num_of_chars, database);

    int cur_pos = 0;

    if (buffer[cur_pos] == "{")
    {
        
    }


    printf("%s", buffer);

}