#ifndef ETHERBOOT_SETJMP_H
#define ETHERBOOT_SETJMP_H


/* Define a type for use by setjmp and longjmp */
#define JBLEN 6
typedef unsigned long jmp_buf[JBLEN];

extern int __asmcall setjmp (jmp_buf env);
extern void __asmcall longjmp (jmp_buf env, int val);

#endif /* ETHERBOOT_SETJMP_H */
