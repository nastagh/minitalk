#include "ft_printf.h"
#include "ft_printf.c"
#include <limits.h>
#include <stdio.h>

#include "utils/ft_print_char.c"
#include "utils/ft_print_string.c"
#include "utils/ft_print_pointer.c"
#include "utils/ft_print_number.c"
#include "utils/ft_print_unsigned.c"
#include "utils/ft_print_hexadecimal.c"
#include "utils/ft_get_count_of_division.c"
#include "libft/ft_strdup.c"
#include "libft/ft_putchar_fd.c"
#include "libft/ft_putnbr_fd.c"
#include "libft/ft_strlen.c"
#include "libft/ft_putstr_fd.c"


void	test_c(void)
{
	int x, y;
	x = 0;
	y = 0;
	printf("\n----------- TEST: %%c -----------\n\n");
	printf("Testing: (\"\\tThe character %%c is visible.\\n\", 'x')\n");
	x += printf("  Or\t:\tThe character %c is visible.\n", 'x');
	y += ft_printf("  Ft\t:\tThe character %c is visible.\n", 'x');
	printf("Printf = %d, ft_printf = %d\n\n", x, y);
}

void	test_simple(void)
{
	int	x;
	int	y;

	x = 0;
	y = 0;
	printf("\n----------- TEST: simple string -----------\n\n");
	printf("Testing: (\"\\tHello!\\n\")\n");
	x += printf("  Or\t:\tHello!\n");
	y += ft_printf("  Ft\t:\tHello!\n");
	printf("Printf = %d, ft_printf = %d\n\n", x, y);
	x = 0;
	y = 0;
	printf("Testing: (\"\\t0\\n\")\n");
	x += printf("  Or\t:\t0\n");
	y += ft_printf("  Ft\t:\t0\n");
	printf("Printf = %d, ft_printf = %d\n\n", x, y);
	x = 0;
	y = 0;
	printf("Testing: (\"\\t""\\n\")\n");
	x += printf("  Or\t:\t""\n");
	y += ft_printf("  Ft\t:\t""\n");
	printf("Printf = %d, ft_printf = %d\n\n", x, y);
	x = 0;
	y = 0;
	printf("Testing: (\"\\tNULL\\n\")\n");
	x += printf("  Or\t:\tNULL\n");
	y += ft_printf("  Ft\t:\tNULL\n");
	printf("Printf = %d, ft_printf = %d\n\n", x, y);
}

void	test_s(void)
{
	int	x;
	int	y;

	x = 0;
	y = 0;
	printf("\n----------- TEST: %%s -----------\n\n");
	printf("Testing: (\"\\t%%s\\n\", \"How are you\")\n");
	x += printf("  Or\t:\t%s\n", "How are you");
	y += ft_printf("  Ft\t:\t%s\n", "How are you");
	printf("Printf = %d, ft_printf = %d\n\n", x, y);
	x = 0;
	y = 0;
	printf("Testing: (\"\\tThe string \\\"%%s\\\" is visible.\\n\", \"TRALALA\")\n");
	x += printf("  Or\t:\tThe string \"%s\" is visible.\n", "TRALALA");
	y += ft_printf("  Ft\t:\tThe string \"%s\" is visible.\n", "TRALALA");
	printf("Printf = %d, ft_printf = %d\n\n", x, y);
	x = 0;
	y = 0;
	char *s = NULL;
	// if (s == NULL)
	// 	write(1, "(null)\n", 7);
	printf("Testing: (\"\\tNULL %%s NULL.\\n\", NULL)\n");
	x += printf("  Or\t:\tNULL %s NULL.\n", s);
	y += ft_printf("  Ft\t:\tNULL %s NULL.\n", s);
	printf("Printf = %d, ft_printf = %d\n\n", x, y);
	x = 0;
	y = 0;
	printf("Testing: (\"\\t\\\"%%s\\\"\\n\", \"\")\n");
	x += printf("  Or\t:\t\"%s\"\n", "");
	y += ft_printf("  Ft\t:\t\"%s\"\n", "");
	printf("Printf = %d, ft_printf = %d\n\n", x, y);
}

