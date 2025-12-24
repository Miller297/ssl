#include<stdio.h>
#include<string.h>
#include<ctype.h>
// reorder words in a sentence
int is_space(char c){
    if(c==' '||c=='\n'||c=='\t'){
        return 1;
    }
    return 0;
}

/* case-insensitive comparator removed — using case-sensitive strcmp now */
int main()
{
    char c[10000];
    fgets(c,10000,stdin);
    char words[1000][1000];
    int i=0,j=0,k=0;
    for(i=0;c[i]!='\0';i++){
        if(is_space(c[i])){
            words[k][j]='\0';
            k++;
            j=0;
        }
        else{
            words[k][j]=c[i];
            j++;
        }
    }
    words[k][j]='\0';
    int a=0;
    for(a = k; a >= 0; a--){
        for(int j=0;j<=a;j++){
            if(strcmp(words[a], words[j]) <= 0){
                char temp[1000];
                strcpy(temp, words[a]);
                strcpy(words[a], words[j]);
                strcpy(words[j], temp);
            }
        }
    }
    for(int p=0;p<=k;p++){
        printf("%s ", words[p]);
    }
    return 0;

}