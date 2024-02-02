#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <pthread.h>
#include <unistd.h>

#include "common_entry.h"

void *pal_loader_thread_start_wapper(void *arg) {
    sleep(10);
    pal_loader_thread_start();
    pthread_exit(NULL);
}

__attribute__((__constructor__)) void preload(void) {
    unsetenv("LD_PRELOAD");
    pthread_t tid;
    pthread_create(&tid, NULL, pal_loader_thread_start_wapper, nullptr);
}