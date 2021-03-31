#include <ctype.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdarg.h>
#include "utile.h"
#include "is_a_type.h"




 bool is_as_file (char * filename)
{
    FILE *file_des;

    char *input_filename;
    char *as_type = ".as";

    /* Concat extensionless filename with .as extension */
    input_filename = strallocat(filename, as_type);

    file_des = fopen(input_filename, "r");

    if (file_des == NULL)
    {

        free(input_filename); /* The only allocated space is for the full file name */


        return false;
    }
	return true;
}
