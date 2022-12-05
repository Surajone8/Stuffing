#include<stdio.h>
#include<string.h>

char*bitstuff(char Str[],char Stack[]){
    int n = strlen(Str), count = 0, stack_index = 0, i;
    for(i;i<n;i++){
        if(Str[i] == '1'){
            count++;
            Stack[stack_index++] = Str[i];
            if(count == 5){
                Stack[stack_index++] = '0';
                count = 0;
            }
        }
        else{
            Stack[stack_index++] = Str[i];
            count = 0;
        }
    }
    Stack[stack_index] = '\0';
    return Stack;
}

void main(){
    char Str[40],Stack[40];
    int n=0, i=0;
    printf("\n Enter length of string : ");
    scanf("%d", &n);

    printf("\n Enter the string : ");
    for(i;i<n;i++){
        scanf("%c", &Str[i]);
    }

    for(i;i<n;i++){
        if(Str[i]!='1' && Str[i]!='0'){
            printf("\n Enter valid input------------------>");
        }
    }
    printf("\nInput : ");
    printf("%s", Str);
    printf("\nOutput : ");
    printf("%s",bitstuff(Str,Stack));
}