#include <libc.h>

char buff[24];

int pid;

char keyboard[98];

int __attribute__ ((__section__(".text.main")))
  main(void)
{
    /* Next line, tries to move value 0 to CR3 register. This register is a privileged one, and so it will raise an exception */
     /* __asm__ __volatile__ ("mov %0, %%cr3"::"r" (0) ); */
    /*
  if (getKeyboardState(keyboard) == 0) {
      for (int i = 0; i < 98; i++) {
          if (keyboard[i]) {
              write(1, "Tecla presionada\n", 17);
          }
      }
  } else {
      write(1, "Error al obtener el estado del teclado\n", 39);
  }
  return 0;
*/

  while(1) { }
}
