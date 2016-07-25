#ifndef DEBUH_H
#define DEBUG_H


#include <stdio.h>
#define LOG_INFO(FormatLiteral)  fprintf (stdout, "\nINFO  line %d: " FormatLiteral "",  __LINE__)
#ifdef DEBUG
    #define LOG_DBG(FormatLiteral, ...)  fprintf (stdout, "\nDBG   line %d:   " FormatLiteral "",  __LINE__, __VA_ARGS__)
#else
    #define LOG_DBG(FormatLiteral, ...)
#endif

#define LOG_ERR(FormatLiteral, ...)   fprintf (stderr, "ERR  %s(%d): " FormatLiteral "", __FILE__, __LINE__, __VA_ARGS__)

#endif // DEBUH_H


