#define INIT_LIST_SIZE 20
#define INCR_LIST_SIZE 20
#define MAX_NAME_LENGTH 100

static int readNames(char ***ptrnames, FILE *fp);
void printNames(char **names, int nonames, FILE *fp);
void sortNames(char **names, int nonames);