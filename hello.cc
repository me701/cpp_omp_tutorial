// Exercise 1 
// Print "hello from thread X of Y".
//
// Compile using 
// $$ g++ -fopenmp hello.cc -o hello
#include <omp.h>
#include <cstdio>

int main(int argc, char* argv[])
{


{
  int thread;
  int num_threads;

  printf("Hello from %i of %i \n", thread, num_threads);
}

  return 0;
}
