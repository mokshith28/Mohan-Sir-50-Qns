// 6. Avoiding deadlocks
// Program where a resource can be accessed by more than one thread, without encountering a deadlock.
// To avoid deadlocks, you are required to procure resources in a certain order and ensure that they are released in reverse order.

#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>
#include <unistd.h>

pthread_mutex_t m1 = PTHREAD_MUTEX_INITIALIZER;
pthread_mutex_t m2 = PTHREAD_MUTEX_INITIALIZER;

void* threadA(void* arg) {
    pthread_mutex_lock(&m1); // Thread A locks m1
    printf("Thread A acquired m1\n");
    usleep(1000); // Simulating some work
    pthread_mutex_lock(&m2); // Thread A attempts to lock m2
    printf("Thread A acquired m2\n");
    pthread_mutex_unlock(&m2); // Thread A unlocks m2
    pthread_mutex_unlock(&m1); // Thread A unlocks m1
    return NULL;
}

void* threadB(void* arg) {
    pthread_mutex_lock(&m2); // Thread B locks m2
    printf("Thread B acquired m2\n");
    usleep(1000); // Simulating some work
    pthread_mutex_lock(&m1); // Thread B attempts to lock m1
    printf("Thread B acquired m1\n");
    pthread_mutex_unlock(&m1); // Thread B unlocks m1
    pthread_mutex_unlock(&m2); // Thread B unlocks m2
    return NULL;
}

int main() {
    pthread_t t1, t2;

    pthread_create(&t1, NULL, threadA, NULL); // Creating thread A
    pthread_create(&t2, NULL, threadB, NULL); // Creating thread B

    pthread_join(t1, NULL); // Wait for thread A to finish
    pthread_join(t2, NULL); // Wait for thread B to finish

    return 0;
}
