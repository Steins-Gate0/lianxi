#include<stdio.h>
#include<assert.h>
// int my_strlen( const char*str)
// {
//     assert(str);
//     int count = 0;
//     while(*str++)
//     {
//         count++;
//        // str++;
//     }                                 模拟实现strlen
//     return count;
// }

// int main()
// {
//     char arr[] = "abcdefgh";
//     int num = my_strlen(arr);
//     printf("%d",num); 
//     return 0;
// }
//............................................
// int main()
// {
//     int num1,num2;
//     char sym ;
//     scanf("%d%c%d",&num1,&sym,&num2);
//     switch(sym)
//     {
//         case '+':
//             printf("%d+%d=%d",num1,num2,num1+num2);
//             break;
//         case '-':
//             printf("%d-%d=%d",num1,num2,num1-num2);
//             break;                                   //用switch写简单的计算器
//         case '*':
//             printf("%d*%d=%d",num1,num2,num1*num2);
//             break;
//         case '/':
//             if(num2 == 0)
//             {
//                 printf("被除数不能为零");
//                 break;
//             }
//             printf("%d/%d=%d",num1,num2,num1/num2);
//             break;
//     }
//     return 0;
// }
//............................................
// char* my_strcpy(char* dest,const char* src)
// {
//     assert(dest && src);
//     char* ret = dest;
//     while(*dest++ = *src++){;}
//     return dest;
// }                                                  //模拟strcpy
// int main()          
// {
//     char arr1[5] = "abcd";
//     char arr2[] = {'e','f','g','\0'};
//     printf("%s",my_strcpy(arr1,arr2));
//     return 0;
// }
// ................................................
// char* my_strcat(char* dest,const char* src)
// {
//     assert(dest && src);
//     char* ret = dest ;
//     while(*dest++)
//     {
//         ;
//     }
//     dest--;
//     while(*dest++ = *src++ )                      //模拟strcat
//     {
//         ;
//     }
//     return ret;
// }
// int main()
// {
//     char arr[30] = "abcdefg";
//     char arr2[] = "high";
//     printf("%s",my_strcat(arr,arr2));
//     return 0;
// }
// ..........................................
// int my_strcmp(const char* str1,const char* str2)
// {
//     assert(str1 && str2);
//     //1.判断字符是否相等,相等返回0
//     while(*str1++ == *str2++)
//     {
//        ; 
//     }
//     if(!str1) return 0;                          //模拟strcmp
//     str1--;
//     str2--;
//     //2.如果str1>str2返回>0的值,如果str1<str2返回<0的值
//     return *str1-*str2;
    

// }
// int main()
// {
//     char arr[] = "abcdef";
//     char arr2[] = "abaef";
//     printf("%d",my_strcmp(arr,arr2));
//     return 0;
// }
// ..............................................
char* my_strncpy(char* dest,const char* src,size_t count)
{
    assert(dest && src);
    char* ret = dest;
    while(count--)
    {
        *dest++ = *src++;
    }
    
    *dest = '\0';
    return ret;
}
int main()
{
    char arr1 [10] ="abcde";
    char arr2 [] = "defg";
    printf("%s",my_strncpy(arr1,arr2,2));
    return 0;
}