#include <stdio.h>
#include <sys/time.h>
#include <math.h>

void algo1(int prime){
    struct timeval start, end;
    gettimeofday(&start, NULL);

    int isprime = 0;
    for(int i = 2; i<prime; i++){
        if(prime%i == 0){
            isprime = 1;
        }
    }

    if(isprime == 0){printf("le nombre %d est premier,  ", prime);}
    else{printf("le nombre %d n'est pas premier \n", prime);}



    gettimeofday(&end, NULL);
    long seconds = end.tv_sec - start.tv_sec;
    long microseconds = end.tv_usec - start.tv_usec;
    double elapsed = seconds + microseconds*1e-6;

    printf("temps d'execution pour algo 1, nombre %d : %.6f seconds\n", prime ,elapsed);

}

void algo2(int prime){
    struct timeval start, end;
    gettimeofday(&start, NULL);

    int isprime = 0;
    for(int i = 2; i<=prime/2; i++){
        if(prime%i == 0){
            isprime = 1;
        }
    }

    if(isprime == 0){printf("le nombre %d est premier,  ", prime);}
    else{printf("le nombre %d n'est pas premier \n", prime);}



    gettimeofday(&end, NULL);
    long seconds = end.tv_sec - start.tv_sec;
    long microseconds = end.tv_usec - start.tv_usec;
    double elapsed = seconds + microseconds*1e-6;

    printf("temps d'execution pour algo 2, nombre %d : %.6f seconds\n", prime ,elapsed);

}

void algo3(int prime){
    struct timeval start, end;
    gettimeofday(&start, NULL);

    int isprime = 0;
    for(int i = 2; i<=sqrt(prime); i++){
        if(prime%i == 0){
            isprime = 1;
        }
    }

    if(isprime == 0){printf("le nombre %d est premier,  ", prime);}
    else{printf("le nombre %d n'est pas premier \n", prime);}



    gettimeofday(&end, NULL);
    long seconds = end.tv_sec - start.tv_sec;
    long microseconds = end.tv_usec - start.tv_usec;
    double elapsed = seconds + microseconds*1e-6;

    printf("temps d'execution pour algo 3, nombre %d : %.6f seconds\n", prime ,elapsed);

}

void algo4(int prime){
    struct timeval start, end;
    gettimeofday(&start, NULL);

    int isprime = 0;
    if(prime%2!=0){
        for(int i = 3; i<=sqrt(prime); i=i+2){
            if(prime%i == 0){
                isprime = 1;
            }
        }
    }

    if(isprime == 0){printf("le nombre %d est premier,  ", prime);}
    else{printf("le nombre %d n'est pas premier \n", prime);}



    gettimeofday(&end, NULL);
    long seconds = end.tv_sec - start.tv_sec;
    long microseconds = end.tv_usec - start.tv_usec;
    double elapsed = seconds + microseconds*1e-6;

    printf("temps d'execution pour algo 4, nombre %d : %.6f seconds\n", prime ,elapsed);

}


int main(){

    int primes[12] = {1000003, 2000003, 4000037, 8000009, 16000057, 32000011, 64000031, 
                      128000003, 256000001, 512000009, 1024000009, 2048000011};
    
    printf("----------algo 1------------\n");
    for(int i = 0; i<12; i++){
        algo1(primes[i]);
    }

    printf("----------algo 2------------\n");
    for(int i = 0; i<12; i++){
        algo2(primes[i]);
    }

    printf("----------algo 3------------\n");
    for(int i = 0; i<12; i++){
        algo3(primes[i]);
    }

    printf("----------algo 4------------\n");
    for(int i = 0; i<12; i++){
        algo4(primes[i]);
    }


    return 0;
}