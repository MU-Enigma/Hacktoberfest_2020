include <stdio.h>
#include <string.h>

int main(){
    char string[20];
    int i, l;
    int flag = 0;
    
    printf("Enter a string:");
    scanf("%s", string);
    
    length = strlen(string);
    
    for(i=0;i < l ;i++){
        if(string[i] != string[l-i-1]){
            flag = 1;
            break;
   }
}
    
    if (flag) {
        printf("%s is not a palindrome", string);
    }    
    else {
        printf("%s is a palindrome", string);
    }
    return 0;
}