    #include <stdio.h>
        
    int main(void)
    {
        int alt;
        int cont;
        int hash;
        printf("Enter Number:");
        scanf("%d", &alt);
        while (alt > 8 || alt < 1)
        {
            // You can add code here to prompt again or handle invalid input
            printf("Please enter a number between 1 and 8:\n");
            scanf("%d", &alt);
        }
        for (cont=0; cont<=alt; cont++)
        {
           printf(" "); 
              for (hash=0; hash<alt-cont; hash++)
              {
                printf("#");
              }
        }
             printf("\n");
             
        return 0;
    }
