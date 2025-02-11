#include <stdio.h>
#include <limits.h>


#define PRINT(NAME,FORMAT,BYTES,MAX,MIN,FORMATUNSIGNED,MAXUNSIGNED)printf("%-15s|%-15s|%-15zu|%-15d|%-15d|%-15s|%-15u",NAME,FORMAT,BYTES,MIN,MAX,FORMATUNSIGNED)


int main(){
    
    PRINT("Int","%d",sizeof(int),INT_MAX,INT_MIN,"%u",UINT_MAX);
    printf("\n");
    PRINT("Char","%c",sizeof(char),CHAR_MAX,CHAR_MIN,"%u",UCHAR_MAX);
    printf("\n");
    PRINT("Short","%hd",sizeof(short),SHRT_MAX,SHRT_MIN,"%hu",USHRT_MAX);
    printf("\n");
    PRINT("Long","%ld",sizeof(long),LONG_MAX,LONG_MIN,"%lu",ULONG_MAX);
    printf("\n");
    PRINT("Long long","%lld",sizeof(long long),LONG_LONG_MAX,LONG_LONG_MIN,"%llu",ULONG_LONG_MAX);

    return 0;
}