#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int lexicographic_sort(const char* a, const char* b) {
    return strcmp(a,b);
}

int lexicographic_sort_reverse(const char* a, const char* b) {
     return strcmp(b,a);
}
int no_of_ditinct_char(const char *a){
    int n = 0;
    int count[128] = {0};
    if (NULL == a){
        return -1;
    }
    while(*a != '\0'){
        if (!count[*a]){
            count[*a]++;
            n++;
        }
        a++;
    }
    return n;
}

int sort_by_number_of_distinct_characters(const char* a, const char* b) {
    int res=no_of_ditinct_char(a)-no_of_ditinct_char(b);
    return res?res:lexicographic_sort(a,b);
}

int sort_by_length(const char* a, const char* b) {
    int res=strlen(a)-strlen(b);
    return res?res:lexicographic_sort(a,b);
}

void string_sort(char** arr,const int len,int (*cmp_func)(const char* a, const char* b)){
    int flag=0,top=len-1;
    while(!flag)
    {
        flag=1;
        for(int i=0;i<top;i++)
            if(cmp_func(arr[i],arr[i+1])>0)
            {
                char *t=arr[i];
                arr[i]=arr[i+1];
                arr[i+1]=t;
                flag=0;
            }
        top--;
    }
}


int main() 
{
    int n;
    scanf("%d", &n);
    char** arr;
	arr = (char**)malloc(n * sizeof(char*));
  
    for(int i = 0; i < n; i++){
        *(arr + i) = malloc(1024 * sizeof(char));
        scanf("%s", *(arr + i));
        *(arr + i) = realloc(*(arr + i), strlen(*(arr + i)) + 1);
    }
  
    string_sort(arr, n, lexicographic_sort);
    for(int i = 0; i < n; i++)
        printf("%s\n", arr[i]);
    printf("\n");

    string_sort(arr, n, lexicographic_sort_reverse);
    for(int i = 0; i < n; i++)
        printf("%s\n", arr[i]); 
    printf("\n");

    string_sort(arr, n, sort_by_length);
    for(int i = 0; i < n; i++)
        printf("%s\n", arr[i]);    
    printf("\n");

    string_sort(arr, n, sort_by_number_of_distinct_characters);
    for(int i = 0; i < n; i++)
        printf("%s\n", arr[i]); 
    printf("\n");
}