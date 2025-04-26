#include <libc.h>

char buff[24];

int pid;

char keyboard[256]; 

int __attribute__ ((__section__(".text.main")))
  main(void)
{

  if (GetKeyboardState(keyboard) == 0) {
    for (int i = 0; i < 256; i++) {
        if (keyboard[i]) {
            printf("Key %d is pressed\n", i);
        }
    }
} else {
    perror();
}
return 0;

  while(1) { }
}