void	test_percent(void)
{
	int	x;
	int	y;

	x = 0;
	y = 0;
	printf("\n----------- TEST: percent -----------\n\n");
	printf("Testing: (\"\\t%%%%\\n\")\n");
	x += printf("  Or\t:\t%%\n");
	y += ft_printf("  Ft\t:\t%%\n");
	printf("Printf = %d, ft_printf = %d\n\n", x, y);
}

void	test_d(void)
{
	int	x;
	int	y;

	x = 0;
	y = 0;
	printf("\n----------- TEST: d -----------\n\n");
	printf("Testing: (\"\\t%%d\\n\", 5589)\n");
	x += printf("  Or\t:\t%d\n", 5589);
	y += ft_printf("  Ft\t:\t%d\n", 5589);
	printf("Printf = %d, ft_printf = %d\n\n", x, y);
	x = 0;
	y = 0;
	printf("Testing: (\"\\t%%d\\n\", INT_MAX)\n");
	x += printf("  Or\t:\t%d\n", INT_MAX);
	y += ft_printf("  Ft\t:\t%d\n", INT_MAX);
	printf("Printf = %d, ft_printf = %d\n\n", x, y);
	x = 0;
	y = 0;
	printf("Testing: (\"\\t%%d\\n\", INT_MIN)\n");
	x += printf("  Or\t:\t%d\n", INT_MIN);
	y += ft_printf("  Ft\t:\t%d\n", INT_MIN);
	printf("Printf = %d, ft_printf = %d\n\n", x, y);
	x = 0;
	y = 0;
	printf("Testing: (\"\\t%%d\\n\", 0)\n");
	x += printf("  Or\t:\t%d\n", 0);
	y += ft_printf("  Ft\t:\t%d\n", 0);
	printf("Printf = %d, ft_printf = %d\n\n", x, y);
}

void	test_i(void)
{
	int	x;
	int	y;

	x = 0;
	y = 0;
	printf("\n----------- TEST: i -----------\n\n");
	printf("Testing: (\"\\t%%i\\n\", 5589)\n");
	x += printf("  Or\t:\t%i\n", 5589);
	y += ft_printf("  Ft\t:\t%i\n", 5589);
	printf("Printf = %d, ft_printf = %d\n\n", x, y);
	x = 0;
	y = 0;
	printf("Testing: (\"\\t%%i\\n\", INT_MAX)\n");
	x += printf("  Or\t:\t%i\n", INT_MAX);
	y += ft_printf("  Ft\t:\t%i\n", INT_MAX);
	printf("Printf = %d, ft_printf = %d\n\n", x, y);
	x = 0;
	y = 0;
	printf("Testing: (\"\\t%%i\\n\", INT_MIN)\n");
	x += printf("  Or\t:\t%i\n", INT_MIN);
	y += ft_printf("  Ft\t:\t%i\n", INT_MIN);
	printf("Printf = %d, ft_printf = %d\n\n", x, y);
	x = 0;
	y = 0;
	printf("Testing: (\"\\t%%i\\n\", INT_MIN + INT_MAX)\n");
	x += printf("  Or\t:\t%i\n", INT_MIN + INT_MAX);
	y += ft_printf("  Ft\t:\t%i\n", INT_MIN + INT_MAX);
	printf("Printf = %d, ft_printf = %d\n\n", x, y);
}

