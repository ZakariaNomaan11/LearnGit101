#include <stdio.h>

int println(char *x)
{
    printf("%s\n", x);
}
 
int main()
{
    printf("hello world\n");
    println("good bye");

}