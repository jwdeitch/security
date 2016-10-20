#include <stdio.h>

int main(int argc, char *argv[]) {

    if (argc < 2) {
        printf("Usage: %s URL\n\n"\
               "--packets / -p: number of packets to send (default: 1)\n\n", argv[0]);
    }

    char *URL;
    URL = argv[1];

    int packets = 1;
    if (argc == 4) {
        if (strcmp(argv[3], "--packets") || strcmp(argv[3], "-p")) {
            packets = argv[4];
        }
    }

    char *URLstr = malloc(strlen("URL: ")+strlen(URL)+1);
//    char *Packetsstr = malloc(strlen("Packets: ")+strlen(packets)+1);

    puts(URLstr);
//    puts(Packetsstr);

    return 1;

}