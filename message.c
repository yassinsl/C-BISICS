#include "ft_printf.h"
#include <assert.h>
#include <limits.h>
#include <string.h>
#include <stdio.h>
#define YELLOW "\e[33;1m"
#define RED "\e[31;1m"
#define RESET "\x1b[0m"
#define GREEN "\e[32m"
#define CHECK "✔"
#define Test(fmt, ...)	do {\
	printf("---------------------- %s ----------------------\n", fmt);\
	write(1, "Expected -> ", 12);\
	write(1, "[", 1);\
	int r0 = printf(fmt, __VA_ARGS__);\
	fflush(stdout);\
	write(1, "]", 1);\
	write(1, "\nFound    -> ", 14);\
	write(0, "[", 1);\
	int r1 = ft_printf(fmt, __VA_ARGS__);\
	write(1, "]", 1);\
	printf("\n");\
	printf("\n[%i] O: %i ft: %i\n", index++, r0, r1);\
	if (r0 != r1){\
		fprintf(stderr, "%s[ERROR]%s in format: %s\n", RED, RESET, fmt);\
		error++;\
	}\
	else {\
		fprintf(stderr, "%s[PASSED]%s case: %s %s%s%s\n", GREEN, RESET, fmt, GREEN, CHECK, RESET);\
		passed++;\
	}\
} while (0);


int	run(void);
int	run_tests(void);
int	main(int ac, char **av)
{
	char	*mode;

	if (ac < 2)
	{
		fprintf(stderr, "ERROR: No arg was provided for the cli\n");
		fprintf(stderr, "Usage: %s <Mode>\n", *av);
		fprintf(stderr, "Mode: run | test\n");
		return (1);
	}
	mode = av[1];
	if (strcmp(mode, "test") == 0)
		return (run_tests());
	else if (strcmp(mode, "run") == 0)
		return (run());
	else
	{
		fprintf(stderr, "ERROR: Invalid Mode\n");
		fprintf(stderr, "Usage: %s <Mode>\n", *av);
		fprintf(stderr, "Mode: run | test\n");
		return (1);
	}
	return (0);
}

