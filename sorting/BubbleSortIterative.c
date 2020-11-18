#include <stdio.h>
#include <stdbool.h>
#include <sys/time.h>
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

        for(int i=0;i<n;i++){
            bool anyswap=false;
            for(int j=0;j<n-1-i;j++){
                if(arr[j]>arr[j+1]){
                    int temp=arr[j];
                    arr[j]=arr[j+1];
                    arr[j+1]=temp;
                    anyswap=true;
                }
            }
            if(!anyswap) break;
        }
        
        gettimeofday(&stop,0);
        msecs = (double)(stop.tv_usec - start.tv_usec) / 1000000 + (double)(stop.tv_sec - start.tv_sec);
        msecs*=1000;
        fclose(fp);
        printf("%d,%lf\n",n,msecs);
    }
    // for(int i=0;i<n;i++){
    //     printf("%d ",arr[i]);
    // }
    // printf("\n");

}