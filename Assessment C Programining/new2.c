#include<stdio.h>
#include<stdlib.h>
int main()
{
    int menu,plates,items,bill1=0,bill2=0,bill3=0,bill4=0,bill5=0,bill6=0,bill7=0,bill8=0,bill9=0,bill10=0,
    total_bill,chicken_biryani=160,chicken_biryani_shami_kabab= 220,chicken_biryani_1_drink=190,
    chicken_biryani_shami_kabab_1_drink= 250,fish_per_kg= 600,fish_1_drink= 650,russian_salad= 100,
    sabzi= 150,Ice_cream_vanella_flavour= 130,Ice_cream_king_kolfa_flavour= 140;
    char choice;
        printf("\n~~~~~~Welcome to ocean View Restuarant~~~~~~\n\n");
    main:
    printf("\t[1] Main Menu\n\t[2] Bill Payment\n\t[3] Exit\n\nChoice is yours\n");
    scanf("%d",&menu);
    system("cls");
    switch(menu)
    {
        case 1:
    menu:
             printf("\n¬¬¬¬¬¬¬¬¬¬  Welcome to Main Menu  ¬¬¬¬¬¬¬¬¬\n\n");
            printf("\t[1] Chicken Biryani \t \t\t160Rs\n\t[2] Chicken Biryani+Shami Kabab  \t220Rs\n\t[3] Chicken Biryani+1 drink \t\t190Rs\n");
            printf("\t[4] Chicken Biryani+Shami Kabab+1drink  250Rs\n\t[5] Fish Per Kg \t\t\t600Rs\n\t[6] Fish+1 drink \t\t\t650Rs\n");
            printf("\t[7] Russian Salad \t\t\t100Rs\n\t[8] Sabzi  \t\t\t\t150Rs\n\t[9] Ice cream Vanella Flavour \t\t130Rs\n");
            printf("\t[10] Ice cream King Kolfa Flavour  \t140Rs\n\n");
            printf("Choose upto 10\n");
            scanf("%d",&items);
            system("cls");
            switch(items)
            {
                case 1:
                    printf("Chicken Biryani\n\n");
                    printf("Enter the plates you want to order:\n");
                    scanf("%d",&plates);
                    bill1=chicken_biryani*plates;
                     printf("\nChicken Biryani= %dRs",bill1);
                    break;
                case 2:
                     printf("Chicken Biryani+Shami Kabab\n\n");
                     printf("Enter the plates you want to order:\n");
                    scanf("%d",&plates);
                    bill2=chicken_biryani_shami_kabab*plates;
                    printf("\nChicken Biryani+Shami Kabab= %dRs",bill2);
                    break;
                case 3:
                    printf("Chicken Biryani+1 drink\n\n");
                    printf("Enter the plates you want to order:\n");
                    scanf("%d",&plates);
                    bill3=chicken_biryani_1_drink*plates;
                    printf("\nChicken Biryani+1 drink= %dRs",bill3);
                    break;
                case 4:
                    printf("Chicken Biryani+Shami Kabab+1 drink\n\n");
                    printf("Enter the plates you want to order:\n");
                    scanf("%d",&plates);
                    bill4=chicken_biryani_shami_kabab_1_drink*plates;
                    printf("\nChicken Biryani+1 drink= %dRs",bill4);
                    break;
                case 5:
                    printf("Fish\n\n");
                    printf("Enter the plates you want to order:\n");
                    scanf("%d",&plates);
                    bill5=fish_per_kg*plates;
                    printf("\nFish= %dRs",bill5);
                    break;
                case 6:
                    printf("Fish+1 drink\n");
                    printf("Enter the plates you want to order:\n");
                    scanf("%d",&plates);
                    bill6=fish_1_drink*plates;
                    printf("Fish+1 drink= %dRs",bill6);
                    break;
                case 7:
                    printf("Russian Salad\n\n");
                    printf("Enter the plates you want to order:\n");
                    scanf("%d",&plates);
                    bill7=russian_salad*plates;
                    printf("\nRussian Salad= %dRs",bill7);    
                    break;
                case 8:
                    printf("Sabzi\n\n");
                    printf("Enter the plates you want to order:\n");
                    scanf("%d",&plates);
                    bill8=sabzi*plates;
                    printf("\nSabzi= %dRs",bill8);    
                    break;
                case 9:
                    printf("Ice cream Vanella Flavour\n\n");
                    printf("Enter the bowls you want to order:\n");
                    scanf("%d",&plates);
                    bill9=Ice_cream_vanella_flavour*plates;
                    printf("\nIce cream Vanella Flavour=%dRs",bill9);
                    break;
                case 10:
                    printf("Ice cream King Kolfa\n\n");
                    printf("Enter the bowls you want to order:\n");
                    scanf("%d",&plates);
                    bill10=Ice_cream_king_kolfa_flavour*plates;
                    printf("\nIce cream King Kolfa=%dRs",bill10);
                    break;
                default:
                    printf("Error... Please select upto 10.\a");
               } 
                    printf("\n\nDO YOU WANT TO CONTINUE ON MENU\n(Press'y' for yes\nPress 'n'for No)\n");
                    scanf("%s",&choice);
                    system("cls");
                   if(choice=='y')
                {
                    goto menu;
                }
                else if(choice=='n')
                    goto main;
            
        case 2:    
                printf("\n`````````Bill`````````\n\n");
                total_bill=bill1+bill2+bill3+bill4+bill5+bill6+bill7+bill8+bill9+bill10;
                printf("\nTotal Bill=%dRs\n\n",total_bill);
                  printf("/ / / / thanks for visiting \\ \\ \\ \\\n");
                break;   
        case 3: 
               printf("\n\nYou haven`t payed your bill. please pay your bill\a\n");
                  goto main;                   
                printf("Thanks\n");    
                break;
            
    }
}