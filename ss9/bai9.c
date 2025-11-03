#include<stdio.h>
 int main (){
 	int a[8]={1,5,2,3,23,5,1,2};
 	int i,j;

 	int cnt;
 	
	int cnt_max=0;
	int num_max;
	for(i=0;i<8;i++){
			cnt=1;
	}
	for(  j=i+1;j<8;j++){
		if(a[i]==a[j])
			 ++cnt;
	}
		if(cnt_max<cnt){
			cnt_max=cnt;
			num_max=a[i];
		}
	
	printf("%d",num_max);
	return 0;
}
