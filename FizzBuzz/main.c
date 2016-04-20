//
//  main.c
//  FizzBuzz
//
//  Created by Taylor Benna on 2016-04-06.
//  Copyright © 2016 Taylor Benna. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    // multiples of 3 print Fizz
    // multiples of 5 print Buzz
    // multiples of both print FizzBuzz
    
    for (int i = 1; i <=100; i++)
    {
        if(i % 3 == 0 && i % 5 == 0)
        {
            printf("FizzBuzz\n");
        }
        else if(i % 3 == 0)
        {
            printf("Fizz\n");
        }
        else if(i % 5 == 0)
        {
            printf("Buzz\n");
        }
        else
        {
            printf("%d\n", i);
        }
        
    }
    return 0;
}
