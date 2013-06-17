/**
 * This Project is for Automated Bell System, This is deployed in PC for Bell ringing based on PC time.
 * 
 * @author Kirankumar Kotari
 * @version 1,Jan 2010
 */

/**
 * Header File Import Stmts. 
 */
#include "Headers\stdio.h"
#include "Headers\conio.h"
#include "Headers\dos.h"
#include "Headers\time.h"

/**
 * Main Function 
 */
int main(){
    clrscr();
    printf(" THE LOW-COST AUTOMATIC BELL SYSTEM USING PC HAS BEEN STARTED \n");
    printf(" THE PROGRAM WRITEN BY KIRANKUMAR KOTARI, HARDWARE SUPPORT DONE BY T.VINOD, M.NARESH AND K.RAJESH \n");
    printf(" THE THOUGHT OF AUTOMATIC BELL SYSTEM IS GIVEN BY P.RAGAVAYA REDDY \n");
    logic();
    printf(" THE LOW COST AUTOMATIC BELL APPLICATION IS STOPPED.");
    sleep(4);
    return 0;
}

/**
 * Function for Logic
 */
int logic(){
    struct time t;
    int bell=0,bellring=0,k=1;
    
    while(1){
        gettime(&t);
        bell = t.ti_hour * 100 + t.ti_min;
        
        while( k != bell ){
            switch(bell){
                 case 845:
        	     case 855:
        	     case 1055:
        	     case 1445:
        	     case 1455:
        	     case 1655: 
        	               bellring=3;
        	               break;
        	     case 900:
        	     case 920:
        	     case 930:
        	     case 1100:
        	     case 1500:
        	     case 1520:
        	     case 1530: 
        	               bellring=5;
        	               break;
        	     case 1700: 
        	               bellring=5;
        	               goto end;
        	     default: 
        	               bellring=0;
        	               k=bell;
        	           }
        
    	   k=bell;
    	   sound(250);
    	   sleep(bellring);
    	   nosound();
        }
    }
    end:
    sound(250);
    sleep(bellring);
    nosound();
    return 0;
}