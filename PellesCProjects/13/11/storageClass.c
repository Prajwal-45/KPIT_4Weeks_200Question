/*
#define var1 5
#include <stdio.h>
int main(){
int var2=5+var1;
printf("%d",var2);
return 0;
}
*/
/* with arguents
#define sum(var1,var2) (var1=var1+var2)
#include <stdio.h>
int main(){
    int a=2,b=3;
	printf("%d\n",sum(a,b));
	return 0;
}
*/

/* nesting macro
#define start(var1) (var1=5+var1)
#define stop(var1)  (start(var1)+5) 
#include <stdio.h>
int main(){
 int a=0;
    a=stop(a);
	printf("%d\n",a);
return 0;
}
*/


/*Macro with if else
#define mac(var1)  {if(var1>5)  \
                       var1=1;   \
                    else        \
                       var1=0;  }      
                         
#include <stdio.h>
int main(void){
    int a=2;
    //printf("%d\n",mac(a)); 
	mac(a);
    printf("%d\n",a);
	return 0;
}*/

/*generic function i.e., MAcro for a function

#define funMac(fun(x,y),type)                 \
                { type fun(x,y){          \
                      x=x+y;}             \
                 }  
#include <stdio.h>
funMac(fun(a,b),int);
funMac(fun(x,y),float);
int main(){
   int a=3,b=2,c,d;
   float x=1.5,y=3.5;
   //c=fun(a,b);
	c= 
   printf("%d\n",c);
return 0;
}
*/
















