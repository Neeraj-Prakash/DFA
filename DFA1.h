#define N_st 2
#define N_ip 2
#define N_Fst 1

//ALl the details of the DFA are defined below

int stats[N_st]={0,1};
int input[N_ip]={0,1};
int fin[N_Fst]={0};
int rules[N_st][N_ip]={{1,1},{0,0}};
int in_st=0;

