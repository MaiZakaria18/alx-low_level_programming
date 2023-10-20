#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdint.h>
#include <unistd.h>
#include <fcntl.h>
#include <elf.h>
/**
 * print_elf_header - func
 * @header: h
 */
void print_elf_header(const Elf64_Ehdr *header)
{
printf("  Magic:   ");
for (int i = 0; i < EI_NIDENT; i++)
{
printf("%02x ", header->e_ident[i]);
}
printf("\n");
printf("  Class:                             ");
switch (header->e_ident[EI_CLASS])
{
case ELFCLASS32:
printf("ELF32\n");
break;
case ELFCLASS64:
printf("ELF64\n");
break;
default:
printf("Invalid\n");
break;
}
printf("  Data:                              ");
switch (header->e_ident[EI_DATA]) {
case ELFDATA2LSB:
printf("2's complement, little-endian\n");
break;
case ELFDATA2MSB:
printf("2's complement, big-endian\n");
break;
default:
printf("Invalid\n");
break;
}
printf("  Version:                           %d (current)\n", header->e_ident[EI_VERSION]);
printf("  OS/ABI:                            ");
switch (header->e_ident[EI_OSABI]) {
case ELFOSABI_SYSV:
printf("UNIX - System V\n");
break;
case ELFOSABI_HPUX:
printf("HP-UX\n");
break;
case ELFOSABI_STANDALONE:
printf("Standalone App\n");
break;
default:
printf("Other\n");
break;
}
printf("  ABI Version:                       %d\n", header->e_ident[EI_ABIVERSION]);
printf("  Type:                              ");
switch (header->e_type) {
case ET_NONE:
printf("NONE (None)\n");
break;
case ET_REL:
printf("REL (Relocatable file)\n");
break;
case ET_EXEC:
printf("EXEC (Executable file)\n");
break;
case ET_DYN:
printf("DYN (Shared object file)\n");
break;
case ET_CORE:
printf("CORE (Core file)\n");
break;
default:
printf("Other\n");
break;
}
printf("  Entry point address:               0x%lx\n", (unsigned long)header->e_entry);
}
/**
 * main - func
 * @argc: i
 * @argv: iny
 * Return :0
 */
int main(int argc, char *argv[]) {
if (argc != 2) {
fprintf(stderr, "Usage: %s elf_filename\n", argv[0]);
return 98;
}
int fd = open(argv[1], O_RDONLY);
if (fd == -1) {
perror("Failed to open the file");
return 98;
}
Elf64_Ehdr header;
if (read(fd, &header, sizeof(Elf64_Ehdr)) != sizeof(Elf64_Ehdr))
{
fprintf(stderr, "Error reading ELF header from file\n");
close(fd);
return 98;
}
if (memcmp(header.e_ident, ELFMAG, SELFMAG) != 0)
{
fprintf(stderr, "Not an ELF file\n");
close(fd);
return 98;
}
printf("ELF Header:\n");
print_elf_header(&header);
close(fd);
return 0;
}
