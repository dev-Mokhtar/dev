#include <stdio.h>
#include <math.h>
#include<string.h>
#include <conio.h>
#include "base_Cover_funs.h"
int main(){
    int op,num=1,check;
    int bin,oct,dec;
    char hex[100];
    int i,j,space;system("color B");
    printf("\t\tPROJET : CONVERTER BETWEEN BASES  \n"); printf("\t\t  MADE BY : DERBAZI MOKHTAR \n\n");
    while(num!=0) // pour obtenir la chance de repeter l'utulisation du programme
        {
        printf("\t\t>>>>>> CHOISISSEZ UNE CONVERSION <<<<<<\n\n");//LA MENU
        printf("   ---BINAIRE---       \n\n");
        printf("1: BINAIRE ==> DECIMALE.\n2: BINAIRE ==> OCTALE.\n3: BINAIRE ==> HEXA-DECIMALE.\n");
        printf("\n   ---DECIMALE---       \n\n");
        printf("4: DECIMALE ==> BINAIRE.\n5: DECIMALE ==> OCTALE.\n6: DECIMALE ==> HEXA-DECIMALE.\n");
        printf("\n   ---OCTALE---       \n\n");
        printf("7: OCTALE ==> BINAIRE.\n8: OCTALE ==> DECIMALE.\n9: OCTALE ==> HEXA-DECIMALE.\n");
        printf("\n   ---HEXA-DECIMALE---       \n\n");
        printf("10: HEXA-DECIMALE ==> BINAIRE.\n11: HEXA-DECIMALE ==> DECIMALE.\n12: HEXA-DECIMALE ==> OCTALE.\n");
        printf("\nENTRER VOTRE CHOIX : ");
        scanf("%d",&op);// variable pour choisi l operation
        switch(op)// Pour choisire le type de conversion
        {case 1:// SI IL CHOISI BINAIRE VERS DECIMALE
                printf("\n***BINAIRE VERS DECIMALE***\n");D:
                printf("\nENTRER UN NOMBRE BINAIRE (0 & 1): ");
                scanf("%ld",&bin);// LE NOMBRE BINAIRE ATTRUBIE PAR LUI
                check=bin; //verifer si vous avez tapez un nombre binaire
                while(check!=0){num=check%10;if(num>1){printf("\n%d N'EST PAS UN NOMBRE BINAIRE.\n",bin);printf("***REESSAYEZ !****\n");goto D;
                    }else check=check/10;} Bin_to_Dec(bin); break; //appel a la foncrtion bin to dec
            case 2:
                printf("\n***BINAIRE VERS OCTALE***\n");E:printf("\nENTRER UN NOMBRE BINAIRE (0 & 1): ");scanf("%ld",&bin);
                check=bin; // verifer si le nombre est en forme binaire
                while(check!=0){num=check%10;if(num>1){
                        printf("\n%d N'EST PAS UN NOMBRE BINAIRE.\n",bin);printf("***REESSAYEZ !****\n");goto E;
                    }else check=check/10;
                }Bin_to_Oct(bin); break; //appel a la foncrtion bin to oct
            case 3:
                printf("\n***BINAIRE VERS HEXA-DECIMAL***\n");F:
                printf("\nENTRER UN NOMBRE BINAIRE (0 & 1): ");scanf("%ld",&bin);
                check=bin;//verifer si vous avez tapez un nombre binaire
                while(check!=0){num=check%10;// la verification si le nombre est dans la base 2
                    if(num>1){
                        printf("\n%d N'EST PAS UN NOMBRE BINAIRE.\n",bin);printf("***REESSAYEZ !****\n");goto F;
                    }else check=check/10;}
                Bin_to_Hex(bin); break; //appel a la foncrtion bin to hex
            case 4:printf("\n***DECIMALE VERS BINAIRE***\n");//message a afficher
                printf("\nENTRER UN NOMBRE DECIMALE (0 A 9): ");scanf("%ld",&dec);Dec_to_Bin(dec); break;
case 5:
                printf("\n***DECIMALE VERS OCTALE***\n");printf("\nENTRER UN NOMBRE DECIMALE (0 A 9): ");
                scanf("%ld",&dec);Dec_to_Oct(dec); break;//break pour arreter le programe
case 6:
                printf("\n***DECIMALE VERS HEXA-DECIMALE***\n");printf("\nENTRER UN NOMBRE DECIMALE (0 A 9): ");
                scanf("%ld",&dec);Dec_to_Hex(dec); break;//appel a la foncrtion dec to hex
case 7:
                printf("\n***OCTALE VERS BINAIRE***\n");A:
                printf("\nENTRER UN NOMBRE EN OCTAL (0 A 7): ");scanf("%ld",&oct);
check=oct;// verifer si le nombre est en forme octale
while(check!=0){num=check%10;if(num>7){printf("\n%d N'EST PAS UN NOMBRE OCTAL.\n",num);goto A;
                    }else{check=check/10;i++;}}Oct_to_Bin(oct); break;//appel a la foncrtion oct to bin
            case 8:
                printf("\n***OCTALE VERS DECIMALE***\n");B:printf("\nENTRER UN NOMBRE EN OCTAL (0 A 7): ");scanf("%ld",&oct);
check=oct; // verifer si le nombre est en forme octale
                while(check!=0){num=check%10;if(num>7){
                        printf("\n%d N'EST PAS UN NOMBRE OCTALE.\n",num);goto B;}else{check=check/10;i++;}}Oct_to_Dec(oct); break;//appel a la foncrtion oct to dec
            case 9:
                printf("\n***OCTALE VERS HEXA-DECIMALE***\n");C:
                printf("\nENTRER UN NOMBRE EN OCTAL (0 A 7): ");scanf("%ld",&oct);
check=oct;// verifer si le nombre est en forme octale
                while(check!=0)
                {num=check%10;if(num>7){printf("\n%d N'EST PAS UN NOMBRE OCTALE.\n",num);goto C;}else{check=check/10;i++;}
                }Oct_to_Hex(oct); break;//appel a la foncrtion oct to hex
            case 10:
                printf("\n***HEXA-DECIMALE VERS BINAIRE***\n");X:
                printf("\nENTRER UN NOMBRE EN HEXA-DECIMAL : ");
                scanf("%s",&hex);// le variable est une chaine de caracteers pour resoudre problem du hexa decimale
for(i=strlen(hex)-1;i>=0;i--)    // verifer si le nombre est en forme hexadecimale
{if(hex[i]>'f' && hex[i]<='z' || hex[i]>'F'&& hex[i]<='Z'){printf("\nVOUZ DEVEZ ENTRER UN NOMBRE EN HEXA-DECIMALE.\n");
        printf("'%c' N'EST PAS UN NOMBRE EN HEXA-DECIMALE.\n",hex[i]);goto X;}}Hex_to_Bin(hex); break;
            case 11:
                printf("\n***HEXA-DECIMALE VERS DECIMALE***\n");Y:
                printf("\nENTRER UN NOMBRE EN HEXA-DECIMAL: ");
                scanf("%s",&hex);
                for(i=strlen(hex)-1;i>=0;i--){if(hex[i]>'f' && hex[i]<='z' || hex[i]>'F'&& hex[i]<='Z') // verifer si le nombre est en forme hexadecimale
{printf("\nVOUZ DEVEZ ENTRER UN NOMBRE EN HEXA-DECIMALE.\n");printf("'%c' N'EST PAS UN NOMBRE EN HEXA-DECIMALE.\n",hex[i]); goto Y;}}
Hex_to_Dec(hex); //appel a la foncrtion hex to dec
; break;
            case 12:
                printf("\n***HEXA-DECIMALE VERS OCTALE***\n");Z:
                printf("\nENTRER UN NOMBRE EN HEXA-DECIMAL: ");scanf("%s",&hex);
                for(i=strlen(hex)-1;i>=0;i--){if(hex[i]>'f' && hex[i]<='z' || hex[i]>'F'&& hex[i]<='Z') // verifer si le nombre est en forme hexadecimale
                        {printf("\nVOUZ DEVEZ ENTRER UN NOMBRE EN HEXA-DECIMALE.\n"); printf("'%c' N'EST PAS UN NOMBRE EN HEXA-DECIMALE.\n",hex[i]);goto Z;}}
                Hex_to_Oct(hex); break;default: printf("\n***NOMBRE INVALIDE***\n"); // si le nombre n'est pas ecrit sous form de base 2/4/8/16
                break;}do{
        printf("\n\nVOULEZ-VOUS CONTINUER = (1/0) :\n"); // si vous voulez ressayez !
        scanf("%d",&num);} while (num!=0 &&num!=1);// si vous tapez un autre nombre une message de < VOULEZ-VOUS CONTINUER> va afficher
}return 0;}
