#include <stdio.h>
#include <stdlib.h>
int main(int argc, char **argv) {
    int T;
    scanf("%d", &T);
    //printf("cai");
    for (int t = 0; t < T; t++) {
        char c1,c2,c3, ac;
        scanf("%c%c%c%c", &ac,&c1,&c2,&c3);
        //printf("%d\n%d\n%d\n", c1,c2,c3);
        //if (t > 0)
            //return 0;
    unsigned char *cell = calloc(300, 1);
    unsigned char *cells = cell;
    if (!cell) {
        fprintf(stderr, "Error allocating memory.\n");
        return 1;
    }
        ++cell;
		*cell = c1;
		--cell;
		++cell;
		++cell;
		*cell = c2;
		++cell;
		*cell = c3;
		--cell;
	while (*cell) {
		--*cell;
		++cell;
		--*cell;
               
                                  		++cell;
		++*cell;
		--cell;
		++cell;
		--cell;
		--cell;
	}
		++*cell;
		--*cell;
		++cell;
		++cell;
	while (*cell) {
		--*cell;
		--cell;
		--cell;
		++*cell;
		++cell;
		++cell;
	}
            
                                		--cell;
		++*cell;
		--*cell;
		++cell;
		--cell;
		++cell;
		--cell;
		--cell;
		--cell;
	while (*cell) {
		--*cell;
		++*cell;
		--*cell;
		++cell;
		--*cell;
		--cell;
		++*cell;
		--*cell;
		--cell;
		++*cell;
		++cell;
	}
		--cell;
          
                               	while (*cell) {
		--*cell;
		++cell;
		++*cell;
		--cell;
	}
		++cell;
		--cell;
		++cell;
		++cell;
		++cell;
		++cell;
		++cell;
		++cell;
		--cell;
		++cell;
		++*cell;
		++*cell;
		--*cell;
		++cell;
		++cell;
		++*cell;
		--*cell;
		++cell;
		++cell;
         
                              		++cell;
		++cell;
		++cell;
		++*cell;
	while (*cell) {
		++cell;
		++cell;
		--cell;
		++cell;
		++cell;
		++cell;
	while (*cell) {
		--*cell;
	}
		--cell;
	while (*cell) {
		--*cell;
		--cell;
		++cell;
		--*cell;
		++*cell;
	}
		--cell;
		--cell;
		++cell;
	while (*cell) {
		--*cell;
        
                             		++*cell;
		--*cell;
	}
		--*cell;
		++*cell;
		++*cell;
		--*cell;
		++*cell;
		--*cell;
		--cell;
         	while (*cell) {
		--*cell;
	}
		--cell;
		++cell;
		--cell;
		--cell;
		++cell;
	while (*cell) {
		++*cell;
       
                            		--*cell;
		--*cell;
		--*cell;
		++*cell;
	}
		--cell;
		++cell;
		--cell;
		--cell;
             		--cell;
		--cell;
		++*cell;
		--*cell;
		--cell;
		--cell;
		--cell;
		--cell;
		++cell;
      
                           		--*cell;
		++*cell;
		--cell;
		++cell;
		--cell;
		--cell;
		--cell;
		++cell;
                 		--cell;
		++*cell;
		--*cell;
		--cell;
		--cell;
	while (*cell) {
		--*cell;
		++cell;
     
                          		++cell;
		++cell;
		++cell;
		++cell;
		++cell;
		++cell;
		++*cell;
                     		++cell;
		++cell;
		++cell;
		++cell;
		++cell;
		--*cell;
		++*cell;
    
                         		++cell;
		++*cell;
		--cell;
		--cell;
		--cell;
		++cell;
		--cell;
            		--cell;
          		--cell;
		++cell;
		--cell;
		--cell;
		--cell;
		--cell;
		--cell;
   
                        		--cell;
		--cell;
		--cell;
		--cell;
	}
		++cell;
	while (*cell) {
           		--*cell;
		++cell;
		++cell;
           		++cell;
		++cell;
		++cell;
		--cell;
		++cell;
		--cell;
		++cell;
  
                       		++cell;
		--cell;
		++cell;
		++cell;
		++*cell;
		++cell;
		++cell;
          		++cell;
		++cell;
		++cell;
		++cell;
		++*cell;
            		--cell;
		--cell;
		--cell;
		--cell;
		--cell;
		++cell;
		--cell;
 
                      		--cell;
		--cell;
		--cell;
		--cell;
		++*cell;
		--*cell;
		--cell;
           		--cell;
		--cell;
		--cell;
	}
		++cell;
             	while (*cell) {
		--*cell;
		++cell;
		++cell;
		++cell;
		++cell;
		++cell;

                                        		++cell;
		++cell;
		--cell;
		++cell;
		++*cell;
                    
                                        		++cell;
		++cell;
		++cell;
		++cell;
		--*cell;
                    
                                        		++*cell;
		++cell;
		--cell;
		++cell;
		++cell;
                    
                                        		++*cell;
		--cell;
		--cell;
		--cell;
		--cell;
                    
                                        		--cell;
		--cell;
		++*cell;
		--*cell;
		--cell;
                    
         		--cell;
		--cell;
		--cell;
		++cell;
		--cell;
		--cell;
		--cell;
		--cell;
        		--*cell;
		++*cell;
		++cell;
		--cell;
	}
     		++cell;
		++cell;
		--*cell;
		++*cell;
		++*cell;
		--*cell;
		++*cell;
		++cell;
		++*cell;
		--*cell;
		++*cell;
	while (*cell) {
		--cell;
		--*cell;
	}
      		--cell;
	while (*cell) {
		--*cell;
		++cell;
		++cell;
    
      		--cell;
		++cell;
		++*cell;
		++*cell;
		--*cell;
		--cell;
		--cell;
		--cell;
	}
		++cell;
		++cell;
		++cell;
		++cell;
      	while (*cell) {
		--*cell;
		--cell;
		--cell;
		--cell;
     		++*cell;
		--*cell;
		--*cell;
		++*cell;
		--cell;
		--cell;
		--cell;
		--cell;
		++*cell;
		++cell;
		++cell;
		--cell;
		++cell;
		++cell;
		++cell;
      		++cell;
		++cell;
		++cell;
	}
		++cell;
    
     	while (*cell) {
		--*cell;
		--cell;
		--cell;
		--*cell;
		++*cell;
		--cell;
		--cell;
		--cell;
		--cell;
		--cell;
		++*cell;
		--cell;
		++cell;
		++cell;
     		++*cell;
		--*cell;
		++cell;
		++cell;
		++cell;
     		++cell;
		++cell;
		++cell;
	}
		++cell;
	while (*cell) {
		--*cell;
		--cell;
		--cell;
		--cell;
		--cell;
		++cell;
		--cell;
		--cell;
		--cell;
      		++cell;
		--cell;
		--cell;
		++*cell;
		++cell;
    
    		++cell;
		++cell;
		++cell;
		++cell;
		++cell;
		++cell;
	}
		++cell;
		++cell;
		++cell;
		++cell;
		++cell;
		++cell;
		--cell;
		++cell;
		++cell;
		++*cell;
    	while (*cell) {
		--*cell;
		--cell;
		--cell;
		--cell;
     		--cell;
		++*cell;
		--*cell;
		--*cell;
		++*cell;
		--cell;
		++cell;
		--cell;
		++*cell;
		--*cell;
		--cell;
		--cell;
		--cell;
		--cell;
		--cell;
      		--cell;
	while (*cell) {
		--*cell;
		++cell;
		++cell;
    
   		++*cell;
		++cell;
		++cell;
		++*cell;
		--cell;
		--cell;
		--cell;
		--cell;
	}
		++*cell;
		--*cell;
		++cell;
	while (*cell) {
		--*cell;
		++cell;
		++cell;
		++*cell;
		++cell;
		++cell;
   		++*cell;
		--*cell;
		++*cell;
		--cell;
		--cell;
     		--cell;
		--cell;
	}
		++cell;
	while (*cell) {
		--*cell;
		--cell;
		--cell;
		++*cell;
		++cell;
		++cell;
	}
		++cell;
	while (*cell) {
		--*cell;
      		--cell;
		--cell;
		++*cell;
		++cell;
		++cell;
    
  	}
		++*cell;
	while (*cell) {
	while (*cell) {
		--cell;
		++cell;
		--*cell;
	}
		--*cell;
		++*cell;
		++*cell;
		++cell;
	while (*cell) {
		--cell;
		--*cell;
	}
		--cell;
		++*cell;
		--*cell;
	while (*cell) {
   		++*cell;
		--*cell;
		--*cell;
		++cell;
		--cell;
     		++cell;
		++cell;
		--cell;
		++cell;
		--*cell;
		--cell;
		--cell;
		--cell;
	}
		++cell;
		++cell;
		--*cell;
		++*cell;
		--*cell;
		++cell;
      		++cell;
		++cell;
		++*cell;
		++cell;
	while (*cell) {
    
 		--cell;
		--*cell;
	}
		--cell;
		++*cell;
		--*cell;
	while (*cell) {
		--*cell;
       		++cell;
		++*cell;
		++cell;
	while (*cell) {
		--*cell;
    		--cell;
		--*cell;
	}
		--cell;
	while (*cell) {
          		++cell;
		++cell;
	while (*cell) {
		--*cell;
		--cell;
           		--cell;
		--*cell;
		++*cell;
		--*cell;
		++cell;
    
 	}
		--*cell;
		--cell;
		--cell;
	while (*cell) {
		--*cell;
		++cell;
         		++cell;
		--cell;
		--*cell;
     		++cell;
		++*cell;
		--*cell;
		++cell;
		--*cell;
          		++*cell;
		--*cell;
		--cell;
		--cell;
		--cell;
           		--cell;
	}
	}
		--cell;
	}
    
 		++cell;
		++cell;
		--*cell;
		--cell;
		--cell;
		--cell;
           		--cell;
      		--cell;
		++*cell;
		++cell;
	while (*cell) {
		++cell;
          		--cell;
		--cell;
		
		--*cell;
	}
		--cell;
           	while (*cell) {
		++cell;
		++*cell;
		--*cell;
		++cell;
    
	while (*cell) {
		--*cell;
		++*cell;
		--cell;
		--cell;
		--*cell;
                   		++cell;
	}
		--cell;
		--cell;
	while (*cell) {
          		--cell;
	}
	}
		++cell;
		--*cell;
           		++*cell;
		--*cell;
	}
		++cell;
		++cell;
    
		++cell;
		++cell;
		++cell;
		--cell;
		++cell;
		++cell;
                   		++cell;
		++cell;
		--cell;
		++cell;
		++*cell;
          	}
		--*cell;
		--cell;
		--cell;
		--cell;
           		++cell;
		++*cell;
		--*cell;
		--cell;
		--cell;
    
		--cell;
		++cell;
		++*cell;
		++cell;
		--*cell;
                    		++*cell;
		++*cell;
	while (*cell) {
		--cell;
		--*cell;
          	}
		--cell;
	while (*cell) {
		--*cell;
		++*cell;
           		++cell;
		++cell;
		++*cell;
	while (*cell) {
		--cell;
    
		--cell;
		--cell;
		++cell;
		--*cell;
		++cell;
                    		--*cell;
		++*cell;
	}
		--cell;
		--cell;
          	while (*cell) {
		++cell;
		++cell;
		++cell;
		++*cell;
           	while (*cell) {
		--cell;
		--*cell;
		++*cell;
		--cell;
    
		--cell;
		--*cell;
		++cell;
		++cell;
	}
                    		--cell;
		--cell;
		--cell;
	while (*cell) {
		--cell;
          	}
	}
	}
		++cell;
		--*cell;
           	}
		++cell;
		++cell;
		++cell;
		++cell;
    
	while (*cell) {
		--*cell;
	}
		--cell;
		--cell;
                    		--cell;
		--cell;
		--cell;
		--cell;
		--cell;
          		--*cell;
		++*cell;
		--cell;
		++cell;
		--cell;
           		--cell;
		--cell;
		--cell;
		--cell;
		--cell;
    
		--cell;
	while (*cell) {
		--*cell;
	}
		++cell;
                    		++cell;
		++*cell;
		++cell;
		++*cell;
	while (*cell) {
          		--cell;
		--*cell;
	}
		--cell;
	while (*cell) {
           		--*cell;
		++cell;
		++cell;
		++*cell;
		--cell;
    
		++cell;
		--cell;
		--cell;
		--cell;
	}
                    		++cell;
		++*cell;
		++cell;
	while (*cell) {
		--cell;
          		--*cell;
	}
		--cell;
	while (*cell) {
		++cell;
           		++cell;
	while (*cell) {
		--cell;
		--cell;
		--*cell;
    
		++cell;
	}
		--cell;
		--cell;
	while (*cell) {
                    		--cell;
	}
	}
		++cell;
		--*cell;
          	while (*cell) {
		++*cell;
		++cell;
		++cell;
		++cell;
           		++cell;
		++cell;
		++cell;
		++cell;
		--cell;
    
		++*cell;
		++*cell;
		--*cell;
		++*cell;
		++*cell;
                    		++*cell;
		++*cell;
		++*cell;
		++*cell;
		++*cell;
          		++*cell;
		++*cell;
		--cell;
		--cell;
		--cell;
           		--cell;
		--cell;
		--cell;
		++*cell;
		++cell;
    
		++*cell;
		--*cell;
	while (*cell) {
		--cell;
		--cell;
		++cell;
                   		--*cell;
	}
		--cell;
	while (*cell) {
		++cell;
          		++cell;
	while (*cell) {
		--cell;
		--cell;
		--*cell;
           		++cell;
	}
		--cell;
		--cell;
	while (*cell) {
    
		--cell;
	}
	}
		++cell;
		--*cell;
	while (*cell) {
                   		++*cell;
		++*cell;
		++cell;
	while (*cell) {
		--cell;
          		--*cell;
	}
		--cell;
	while (*cell) {
		--*cell;
           		++cell;
		++cell;
		--*cell;
		--cell;
		--cell;
    
 		--cell;
	}
		++cell;
		++cell;
		--*cell;
		++cell;
           		++cell;
      		++*cell;
		++cell;
		++cell;
		++*cell;
		++cell;
          		--*cell;
	while (*cell) {
		--cell;
		--*cell;
	}
           		--cell;
	while (*cell) {
		--cell;
		--cell;
	while (*cell) {
    
 		--*cell;
		++cell;
		++cell;
		++cell;
		++*cell;
		--cell;
		--cell;
         		++cell;
		--cell;
		--cell;
     	}
		++*cell;
		--*cell;
		++cell;
		++cell;
          		++cell;
		++cell;
		++cell;
		++*cell;
		++cell;
           		++*cell;
	while (*cell) {
		--cell;
		++cell;
		--cell;
    
 		--*cell;
	}
		--cell;
		++cell;
		--cell;
	while (*cell) {
		--*cell;
		++cell;
       		++cell;
		++*cell;
		--cell;
		--cell;
		--cell;
    	}
		--cell;
		--cell;
		--*cell;
		--cell;
          	}
		--cell;
		--cell;
		--cell;
		--cell;
           		++*cell;
		++cell;
	while (*cell) {
		--cell;
		--*cell;
    
  	}
		--cell;
	while (*cell) {
		++cell;
		++cell;
	while (*cell) {
		--cell;
		--cell;
		--*cell;
		++cell;
	}
		--cell;
		--cell;
	while (*cell) {
		--cell;
	}
	}
		++cell;
		--*cell;
	}
   		++cell;
		++cell;
		++*cell;
		++*cell;
		++*cell;
          		++*cell;
		++*cell;
		++*cell;
		++*cell;
		++*cell;
	while (*cell) {
   		--*cell;
		++cell;
     		++*cell;
		++*cell;
		++*cell;
		++*cell;
		++*cell;
    
   		++*cell;
		--cell;
	}
		++cell;
	while (*cell) {
		--*cell;
		--cell;
		--cell;
		--cell;
		--cell;
		++*cell;
		++cell;
		++cell;
		++cell;
		++cell;
	}
		++cell;
		++cell;
		++cell;
   		++cell;
		++cell;
		++*cell;
		++cell;
		--cell;
          		++cell;
		--*cell;
		++*cell;
	while (*cell) {
		--cell;
		--*cell;
	}
		--cell;
	while (*cell) {
		++cell;
		++cell;
     	while (*cell) {
		--cell;
		--cell;
		--*cell;
		++cell;
    
    	}
		--cell;
		--cell;
	while (*cell) {
		--cell;
	}
	}
		++cell;
		--*cell;
	while (*cell) {
		++*cell;
		++*cell;
		++cell;
	while (*cell) {
		--cell;
		--*cell;
	}
    		--cell;
	while (*cell) {
		--*cell;
		++cell;
		++cell;
          		--*cell;
		--cell;
		--cell;
		--cell;
	}
		++cell;
		++cell;
		--*cell;
		--cell;
		--cell;
		--cell;
     		--cell;
		--cell;
		--cell;
		--cell;
		--cell;
    
     		++*cell;
		++cell;
		++*cell;
	while (*cell) {
		--cell;
		--*cell;
	}
		--cell;
	while (*cell) {
		--*cell;
		++cell;
		++cell;
		++*cell;
		--cell;
		--cell;
     		--cell;
	}
		++cell;
		++cell;
		++cell;
          		++cell;
		++cell;
		++cell;
		++cell;
		++cell;
		++*cell;
		++cell;
	while (*cell) {
		--cell;
		--*cell;
      	}
		--cell;
	while (*cell) {
		++cell;
		++cell;
    
      	while (*cell) {
		--cell;
		--cell;
		--*cell;
		++cell;
	}
		--cell;
		--cell;
	while (*cell) {
		--cell;
	}
	}
		++cell;
      		--*cell;
	}
		--cell;
		--cell;
	while (*cell) {
           		--*cell;
	}
		--cell;
		--cell;
		--cell;
		--cell;
		--cell;
		++*cell;
		++cell;
      	while (*cell) {
		--cell;
		--*cell;
	}
		--cell;
    
         	while (*cell) {
		++cell;
		++cell;
	while (*cell) {
		--cell;
		--cell;
		--*cell;
		++cell;
        	}
		--cell;
		--cell;
	while (*cell) {
		--cell;
            	}
	}
		++cell;
		--*cell;
	}
		--cell;
		--cell;
       	while (*cell) {
		printf("%c", *cell);
		--cell;
	}
    free(cells);
    printf("\n");
    }
    return 0;
    
}