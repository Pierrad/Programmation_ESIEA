#include <stdio.h>
#include <stdlib.h>

int connexions[26], autorisation[26]={0};
char textRotor[3][26]={{'E','K','M','F','L','G','D','Q','V','Z','N','T','O','W','Y','H','X','U','S','P','A','I','B','R','C','J'},
                       {'A','J','D','K','S','I','R','U','X','B','L','H','W','T','M','C','Q','G','Z','N','P','Y','F','V','O','E'},
                       {'B','D','F','H','J','L','C','P','R','T','X','V','Z','N','Y','E','I','W','G','A','K','M','U','S','Q','O'}};
int rotor[3][26];
char textReflector[26]={{'E','J','M','Z','A','L','Y','X','V','B','W','F','C','R','Q','U','O','N','T','S','P','I','K','H','G','D'}}; 
int reflector[26];
int invRotor[3][26];


int Convert (char lettres)
{
    if (lettres > 64 && lettres < 91)
    {
        return (lettres-65);
    }
      if (lettres > 96 && lettres < 123)
    {
        return (lettres-97);
    }
    else return -1;
    
}

void Text2Value()
{
        for (int i =0; i<3; i++)
        {
            for (int j=0; j<26; j++)
            {
                rotor[i][j] = Convert(textRotor[i][j]);
            }
        }
        for (int l=0; l<26; l++)
            {
                reflector[l] = Convert(textReflector[l]);
            }
        
}
 
int GenerateInvPerm()
{
    
    
    
}
void Init_Connexions()
{
    for (int i = 0; i<26; i++)
    {
        connexions[i]=i;
    }
}

int ConnectCables()
{
    
    for (int i=0; i<6; i++)
    {
        char lettre_p = 0, lettre_c = 0;
        
        printf("%d Quelle lettre voulez vous permutez ? : ", i);
        scanf("%c", &lettre_p);
        getchar();
        printf("Avec quelle lettre ? : ");
        scanf("%c", &lettre_c);
        getchar();
        if ((lettre_p==lettre_c)|| autorisation[Convert(lettre_p)]==1 || autorisation[Convert(lettre_c)]==1)
        {
            i--;
            continue;
        }
        else{
        autorisation[Convert(lettre_p)]=1;
        autorisation[Convert(lettre_c)]=1;
        
        int tmp = lettre_p;
        connexions[Convert(lettre_p)]=Convert(lettre_c);
        connexions[Convert(lettre_c)]=Convert(tmp);
 
    }
    printf("\n");
    }
    return 0;
}



int Encrypt(int lettres)
{
    lettres = connexions[lettres];
    for (int i=0; i<3; i++)
    {
        lettres = rotor[i][lettres];
    }
    lettres = reflector[lettres];

    return lettres;
}

int main(int argc, char **argv)
{
    system("clear");
    Text2Value();
    Init_Connexions();
    ConnectCables();

    for(int k=0; k<26;k++)
    {
        printf("[%d]", connexions[k]);
    }
    printf("\n");
    
    int i;
    int j;
    for(i = 1; i < argc; i++) { 
        j = 0;
        while(argv[i][j] != '\0') {
            printf("%d\n", Encrypt(Convert(argv[i][j])));
            j++;
        }
        printf("\n");
    }
    
    /*
    for (int i =0; i<3; i++)
        {
            for (int j=0; j<26; j++)
            {
               printf("[%d]", rotor[i][j]);
               
            }
            printf("\n");
        }
    */
    return 0;

}
