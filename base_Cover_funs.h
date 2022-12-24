#ifndef BASE_COVER_FUNS_H_INCLUDED
#define BASE_COVER_FUNS_H_INCLUDED


#include <stdio.h>
#include <math.h>
#include<string.h>
#include <conio.h> //un fichier d'en-tte C utilis par le compilateur pour fournir une entr�e/sortie de console

int Bin_to_Dec(int bin) // appele au fonction pour la conversion du binaire vers decimale
{int rem,sum=0,i=0;while(bin!=0){rem=bin%10; // le reste du div sur 10
        bin=bin/10; // on passer vers l'autre chiffre dans le nombre
        sum=sum+rem*pow(2,i); // la conversion du binaire en utulisant la multiplication par 2
        i++;// incrementation
    }printf("\n Nombre decimal equivalent est : %d",sum);return sum;
} int Bin_to_Oct( int bin) // appele au fonction pour la conversion du binaire vers octale
{int i=0,rem,sum=0,remain[100],len=0;while(bin!=0) // boucle pour tester tous les composents du votre nombre binaire
    {rem=bin%10;bin=bin/10;sum=sum+rem*pow(2,i);
    i++;// incrementation
    }i=0;while(sum!=0)
    {remain[i]=sum%8;sum=sum/8;
        i++;// incrementation
        len++;// incrementation
    }printf("\n Nombre octale equivalent : ");for(i=len-1;i>=0;i--){
        printf("%d",remain[i]);}
return remain[i];}
int Bin_to_Hex(int bin) // appele au fonction pour la conversion du binaire vers hexa decimale
{    int rem,i=0,sum=0,remain[100],len=0;
    while(bin!=0){rem=bin%10;
        bin=bin/10;//POUR PASSER A L AUTRE COMBINAISON
        sum=sum+rem*pow(2,i);
        i++;// incrementation
    }i=0;while(sum!=0)
    {remain[i]=sum%16;
        sum=sum/16; i++;// incrementation
        len++;// incrementation
    }printf("\n Nombre hexa-decimal equivalent est : "); // pour resoudre le probleme de conversion du 10...15 VERS A...F EN HEXA
    for(i=len-1;i>=0;i--){switch(remain[i])  // on arrete le boucle pour chaque case avec Break;
    {case 10:printf("A"); break;
            case 11:printf("B"); break;
            case 12:printf("C"); break;
            case 13:printf("D"); break;
            case 14:printf("E"); break;
            case 15:printf("F"); break;
            default: printf("%d",remain[i]);}} return remain[i];}
 int Dec_to_Bin( int dec) // appele au fonction pour la conversion du DECIAMLE vers BINAIRE
{int rem[1500],i,len=0;do{
        rem[i]=dec%2;dec=dec/2;
        i++;// incrementation
        len++;// incrementation
    }while(dec!=0);
    printf("\n Nombre Binaire equivalent : ");
    for(i=len-1;i>=0;i--)
    {printf("%d",rem[i]);}
    return rem[i];
}
int Dec_to_Oct(int dec) // appele au fonction pour la conversion du DECIAMLE vers OCTALE
{int rem[150],i,len=0;do{
        rem[i]=dec%8;
        dec=dec/8;
        i++;// incrementation
        len++;// incrementation
    }while(dec!=0); // condition pour arreter la boucle do while si le nombre dec est egale a 0 apres les divisons succesives
    printf("\nNombre octale equivalent: "); // message a afficher
     for(i=len-1;i>=0;i--){printf("%d",rem[i]);}return rem[i];
}int Dec_to_Hex( int dec) //appele au fonction pour la conversion du DECIAMLE vers HEXA-DECIMALE
{int rem[50],i,len=0;do{rem[i]=dec%16;
        dec=dec/16;
        i++;// incrementation
        len++;// incrementation
    }while(dec!=0);printf("\nNombre hexa-decimal equivalent : ");
    for(i=len-1;i>=0;i--) // pour resoudre le probleme de conversion du 10...15 VERS A...F EN HEXA
    {
        switch(rem[i])
        {case 10:printf("A"); break;
            case 11:printf("B"); break;
            case 12:printf("C"); break;
            case 13:printf("D"); break;
            case 14:printf("E"); break;
            case 15:printf("F"); break;
            default:
                printf("%d",rem[i]);}}
return rem[i];}
int Oct_to_Bin( int oct) //appele au fonction pour la conversion du OCTALE vers BINAIRE
{int rem[50],len=0,decimal=0,i=0,num,ans;
    while(oct!=0){
        ans=oct % 10;
        decimal = decimal + ans * pow(8,i);//OPERATION POUR LA CONVERSION VERS LA BASE
        i++;// incrementation
        oct = oct/10;}
i=0;do{
        rem[i]=decimal%2;decimal=decimal/2;
        i++;// incrementation
        len++;// incrementation
    }while(decimal!=0);printf("\nNombre Binaire equivalent : ");
    for(i=len-1;i>=0;i--) {printf("%d",rem[i]);
    }return rem[i];
}int Oct_to_Dec( int oct) //appele au fonction pour la conversion du OCTALE vers Decimale
{
    int decimal=0,i=0,num,ans;
while(oct!=0)//CONDITION NESSESSAIRE POUR CONTINUE LES DIVISIONS
    {ans=oct % 10;
        decimal = decimal + ans * pow(8,i);//OPERATION POUR LA CONVERSION VERS LA BASE
        i++;// incrementation
        oct = oct/10;}
    printf("\nNombre decimal equivalent est : %d",decimal);return decimal;
}int Oct_to_Hex(int oct) // appele au fonction pour la conversion du OCTALE vers Hexa-Decimale
{
    int rem[500],len=0,decimal=0,i=0,num,ans=0;
    while(oct!=0)
    {ans=oct % 10;
        decimal = decimal + ans * pow(8,i);
        i++;// incrementation
        oct = oct/10;}i=0;while(decimal!=0)
    {rem[i]=decimal%16;
        decimal=decimal/16; // le principe du conversion c'est la divison succesive
        i++;len++;}
    printf("\nNombre hexa-decimal equivalent: ");
    for(i=len-1;i>=0;i--){switch(rem[i]){case 10:printf("A"); break;
case 11:printf("B"); break;
case 12:printf("C"); break;
case 13: printf("D"); break;
case 14:printf("E"); break;
case 15: printf("F"); break;
default:// si vous tapez un nombre invalid
                printf("%d",rem[i]);}
}return rem[i];}
void Hex_to_Bin(char hex[]) //conversion du Hexa-decimale vers BINAIRE
{int i=0;printf("\nNombre Binaire equivalent : ");
    for(i=0;i<strlen(hex);i++) //boucle simple pour realiser une verification a notre chaine de caractere et convertir tous les cas possibles vers hexadecimale
    {switch (hex[i]){
        case '0':printf("0000"); break;
        case '1':printf("0001"); break;
        case '2':printf("0010"); break;
        case '3':printf("0011"); break;
        case '4':printf("0100"); break;
        case '5':printf("0101"); break;
        case '6':printf("0110"); break;
        case '7':printf("0111"); break;
        case '8':printf("1000"); break;
        case '9':printf("1001"); break;
        case 'A':
        case 'a':
            printf("1010"); break;
        case 'B':
        case 'b':
            printf("1011"); break;
        case 'C':
        case 'c':
            printf("1100"); break;
        case 'D':
        case 'd':
            printf("1101"); break;
        case 'E':
        case 'e':
            printf("1110"); break;
        case 'F':
        case 'f':
            printf("1111"); break;
            default: // si vous tapez un chiffre pas en hexa decimale par exemple : G,k,y...
            printf("\n les Chiffres sont pas sous form acceptable en hexa-decimal %c ", hex[i]);}}}
