
#include "lib.h"
bool convertilettera( char &c) {
    if (!((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))) {
        return false;
    }
     if(c>=65&&c<=90){
         c=c+32;
         return true;
     }else{
         c=c-32;
         return true;
     }
}
