#if HAVE_CONFIG_h
#include <config.h>
#endif

#include <stdio.h>
#include <stdlib.h>

#if HAVE_PTHRAD_H
#include <pthread.h>
#endif

static void* print_it(void* data) {
	printf("Hello from %s!\n", (const char*) data);
	return  0;
}

int main(int argc, char* argv[]) {
#if ASYNC_EXEC
	pthread_t tid;
	pthread_create(&tid, 0, print_it, argv[0]);
	pthread_join(tid, 0);
#else
	print_it(argv[0]);
#endif
	return 0;
}