void Hex_to_Dec(char hex[]) // appele au fonction pour la conversion du Hexa-decimale vers decimale
{int i,num=0,power=0,decimal=0;
    for(i=strlen(hex)-1;i>=0;i--){
        if(hex[i]=='A'||hex[i]=='a')
       {num=10;}
        else if(hex[i]=='B'||hex[i]=='b')
        {num=11;}
        else if(hex[i]=='C'||hex[i]=='c')
        {num=12;}
        else if(hex[i]=='D'||hex[i]=='d')
      {num=13;}
        else if(hex[i]=='E'||hex[i]=='e')
        {num=14;}
        else if(hex[i]=='F'||hex[i]=='f') {num=15;}else
{num=hex[i]-48;  // reserver la valeur de i car 48 =0 en Ascii
        }decimal=decimal+num*pow(16,power);
        power++;// incrementation
    }
    printf("\nNombre decimal equivalent est: %d",decimal);}
void Hex_to_Oct(char hex[]) {//appele au fonction pour la conversion du Hexa-decimale vers octale
    int i,len,num=0,power=0,decimal=0,rem[100]; // on va verifer chaque charactere "meme en miniscule <bonus>" et on donner la valeur juste pour ce nombre par exemple 'A' en hexadecimale est 10
    for(i=strlen(hex)-1;i>=0;i--)
    {if(hex[i]=='A'||hex[i]=='a')
{num=10;}
        else if(hex[i]=='B'||hex[i]=='b')
            {num=11;}
        else if(hex[i]=='C'||hex[i]=='c')
        {num=12;}
        else if(hex[i]=='D'||hex[i]=='d')
        {num=13;}
        else if(hex[i]=='E'||hex[i]=='e')
        {num=14;}
        else if(hex[i]=='F'||hex[i]=='f')
        {num=15;
        }else {num=hex[i]-48;}
        decimal=decimal+num*pow(16,power);power++; // incrementation
    }
i=0,len=0;while(decimal!=0){
        rem[i]=decimal%8;decimal=decimal/8;
        i++;// incrementation
        len++;// incrementation
    }printf("\nNombre octale equivalent: ");for(i=len-1;i>=0;i--){ printf("%d",rem[i]);}}


#endif // BASE_COVER_FUNS_H_INCLUDED
