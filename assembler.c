#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "global .h"
#include "utile.h"
#include "is_a_type.h"

bool assemble_file(char *filename);





int main(int argc, char *argv[])
{
    int i;
    /* To break line if needed */
    bool succeeded = true;
    /* Process each file by arguments */
    for (i = 1; i < argc; ++i)
    {
        /* if last process failed and there's another file, break line: */
        if (!succeeded) puts("");
        /* foreach argument (file name), send it for full processing. */
        succeeded = assemble_file(argv[i]);
        /* Line break if failed */
    }
    return 0;
}


bool assemble_file(char *filename)
{


    if((is_as_file(filename))!= true)
    {
        printf("Error: file \"%s.as\" is inaccessible for reading. skipping it.\n", filename);
        return false;
    }

    printf("file %s was read ", filename );
    return true;

}


