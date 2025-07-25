    #include <stdio.h>

    int main(void)
    {
        int alt;
        int cont;
        int hash;
        printf("Enter Number:");
        scanf("%d", &alt);
        if(alt>8||alt<=0)
        {
           printf("Enter Number:");
        }
        for (cont=1; cont<=alt; cont++)
        {
            printf(" ");
            for(hash=1; hash<=cont; hash++)
            { 
                printf("#"); 
            }
            printf("\n");
        }
            return 0;  
    }
