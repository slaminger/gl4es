#ifndef __PREPROC_H_
#define __PREPROC_H_

typedef struct {
    char    name[50];
    int     state;      //0:disable, 1:warn, 1:enable, 2:require
} extension_t;

typedef struct {
    extension_t *ext;
    int         size;
    int         cap;
} extensions_t;

char* preproc(const char* code, int keepcomments, int gl_es, extensions_t* exts);

#endif //__PREPROC_H_