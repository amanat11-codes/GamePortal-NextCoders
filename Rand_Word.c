#include<stdio.h>
#include<time.h>
#include<string.h>
#include<random>
#define tick "{OK}"
#define cross "{X}"
int main()
{
    srand(time(0));
    FILE *fp;
    fp=fopen("lots-of-words-mid.txt","r");
    char words[155][50];
    char word[50];
    top :
    printf( "\tWelcome to the ripoff of the classic WORDLE game \n \n \n" );
    printf("   Here you have to guess a selected word within 10 tries \n \n Each try will tell you if the CHARACTER and the POSITION of the character is correct or not\n Keep Guessing using various words\n \n" );
      for(int i=0;i<155;i++)
    {
        for(int j=0;j<50;j++)
        {
            words[i][j]='\0';
        }
    }
    for(int j=0;j<50;j++)
        {
            word[j]='\0';
        }
    
    for(int i=0;i<150;i++)
    {
        fscanf(fp,"%s",words[i]);
    }
    int rw;
    printf("Your Word Has : %d Characters \n",  strlen(words[rw=rand()%150]));
    for(int i=0;i<strlen(words[rw]);i++)
    printf( "# \t");
    printf( "\n\n");
    char copyword[100];
    for(int i=0;i<10;i++)
    {
        bool win=true;
        strcpy(copyword, words[rw]);
        printf("GUESS %d  :: ",i+1 );
        scanf("%s", word);
        printf( "\t");
        for(int j=0;j<strlen(word);j++)
        printf("%c\t" ,word[j] );
        printf("\n" );
        printf("\t");
        for(int j=0;j<strlen(word);j++)
        {
            if(word[j]==words[rw][j])
            printf(tick) ;
            else
            printf(cross );
        if(j!=strlen(word)-1)
        printf("\t" );
        }
        printf("--> POSITION\n\t");
        for(int j=0;j<strlen(word);j++)
        {
            for(int k=0;k<strlen(words[rw]);k++)
            {
                if(word[j]==copyword[k])
                {
                    printf( tick );
                    if(j!=strlen(word)-1)
                    copyword[k]='0';
                    break;
                }
                else if(k==strlen(words[rw])-1)
                printf( cross);
            }
            if(j!=strlen(word)-1)
                printf( "\t" );
        }
        printf( "--> CHARACTER\n\n");
        
        if(strcmp(word,words[rw])==0)
        {
            printf("\n\nYOU HAVE GUESSED CORRECTLY!!\n\n") ;
            printf("\n Do you want to play again? y/n ==> ");
            fflush(stdin);
            char c=getchar();
            if(( c=='y')||(( c=='Y')))
            goto top;
            else
            break;
        }
        if(i==9)
        {
            printf("\n\n****OUT OF CHANCES****\n\n") ;
            printf("\n REVEAL THE WORD? y/n ==> ");
            fflush(stdin);
            char c=getchar();
            if(( c=='y')||(( c=='Y')))
            printf("%s",words[rw]);
            printf("\n Do you want to play again? y/n ==> ");
            fflush(stdin);
            c=getchar();
            if(( c=='y')||(( c=='Y')))
            goto top;
            else
            break;
        }
    }
    

    fclose(fp);
    return 0;
}