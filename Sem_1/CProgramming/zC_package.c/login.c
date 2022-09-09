#include <stdio.h>

char n[20],r[6];

int strCmp(char s1[],char s2[])
{
    int i,f=-1;
    for (i=0;s1[i]!='\0' || s2[i]!='\0';i++)
    {
        if(s1[i]>s2[i]){
            return 1;
        }
        else if(s1[i]<s2[i]){
            return -1;
        }
    }
    return 0;
}

int login()
{
    char roll[][7]={{"21PD01"},{"21PD02"},{"21PD03"},{"21PD04"},{"21PD05"},{"21PD06"},{"21PD07"},{"21PD08"},{"21PD09"},{"21PD10"},
                      {"21PD11"},{"21PD12"},{"21PD13"},{"21PD14"},{"21PD05"},{"21PD16"},{"21PD17"},{"21PD18"},{"21PD19"},{"21PD20"},
                      {"21PD21"},{"21PD22"},{"21PD23"},{"21PD24"},{"21PD25"},{"21PD26"},{"21PD27"},{"21PD28"},{"21PD29"},{"21PD30"},
                      {"21PD31"},{"21PD32"},{"21PD33"},{"21PD34"},{"21PD35"},{"21PD36"},{"21PD37"},{"21PD38"},{"21PD39"},{"21PD40"}};

    char name[40][20]={{"ABINAYA V"},{"ASHERE JESWIN"},{"BENNY ABHISHEK M"},{"BHARATHI SHANKAR J"},{"DISHA C S"},{"DIVYADHARSHINI B"},
                        {"DILIP RAJ N J"},{"G S PRETHIKA"},{"HARINI K R"},{"HARINI K V"},{"HARISH R"},{"HARSHINI T S"},{"JAGADEESH E"},
                        {"JAISUBASRI K"},{"JEEVIKA K"},{"KAIF SHAHEEM J"},{"KAMAL NITHISH P"},{"KANISHKA K"},{"KRITHIKA L"},
                        {"M AISWARYA"},{"MADHUMITHA M"},{"NILAVINI B M"},{"NITHISH R"},{"PARTHASARATHI S"},{"R AAYUSH SRIVATSAV"},
                        {"R DHIKSHITHA"},{"RAJANEHA R"},{"ROHITH KRISHNA R"},{"SAI VIGNESH J"},{"SAMYUGTHA M"},{"SANJANA R"},
                        {"SANJAY RAM R R"},{"SHARMILA J"},{"SHIVANI E"},{"SREENIDHI R"},{"SUBASH S"},{"V K DEEKSHA"},
                        {"VAMSI KRISHNA U"},{"VARSHA S"},{"VIGNESH BABU J S"}};
    
    printf("\nEnter your Roll number (in caps):");
    scanf("\n");
    scanf("%[^\n]s",r);
    printf("\nEnter your name (in caps):");
    scanf("\n");
    scanf("%[^\n]s",n);
    
    int i,f=0;
    for(i=0;i<40;i++){
        if(strCmp(roll[i],r)==0){
            f=1;
            break;
        }
    }

    if (f==0)
        return 0;
    if (f==1)
    {
        if (strCmp(name[i],n)!=0)
            return 0;
    }
    return 1;
}