void	test_u(void)
{
	int	x;
	int	y;

	x = 0;
	y = 0;
	printf("\n----------- TEST: u -----------\n\n");
	printf("Testing: (\"\\t%%u\\n\", 5589)\n");
	x += printf("  Or\t:\t%u\n", 5589);
	y += ft_printf("  Ft\t:\t%u\n", 5589);
	printf("Printf = %d, ft_printf = %d\n\n", x, y);
	x = 0;
	y = 0;
	printf("Testing: (\"\\t%%u\\n\", INT_MAX)\n");
	x += printf("  Or\t:\t%u\n", INT_MAX);
	y += ft_printf("  Ft\t:\t%u\n", INT_MAX);
	printf("Printf = %d, ft_printf = %d\n\n", x, y);
	x = 0;
	y = 0;
	printf("Testing: (\"\\t%%u\\n\", INT_MIN)\n");
	x += printf("  Or\t:\t%u\n", INT_MIN);
	y += ft_printf("  Ft\t:\t%u\n", INT_MIN);
	printf("Printf = %d, ft_printf = %d\n\n", x, y);
	x = 0;
	y = 0;
	printf("Testing: (\"\\t%%u\\n\", -42)\n");
	x += printf("  Or\t:\t%u\n", -42);
	y += ft_printf("  Ft\t:\t%u\n", -42);
	printf("Printf = %d, ft_printf = %d\n\n", x, y);
	x = 0;
	y = 0;
	printf("Testing: (\"\\t%%u\\n\", UINT_MAX)\n");
	x += printf("  Or\t:\t%u\n", UINT_MAX);
	y += ft_printf("  Ft\t:\t%u\n", UINT_MAX);
	printf("Printf = %d, ft_printf = %d\n\n", x, y);
}
void	test_x(void)
{
	int x, y;
	x = 0;
	y = 0;
	printf("\n----------- TEST: %%x -----------\n\n");
	printf("Testing: (\"\\t%%x\\n\", 42)\n");
	x += printf("  Or\t:\t%x\n", 42);
	y += ft_printf("  Ft\t:\t%x\n", 42);
	printf("Printf = %d, ft_printf = %d\n\n", x, y);
	x = 0;
	y = 0;
	printf("Testing: (\"\\tThe hex number %%x is visible.\\n\", 934)\n");
	x += printf("  Or\t:\tThe hex number %x is visible.\n", 934);
	y += ft_printf("  Ft\t:\tThe hex number %x is visible.\n", 934);
	printf("Printf = %d, ft_printf = %d\n\n", x, y);
	x = 0;
	y = 0;
	printf("Testing: (\"\\t%%x\\n\", INT_MAX)\n");
	x += printf("  Or\t:\t%x\n", INT_MAX);
	y += ft_printf("  Ft\t:\t%x\n", INT_MAX);
	printf("Printf = %d, ft_printf = %d\n\n", x, y);
	x = 0;
	y = 0;
	printf("Testing: (\"\\t%%x\\n\", INT_MIN)\n");
	x += printf("  Or\t:\t%x\n", INT_MIN);
	y += ft_printf("  Ft\t:\t%x\n", INT_MIN);
	printf("Printf = %d, ft_printf = %d\n\n", x, y);
	x = 0;
	y = 0;
	printf("Testing: (\"\\t%%x\\n\", -42)\n");
	x += printf("  Or\t:\t%x\n", -42);
	y += ft_printf("  Ft\t:\t%x\n", -42);
	printf("Printf = %d, ft_printf = %d\n\n", x, y);
	x = 0;
	y = 0;
	printf("Testing: (\"\\t%%x\\n\", UINT_MAX)\n");
	x += printf("  Or\t:\t%x\n", UINT_MAX);
	y += ft_printf("  Ft\t:\t%x\n", UINT_MAX);
	printf("Printf = %d, ft_printf = %d\n\n", x, y);
}

