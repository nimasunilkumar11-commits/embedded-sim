#include <stdio.h>
#include <string.h>
#include "statistics.h"

void command_check()
{
    char cmd[50];

    printf("Enter command: ");
    fgets(cmd, sizeof(cmd), stdin);

    cmd[strcspn(cmd, "\n")] = 0;

    if (strcmp(cmd, "stats") == 0)
    {
        stats_print();
    }
    else if (strcmp(cmd, "help") == 0)
    {
        printf("Commands:\n");
        printf("stats  - show statistics\n");
        printf("help   - show commands\n");
    }
    else
    {
        printf("Unknown command\n");
    }
}