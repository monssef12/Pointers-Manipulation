
char ReverseString(char *str){ 
    char *start = str; // pointer to the first char
    char *end = str + strlen(str) - 1;  // pointer to the last char
    while (start < end) 
    { 
        char current = *start; 
        *start = *end; 
        *end = current; 
        start++; 
        end--; 
    } 
}
int main(){


    return 0;
}