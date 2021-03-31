#ifndef IS_A_TYPE_H_INCLUDED
#define IS_A_TYPE_H_INCLUDED
#include "global .h"
#include "utile.h"

/**
* this method returns bool value of true if there is a file of type .as that can be opened with the given file name,
* the file name is given as a string parameter.
* if the file cannot be opened this method returns false.
* @param string The string representing the file name
* @return true if  there is a file with the name given as a parameter as a string of type .as and false otherwise
*/

 bool is_as_file(char * filename);

#endif 
