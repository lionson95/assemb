#ifndef GLOBAL_H_INCLUDED
#define GLOBAL_H_INCLUDED
#include <ctype.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdarg.h>






/* bool type enumeration
* false = 0 , true = 1  
*/

typedef enum boolean {false, true}
bool;




/** Maximum length of a single source line  */
#define MAX_LINE_LENGTH 80

/** Initial IC value */
#define IC_INIT_VALUE 100


/** Initial DC value */
#define DC_INIT_VALUE 0

/** Initial line counter value */
#define LINE_INIT_VALUE 0


/** instructions value
 * 
 * the value  of each instruction is a specific combination of its op_code field and its funct field
 * 
 * the general structure of a code word  is composed of 12 bits numbered 0 to 11
 * 
 * the structure is : 
 * 
 * bits 11-8 is op code   bits 7-4 is funct  bits 3-2 is source address  bits 1-0 is destination address
 * 
 * this is the value of each instruction as a value of a its opcode_field in addition to its  funct_field
 * 
 * 
 * the value is in bits the calculation is from bits to decimal numbers 
 * 
 * mov = funct(0)+ opcode(0) = 000000000000 + 000000000000 = 0
 * 
 * cmp = funct(0)+ opcode(1) = 000000000000 + 000100000000 = 256
 * 
 * add = funct(10)+ opcode(2) = 000000000000 + 000100000000 =  612
 * 
 * sub = funct(11)+ opcode(2) = 000000000000 + 000100000000 =  688
 * 
 * lea = funct(0)+ opcode(4) = 000000000000 + 000100000000 =  1024
 * 
 * clr = funct(10)+ opcode(5) = 000010100000 + 010100000000 =  1440
 * 
 * not = funct(11)+ opcode(5) = 000010110000 + 010100000000 = 1456
 * 
 * inc = funct(12)+ opcode(5) = 000011000000 + 010100000000 = 1472
 *  
 * dec = funct(13)+ opcode(5) = 000011010000 + 010100000000 = 1488
 * 
 * jmp = funct(10)+ opcode(9) = 000010100000 + 100100000000 = 2464
 * 
 * bne = funct(11)+ opcode(9) = 000010110000 + 100100000000 = 2480
 * 
 * jsr = funct(12)+ opcode(9) = 000011000000 + 100100000000 = 2496
 * 
 * red = funct(0)+ opcode(12) = 000000000000 + 110000000000 = 3072
 * 
 * prn = funct(0)+ opcode(13) = 000000000000 + 110100000000 = 3328
 * 
 * rts = funct(0)+ opcode(14) = 000000000000 + 111000000000 = 3584
 * 
 * stop = funct(0)+ opcode(15) = 000000000000 + 111100000000 = 3840
 * 
 */




#endif 
