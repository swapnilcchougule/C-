/* Theory @ https://www.tutorialspoint.com/cplusplus/cpp_multithreading.htm
execute the code on : https://www.onlinegdb.com/online_c++_compiler#
*/

#include <iostream>
#include <cstdlib>
#include <pthread.h>

using namespace std;
#define NUM_THREADS 5

void *PrintHello(void *threadid) 
{long tid;
 tid = (long)threadid;
 cout << "Threading is running...!! Thread ID, " << tid << endl;
 pthread_exit(NULL);
}

int main () 
{pthread_t threads[NUM_THREADS];
 int rc;
 int i;
 for( i = 0; i < NUM_THREADS; i++ )
  {cout << "main() : creating thread, " << i << endl;
   rc = pthread_create(&threads[i], NULL, PrintHello, (void *)i);
   if (rc)
   {cout << "Error:unable to create thread," << rc << endl;
    exit(-1);
    }
   }
 pthread_exit(NULL);
}