void	test_X(void)
{
	int x, y;
	x = 0;
	y = 0;
	printf("\n----------- TEST: %%X -----------\n\n");
	printf("Testing: (\"\\t%%X\\n\", 42)\n");
	x += printf("  Or\t:\t%X\n", 42);
	y += ft_printf("  Ft\t:\t%X\n", 42);
	printf("Printf = %d, ft_printf = %d\n\n", x, y);
	x = 0;
	y = 0;
	printf("Testing: (\"\\tThe hex number %%X is visible.\\n\", 934)\n");
	x += printf("  Or\t:\tThe hex number %X is visible.\n", 934);
	y += ft_printf("  Ft\t:\tThe hex number %X is visible.\n", 934);
	printf("Printf = %d, ft_printf = %d\n\n", x, y);
	x = 0;
	y = 0;
	printf("Testing: (\"\\t%%X\\n\", INT_MAX)\n");
	x += printf("  Or\t:\t%X\n", INT_MAX);
	y += ft_printf("  Ft\t:\t%X\n", INT_MAX);
	printf("Printf = %d, ft_printf = %d\n\n", x, y);
	x = 0;
	y = 0;
	printf("Testing: (\"\\t%%X\\n\", INT_MIN)\n");
	x += printf("  Or\t:\t%X\n", INT_MIN);
	y += ft_printf("  Ft\t:\t%X\n", INT_MIN);
	printf("Printf = %d, ft_printf = %d\n\n", x, y);
	x = 0;
	y = 0;
	printf("Testing: (\"\\t%%X\\n\", -42)\n");
	x += printf("  Or\t:\t%X\n", -42);
	y += ft_printf("  Ft\t:\t%X\n", -42);
	printf("Printf = %d, ft_printf = %d\n\n", x, y);
	x = 0;
	y = 0;
	printf("Testing: (\"\\t%%X\\n\", UINT_MAX)\n");
	x += printf("  Or\t:\t%X\n", UINT_MAX);
	y += ft_printf("  Ft\t:\t%X\n", UINT_MAX);
	printf("Printf = %d, ft_printf = %d\n\n", x, y);
}

void	test_p(void)
{
	int		n;
	char	c;
	void	*p;

	int x, y;
	printf("\n----------- TEST: %%p -----------\n\n");
	x = 0;
	y = 0;
	n = 50;
	c = 'a';
	p = NULL;
	printf("Testing: (\"\\t%%p\\n\", (void *)&n)\n");
	x += printf("  Or\t:\t%p\n", (void *)&n);
	y += ft_printf("  Ft\t:\t%p\n", (void *)&n);
	printf("Printf = %d, ft_printf = %d\n\n", x, y);
	x = 0;
	y = 0;
	printf("Testing: (\"\\t%%p\\n\", (void *)&c)\n");
	x += printf("  Or\t:\t%p\n", (void *)&c);
	y += ft_printf("  Ft\t:\t%p\n", (void *)&c);
	printf("Printf = %d, ft_printf = %d\n\n", x, y);
	x = 0;
	y = 0;
	printf("Testing: (\"\\t%%p\\n\", p)\n");
	x += printf("  Or\t:\t%p\n", p);
	y += ft_printf("  Ft\t:\t%p\n", p);
	printf("Printf = %d, ft_printf = %d\n\n", x, y);
}

void	test_all(void)
{
	int	x, y;
	x = 0;
	y = 0;
	printf("\n----------- TEST: ALL -----------\n\n");
	printf("Testing: (\"\\tThe int is %%i or %%d, the char is %%c, the string is \\\"%%s\\\", the hex is %%x or %%X, the unsigned is %%u and the percent is %%%%.\\n\", 42, -42, 's', \"Hello\", 42, 42, 242)\n");
	x += printf("  Or\t:\tThe int is %i or %d, the char is %c, the string is \"%s\", the hex is %x or %X, the unsigned is %u and the percent is %%.\n", 42, -42, 's', "Hello", 42, 42, 242);
	y += ft_printf("  Or\t:\tThe int is %i or %d, the char is %c, the string is \"%s\", the hex is %x or %X, the unsigned is %u and the percent is %%.\n", 42, -42, 's', "Hello", 42, 42, 242);
	printf("Printf = %d, ft_printf = %d\n\n", x, y);
}

int	main(void)
{
	test_c();
	// test_s();
	// test_simple();
	// test_percent();
	// test_d();
	// test_i();
	// test_u();
	// test_x();
	// test_X();
	// test_p();
	// test_all();
	return (0);
}
// make fclean && make && gcc test.c -L. -lftprintf -o main && ./main