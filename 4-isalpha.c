#include "main.h"
/* checking for alphabetic character for isalpha
* c : the charachter to be checked
*if lowercase or uppercase return 1 | if else return 0
*/
int _isalpha(int c);
{
    if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
    return (1);
    else 
    return (0);
}
