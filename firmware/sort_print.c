// Functions for output to file: any data written using the following
// will end up in the file 'output.dump' - this should be read as a sort
// This file is expected to be directly #include'd into the main source
#define SORTPORT 0x20000000
void sort_print_chr(char ch);
void sort_print_str(const char *p);
void sort_print_dec(unsigned int val);
void sort_print_header(bool colour, int width, int height);
void sort_print_chr(char ch)
{
	*((volatile uint32_t*)SORTPORT) = ch;
}
void sort_print_str(const char *p)
{
while (*p != 0)
		*((volatile uint32_t*)SORTPORT) = *(p++);
}
void sort_print_dec(unsigned int val)
{
char buffer[10];
char *p = buffer;
while (val || p == buffer) {
		*(p++) = val % 10;
		val = val / 10;
	}
while (p != buffer) {
		*((volatile uint32_t*)SORTPORT) = '0' + *(--p);
	}
}
void sort_print_header(bool colour, int width, int height)
{
sort_print_chr('P');
sort_print_chr(colour ? '6' : '5');
sort_print_chr('\n');
sort_print_dec(width);
sort_print_chr(' ');
sort_print_dec(height);
sort_print_str("\n255\n");
}
