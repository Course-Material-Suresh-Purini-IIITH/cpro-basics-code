#include <stdio.h>
#include <sys/time.h>
#include <stdbool.h>
void bubblesort(int arr[],int n){
    if(n==1) return;
    bool swap=false;
    for(int i=0;i<n-1;i++){
        if(arr[i]>arr[i+1]){
            int temp=arr[i];
            arr[i]=arr[i+1];
            arr[i+1]=temp;
            swap=true;
        }
    }
    if(!swap) return;
    bubblesort(arr,n-1);
}
int main(){
    char str[100];
    for(int x=1;x<=60;x++){
    int n=x*1000;
    int arr[n];
    sprintf(str,"RandomSequences2/r%d.txt",x);
    FILE *fp=freopen(str,"r",stdin);
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);       
    }
    struct timeval start, stop;
    double msecs = 0;

    gettimeofday(&start, 0);
    bubblesort(arr,n);
    gettimeofday(&stop,0);
    msecs = (double)(stop.tv_usec - start.tv_usec) / 1000000 + (double)(stop.tv_sec - start.tv_sec);
    msecs*=1000;
    fclose(fp);
    printf("%d,%lf\n",n,msecs);
    // for(int i=0;i<n;i++){
    //     printf("%d ",arr[i]);
    // }
    // printf("\n");
    }
}