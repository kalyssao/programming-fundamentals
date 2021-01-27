#include <iostream>

namespace my {
    int strcmp(const char *l, const char *r){
        while (*l){
            if (*l != *r)
                break;
            l++;
            r++;
            
        }
        return *(const unsigned char *)l - *(const unsigned char *)r;
    }

    int strlen(const char *s){
        int count = 0;
        while (*s++ != '\0') {
            ++count;
        }
        return count;
    }
    
    // Concatenates (appends) r on to the end of l, and returns  l
    char *strcat(char *l, const char *r){

    }
    
    // Copies the contents of r over the contents of l, and returns l 
    char *strcpy(char *l, const char *r){

    }
    
    // Converts the characters in s to uppercase, and returns s
    char *toupper(char *s) {
        
    }
    

}

int main () {
    char *X = "Techie";
    char *Y = "Techie";
    int ret = my::strlen(X);
    std::cout << ret;
}
