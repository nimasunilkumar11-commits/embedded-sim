#ifndef LOGGER_H
#define LOGGER_H

typedef enum {
    LOG_INFO,
    LOG_WARNING,
    LOG_ERROR
} LogLevel;

void init_logger(void);
void log_message(LogLevel level, const char *message);
void close_logger(void);

#endif