int	run(void)
{
	ft_printf(NULL);
	return (0);
}
int	run_tests(void)
{
	int		index = 0, passed = 0, error = 0;
	char	*s_hidden;
	char	*f;
	int		r0;
	int		r1;

	{
		// %i
		// %d
		Test(" %04d ", 9);
		Test(" %03d ", 15);
		Test(" %04d ", 16);
		Test(" %05d ", 17);
		Test(" %04d ", -14);
		Test(" %05d ", -15);
		Test(" %06d ", -16);
		Test(" %011d ", LONG_MAX);
		Test(" %012d ", LONG_MIN);
		Test(" %013d ", UINT_MAX);
		Test(" %014d ", ULONG_MAX);
		Test(" %015d ", 9223372036854775807LL);
		Test(" %09d %010d %011d %012d %013d %014d %015d", INT_MAX, INT_MIN, LONG_MAX, LONG_MIN, ULONG_MAX, -42);
		Test(" %03i ", 1);
		Test(" %04i ", 9);
		Test(" %03i ", 15);
		Test(" %04i ", 16);
		Test(" %05i ", 17);
		Test(" %05i ", -15);
		Test(" %-4d ", -14);
		Test(" %-5d ", -15);
		Test(" %-6d ", -16);
		Test(" %-11d ", LONG_MAX);
		Test(" %-13d ", UINT_MAX);
		Test(" %-14d ", ULONG_MAX);
		Test(" %-15d ", 9223372036854775807LL);
		Test(" %-9d %-10d %-11d %-12d %-13d %-14d %-15d", INT_MAX, INT_MIN, LONG_MAX, LONG_MIN, ULONG_MAX, 0, -42);
		Test(" %-5i ", -15);
		Test(" %-6i ", -16);
		Test(" %04d ", 9);
		Test(" %03d ", 15);
		Test(" %04d ", 16);
		Test(" %05d ", 17);
		Test(" %04d ", -14);
		Test(" %05d ", -15);
		Test(" %06d ", -16);
		Test(" %011d ", LONG_MAX);
		Test(" %012d ", LONG_MIN);
		Test(" %013d ", UINT_MAX);
		Test(" %014d ", ULONG_MAX);
		Test(" %015d ", 9223372036854775807LL);
		Test(" %09d %010d %011d %012d %013d %014d %015d", INT_MAX, INT_MIN, LONG_MAX, LONG_MIN, ULONG_MAX, 0, -42);
		Test(" %03i ", 1);
		Test(" %04i ", 9);
		Test(" %03i ", 15);
		Test(" %04i ", 16);
		Test(" %05i ", 17);
		Test(" %05i ", -15);
		Test("%.2d ", -1);
		Test("%.2d ", 1);
		Test("%.1d ", 9);
		Test("%.2d ", 10);
		Test("%.3d ", 11);
		Test("%.4d ", 15);
		Test("%.5d ", 16);
		Test("%.6d ", 17);
		Test("%.1d ", 99);
		Test(" %.2d ", -1);
		Test(" %.3d ", -11);
		Test(" %.4d ", -14);
		Test(" %.3d ", -99);
		Test(" %.4d ", -101);
		Test(" %.10d ", LONG_MAX);
		Test(" %.12d ", UINT_MAX);
		Test(" %.13d ", ULONG_MAX);
		Test(" %.14d ", 9223372036854775807LL);
		Test(" %.8d %.9d %.10d %.11d %.12d %.13d %.14d", INT_MAX, INT_MIN, LONG_MAX, LONG_MIN, ULONG_MAX, 0, -42);
		Test(" %.2i ", -1);
		Test(" %.3i ", -11);
		Test(" %.4i ", -14);
		Test(" %.3i ", -99);
		Test(" %.4i ", -101);
		Test(" %.10i ", LONG_MAX);
		Test(" %.12i ", UINT_MAX);
		Test(" %.13i ", ULONG_MAX);
		Test(" %.14i ", 9223372036854775807LL);
		Test(" % d ", 0);
		Test(" % d ", 1);
		Test(" % d ", 9);
		Test(" % d ", 10);
		Test(" % d ", 11);
		Test(" % d ", 15);
		Test(" % d ", 16);
		Test(" % d ", 17);
		Test(" % d ", 99);
		Test(" % d ", 100);
		Test(" % d ", 101);
		Test(" % d ", INT_MAX);
		Test(" % d ", LONG_MIN);
		Test(" % d % d % d % d % d % d % d", INT_MAX, INT_MIN, LONG_MAX, LONG_MIN, ULONG_MAX, 0, -42);
		Test(" % i ", 0);
		Test(" % i ", 1);
		Test(" % i ", 9);
		Test(" % i ", 10);
		Test(" % i ", 11);
		Test("%8.5i", 34);
		Test("%10.5i", -216);
		Test("%8.5i", 0);
		Test("%8.3i", 8375);
		Test("%8.3i", -8473);
		Test("%-8.5i", 34);
		Test("%-10.5i", -216);
		Test("%-8.5i", 0);
		Test("%-8.3i", -8473);
		Test("%08.5i", 34);
		Test("%010.5i", -216);
		Test("%08.5i", 0);
		Test("%08.3i", 8375);
		Test("%08.3i", -8473);
		Test("%.0i", 0);
		Test("%.i", 0);
		Test("%5.0i", 1);
		Test("%5.i", 0);
		Test("%-5.0i", 0);
		Test("%-5.i", 0);
		Test(" %04d ", -14);
		Test(" %05d ", -15);
		Test(" %06d ", -16);
		Test(" %011d ", LONG_MAX);
		Test(" %013d ", UINT_MAX);
		Test(" %014d ", ULONG_MAX);
		Test(" %015d ", 9223372036854775807LL);
		Test(" %09d %010d %011d %012d %013d %014d %015d", INT_MAX, INT_MIN, LONG_MAX, LONG_MIN, ULONG_MAX, 0, -42);
		Test(" %05i ", -15);
		Test(" %06i ", -16);
		Test(" %01i ", -99);
		Test(" %012i ", LONG_MIN);
		Test(" %014i ", ULONG_MAX);
		Test(" %015i ", 9223372036854775807LL);
		Test(" %09i %010i %011i %012i %013i %014i %015i", INT_MAX, INT_MIN, LONG_MAX, LONG_MIN, ULONG_MAX, 0, -42);
		Test(" %+d ", 0);
		Test(" %+d ", 9);
		Test(" %+d ", 10);
		Test(" %+d ", 11);
		Test(" %+d ", 15);
		Test(" %+d ", 16);
		Test(" %+d ", 17);
		Test(" %+d ", 99);
		Test(" %+d ", 100);
		Test(" %+d ", 101);
		Test(" %+d ", INT_MAX);
		Test(" %+d ", LONG_MIN);
		Test(" %+d %+d %+d %+d %+d %+d %+d", INT_MAX, INT_MIN, LONG_MAX, LONG_MIN, ULONG_MAX, 0, -42);
		Test(" %+i ", 0);
		Test(" %+i ", 1);
		Test(" %+i ", 9);
		Test(" %+i ", 10);
		Test(" %+i ", 11);
		Test(" %+i ", 15);
		Test("%+48.27d", -61180352);
		Test("\\!/%+8d\\!/", 0);
		Test("42%+60d42", 2034180068);
		Test("\\!/%+11d\\!/", 1884143904);
		Test("\\!/% -12.8d\\!/", 0);
		Test("\\!/% -38.2d\\!/", 463383700);
		Test("\\!/%+-55.33d\\!/", 0);
		Test("^.^/%+-24.2d^.^/", 0);
		Test("\\!/%+-34.8d\\!/", 0);
	}
	{
		// %x
		// %X
		Test(" %x\n", LONG_MAX);
		Test(" %x\n", ULONG_MAX);
		Test(" %x\n", 9223372036854775807LL);
		Test(" %x\n", INT_MAX);
		Test(" %x\n", INT_MIN);
		Test(" %-1x ", 0);
		Test(" %-4x ", 9);
		Test(" %-1x ", 10);
		Test(" %-3x ", 15);
		Test(" %-4x ", 16);
		Test(" %-5x ", 17);
		Test(" %-1x ", 99);
		Test(" %-1x ", -9);
		Test(" %-10x ", INT_MIN);
		Test(" %-11x ", LONG_MAX);
		Test(" %-12x ", LONG_MIN);
		Test(" %-13x ", UINT_MAX);
		Test(" %-14x ", ULONG_MAX);
		Test(" %-15x ", 9223372036854775807LL);
		Test(" %-9x %-10x %-11x %-12x %-13x %-14x %-15x", INT_MAX, INT_MIN, LONG_MAX, LONG_MIN, ULONG_MAX, 0, -42);
		Test(" %X ", LONG_MAX);
		Test(" %X ", LONG_MIN);
		Test(" %X ", ULONG_MAX);
		Test(" %X ", 9223372036854775807LL);
		Test("%8.5x", 34);
		Test("%8.5x", 0);
		Test("%-8.5x", 34);
		Test("%-8.5x", 0);
		Test("%08.5x", 34);
		Test("%08.5x", 0);
		Test("%5.0x", 0);
		Test("%5.x", 0);
		Test("%-5.0x", 0);
		Test("%-5.x", 0);
		Test("%8.5x", 34);
		Test("%8.5x", 0);
		Test("%-8.5x", 34);
		Test("%-8.5x", 0);
		Test("%08.5x", 34);
		Test("%08.5x", 0);
		Test("%5.0x", 0);
		Test("%5.x", 0);
		Test("%-5.0x", 0);
		Test("%-5.x", 0);
		Test(" %X %X %X %X %X %X %X", INT_MAX, INT_MIN, LONG_MAX, LONG_MIN, ULONG_MAX, 0, -42);
	}
	{
		// %s
		Test("%.s", "");
		Test("%.1s", "");
		Test("%.1s ", "");
		Test("%.s ", "");
		Test("%.s ", "-");
		Test("%.2s %.1s ", "", "-");
		Test("%.3s %.2s ", " - ", "");
		Test("%.1s %.2s %.3s %.4s ", " - ", "", "4", "");
		Test("%.2s %.3s %.4s %.5s %.1s ", " - ", "", "4", "", "2 ");
		Test("%.1d ", 0);
		Test("%.1s ", NULL);
		Test("%s ", NULL);
		s_hidden = "Hidden String, haha!";
		Test("%.c", 'a');
		Test("%6.5s", "yolo");
		Test("%7.5s", "bombastic");
		Test("%7.7s%7.7s", "hello", "world");
		Test("%3.7s%7.7s", "hello", "world");
		Test("%7.7s%3.7s", "hello", "world");
		Test("%3.7s%3.7s", "hello", "world");
		Test("%7.3s%7.7s", "hello", "world");
		Test("%3.3s%7.7s", "hello", "world");
		Test("%7.3s%3.7s", "hello", "world");
		Test("%3.3s%3.7s", "hello", "world");
		Test("%7.7s%7.3s", "hello", "world");
		Test("%3.7s%7.3s", "hello", "world");
		Test("%7.7s%3.3s", "hello", "world");
		Test("%3.7s%3.3s", "hello", "world");
		Test("%7.3s%7.3s", "hello", "world");
		Test("%3.3s%7.3s", "hello", "world");
		Test("%7.3s%3.3s", "hello", "world");
		Test("%3.3s%3.3s", "hello", "world");
		Test("%3.s", s_hidden);
	}
	{
		// %u
		Test(" %u\n", LONG_MAX);
		Test(" %u\n", ULONG_MAX);
		Test(" %u\n", ULONG_MAX);
		Test(" %u\n", 9223372036854775807LL);
		Test(" %u\n", INT_MAX);
		Test(" %u\n", INT_MAX);
		Test(" %u\n", INT_MIN);
		Test(" %-12u ", LONG_MIN);
		Test(" %-13u ", UINT_MAX);
		Test(" %-15u ", 9223372036854775807LL);
		Test(" %-9u %-10u %-11u %-12u %-13u %-14u %-15u", INT_MAX, INT_MIN, LONG_MAX, LONG_MIN, ULONG_MAX, 0, -42);
		Test(" %01u ", 0);
	}
	{
		// %p
		Test(" %1p ", -1);
		Test(" %-2p ", 1);
		Test(" %-2p ", 15);
		Test(" %-3p ", 16);
		Test(" %-4p ", 17);
		Test(" %-11p %-12p ", INT_MIN, INT_MAX);
		Test(" %-13p %-14p ", ULONG_MAX, -ULONG_MAX);
		Test(" %-1p %-2p ", 0, 0);
	}
	{
		Test(" %p ", -1);
		Test(" %p ", 15);
		Test(" %p %p ", LONG_MIN, LONG_MAX);
		Test(" %p %p ", INT_MIN, INT_MAX);
		Test(" %p %p ", ULONG_MAX, -ULONG_MAX);
		Test(" %x ", -1);
		Test(" %x ", 10);
		Test(" %x ", 11);
		Test(" %x ", 15);
		Test(" %x ", -9);
		Test(" %x ", -10);
		Test(" %x ", -11);
		Test(" %x ", -14);
		Test(" %x ", -15);
		Test(" %x ", -16);
		Test(" %x ", -99);
		Test(" %x ", -100);
	}
	{
		// Other
		Test("42% 12.8d42", 0);
		Test("^.^/%+44.16d^.^/", 0);
		Test("!%+29.57d!", 839186175);
		Test("32 This is an int : %0d\n\n", 0);
		Test("%102p", (void *)9473888934885903032lu);
		Test("%--190c", 9);
		Test("%--8.179X", 505873219u);
		Test("%91p", (void *)13930816918730035186lu);
		Test("%91p%--8.179X%--190c", (void *)13930816918730035186lu, 505873219u, 9);
		Test("%-186.138i%85p%-113c%--87p", -1320475933, (void *)11899625258064503923lu, -39, (void *)15206197846470084523lu);
		Test("%100d, %100d, %100d, %100d, %100d, %100d, %100d, %100d", 0, 5, -1, -10, 100, -1862, INT_MIN, INT_MAX);
	}
	{
		// Other+
		Test(" %04u ", 9);
		Test(" %01u ", 10);
		Test(" %04u ", 16);
		Test(" %05u ", 17);
		Test(" %01u ", 99);
		Test(" %012u ", LONG_MIN);
		Test(" %013u ", UINT_MAX);
		Test(" %014u ", ULONG_MAX);
		Test(" %015u ", 9223372036854775807LL);
		Test(" %09u %010u %011u %012u %013u %014u %015u", INT_MAX, INT_MIN, LONG_MAX, LONG_MIN, ULONG_MAX, 0, -42);
		Test(" %01x ", 0);
		Test(" %04x ", 9);
		Test(" %01x ", 10);
		Test(" %03x ", 15);
		Test(" %04x ", 16);
		Test(" %05x ", 17);
		Test(" %01x ", 99);
		Test(" %01x ", -9);
		Test(" %010x ", INT_MIN);
	}
	{
		Test(" %#x ", 0);
		Test(" %#x ", LONG_MIN);
		Test(" %#x %#x %#x %#x %#x %#x %#x", INT_MAX, INT_MIN, LONG_MAX, LONG_MIN, ULONG_MAX, 0, -42);
		Test(" %#X ", 0);
		Test(" %#X ", LONG_MIN);
		Test(" %#X %#X %#X %#X %#X %#X %#X", INT_MAX, INT_MIN, LONG_MAX, LONG_MIN, ULONG_MAX, 0, -42);
		Test("\\!/%- 18.2d\\!/", 0);
		Test(">------------<%#16.41x>------------<", -1661147392);
		Test("%.0u", 0);
		Test("%.u", 0);
		Test("%5.0u", 0);
		Test("%5.u", 0);
		Test("%-5.0u", 0);
		Test("%-5.u", 0);
		Test("%.0x", 0);
		Test("%.x", 0);
		Test("%5.0x", 0);
		Test("%5.x", 0);
		Test("%-5.0x", 0);
		Test("%-5.x", 0);
		Test("%.0x", 0);
		Test("%.x", 0);
		Test("%5.0x", 0);
		Test("%5.x", 0);
		Test("%-5.0x", 0);
		Test("%4%", 0);
		Test("%-5%", 0);
		Test("%-05%", 0);
	}
	{
		Test(" %.1u ", 0);
		Test(" %.1x ", 0);
		Test(" %.1X ", 0);
		Test("!%#19.2x!", -130563600);
	}
	{
		Test("%-#9.2x", 144862103);
		Test("%-#10.2x", 144862103);
		Test("\\!/%0#54x\\!/", -2022925744);
		Test("!%-#57.10x!", -677125575);
		Test("!%#38.32x!", -1788945620);
	}
	{
		Test(">------------<%#45.12x>------------<", 1383915264);
		Test("^.^/%-#54.50x^.^/", 2035129755);
	}
	// printf("var = %d\n", var);
	{
		Test("%1.c", 'a')
		Test("%5.c", 'a')
		Test("%-+1.d, %-+1.d, %-+1.d, %-+1.d, %-+1.d, %-+1.d, %-+1.d, %-+1.d", 0, 5, -1, -10, 100, -1862, INT_MIN, INT_MAX);
	}
	{
		Test("% #010x", 1000);
		Test("% +010x", 1000);
		Test("% +-010x", 1000);
		Test("% 010X", 1000);
		Test("% 010p", 1000);
		Test("% 0010p", 1000);
		Test("% 0010u", 1000);
		Test("% 0010x", 1000);
		Test("% +-0010x", 1000);
		Test("% +-0010d", 1000);
		Test("% +-0010i", 1000);
		Test("% +-0010.1i", 1000);
	}
	printf("REPORT:\n");
	printf("%-10s %-10s %-10s\n", "Total", "Passed", "Errors");
	printf("%s%-10i%s %s%-10i%s %s%-10i%s\n", YELLOW, index, RESET, GREEN, passed, RESET, RED, error, RESET);
	// index => 100%
	// passed =>> x 
	// x => (passed*100)/index
	float fs = (passed/index)*100;
	float fe = (error/index)*100;
	printf("SUCCESS RATE: %s%f%s%%\n", GREEN, fs, RESET);
	printf("FAILURE RATE: %s%f%s%%\n", RED, fe, RESET);
	return (0);
}
