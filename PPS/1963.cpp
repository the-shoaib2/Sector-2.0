// the.shoaib2
#include <stdio.h>


int main(){
	int a,b=0,c;

	while(scanf("%d %d",&a,&b)!=EOF){
	c=0;
		while(b!=0){
				c+=b%10;
				b/=10;
		}
		if(c%3==0){
			printf("%d sim\n",c);
		}else{
			printf("%d nao\n",c);
		}
	}

	return 0;
}
