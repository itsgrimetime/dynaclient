#include <enet/enet.h>
#include <stdio.h>

int main(int argc, char **argv) {

    ENetHost *client;
    client = enet_host_create(NULL, 1, 2, 1024000 / 8, 256000 / 8);

    if (client == NULL) {
	fprintf(stderr, "An error occurred while trying to create an ENet client host.\n");
	exit(EXIT_FAILURE);
    } else {
	fprintf(stdout, "Successfully created ENet client host.\n");
    }


    enet_host_destroy(client);
}
