//
//  main.c
//  
//
//  Created by Karoline Malene on 14/01/2020.
//

#include <stdio.h>

int main(){
    printf("Hello world\n");
    
    if(1<0){
        //In  C returning something non zero signals an error
        return 1;
    }
    return 0;
}
