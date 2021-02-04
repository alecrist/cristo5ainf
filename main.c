#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
#include <time.h>
#include "gamelib.h"

int main()
{
  int scelta;
  bool flag=false;

  do
  {
    system("clear");
    printf("\n---MENU' PRINCIPALE---\n Inserisci scelta:\n1: IMPOSTA GIOCO\n2: GIOCA\n3:ESCI\n");
    scanf("%d",&scelta);

    switch(scelta)
    {
      case 1:
        flag=impostagioco();
        break;

      case 2:
        if(flag==true)
        {
          gioca();
        }
        else
        {
          printf("\nDEVI PRIMA IMPOSTARE IL GIOCO\n");
        }
        break;

      case 3:
        terminagioco();
        printf("\nSPERO TU TI SIA DIVERTITO! ALLA PROSSIMA\nAlessandro Cristofani Matricola:333563\n");
        break;
    }
    if(scelta!=1 && scelta!=2 && scelta!=3)
      printf("\n---ATTENZIONE: COMANDO NON RICONOSCIUTO!\n");

  } while(scelta!=3);
}
