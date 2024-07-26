#include <stdio.h>
#include <omp.h>

int main() {

    #pragma omp parallel
    {
        int thread_num = omp_get_thread_num();

        int total_threads = omp_get_num_threads();

        printf("Hello from thread %d out of %d threads\n", thread_num, total_threads);
    }

    return 0;
}

