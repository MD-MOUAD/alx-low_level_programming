#include "main.h"
#include <elf.h>
#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>

int main(int argc, char *argv[]) {
    int fd;
    Elf64_Ehdr header;

    if (argc != 2) {
        fprintf(stderr, "Usage: %s <elf_file>\n", argv[0]);
        exit(98);
    }

    fd = open(argv[1], O_RDONLY);

    if (fd == -1) {
        perror("open");
        exit(98);
    }

    if (lseek(fd, 0, SEEK_SET) == -1) {
        perror("lseek");
        exit(98);
    }

    if (read(fd, &header, sizeof(header)) != sizeof(header)) {
        perror("read");
        exit(98);
    }

    printf("Magic: %02x %02x %02x %02x %02x %02x %02x %02x %02x %02x %02x %02x %02x %02x %02x %02x\n",
        header.e_ident[EI_MAG0], header.e_ident[EI_MAG1], header.e_ident[EI_MAG2], header.e_ident[EI_MAG3],
        header.e_ident[EI_MAG4], header.e_ident[EI_MAG5], header.e_ident[EI_MAG6], header.e_ident[EI_MAG7],
        header.e_ident[EI_MAG8], header.e_ident[EI_MAG9], header.e_ident[EI_MAG10], header.e_ident[EI_MAG11],
        header.e_ident[EI_MAG12], header.e_ident[EI_MAG13], header.e_ident[EI_MAG14], header.e_ident[EI_MAG15]);

    printf("Class:                            %s\n", header.e_ident[EI_CLASS] == ELFCLASS32 ? "ELF32" : "ELF64");
    printf("Data:                             %s\n", header.e_ident[EI_DATA] == ELFDATA2LSB ? "2's complement, little endian" : "2's complement, big endian");
    printf("Version:                          %d (current)\n", header.e_ident[EI_VERSION]);
    printf("OS/ABI:                           %s\n", "UNIX - System V");
    printf("ABI Version:                      %d\n", 0);
    printf("Type:                             %s\n", header.e_type == ET_EXEC ? "EXEC (Executable file)" : "DYN (Shared object file)");
    printf("Entry point address:              0x%lx\n", header.e_entry);

    close(fd);

    return 0;
}
