#include <stdio.h>
//За тази задача не съм напълно сигурна дали е така.

#define COMMAND(NAME, TYPE) TYPE##_##NAME##_command

#define DEFINE_COMMAND(NAME, TYPE) \
void COMMAND(NAME, TYPE)(void) { \
printf("Executing " #TYPE " command: " #NAME); \
}
DEFINE_COMMAND(quit, internal)
DEFINE_COMMAND(quit, external)

int main(){
    internal_quit_command();
    external_quit_command();

    return 0;
}