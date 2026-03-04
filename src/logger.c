#include <stdio.h>
#include <time.h>
#include "logger.h"

void log_message(LogLevel level, const char *message) {

    const char *level_str;

    switch(level) {
        case LOG_INFO: level_str = "INFO"; break;
        case LOG_WARNING: level_str = "WARNING"; break;
        case LOG_ERROR: level_str = "ERROR"; break;
        default: level_str = "UNKNOWN";
    }

    time_t now = time(NULL);
    struct tm *t = localtime(&now);

    printf("[%02d:%02d:%02d] [%s] %s\n",
           t->tm_hour, t->tm_min, t->tm_sec,
           level_str,
           message);
}