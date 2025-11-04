#include <stdio.h>
#include <math.h>
#include <time.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>
int main (){
	int arr[]={1,2,3,5,23,5,2,1};
	int arrsize=sizeof(arr)/sizeof(int);
	int n_max;
	int cnt_max;
	for(int i=0;i<arrsize;i++){
		int cnt=1;
		for(int j=i+1;j<arrsize;j++){		
		if(arr[i]==arr[j]) cnt++;
		}
		if(cnt_max<cnt)
			cnt_max=cnt;
			n_max=arr[i];
		}
		
	
		printf("%d",n_max);
	}
	
	

