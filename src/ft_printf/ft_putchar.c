/* ************************************************************************** */
/*                                                                            */
/*                                                     ██   ██ ██████         */
/*   ft_putchar.c                                         ██   ██      ██        */
/*                                                     ███████  █████         */
/*   By: maroy <maroy@student.42.qc>                        ██ ██             */
/*                                                          ██ ███████.qc     */
/*   Created: 2023/10/05 13:00:32 by maroy                                    */
/*   Updated: 2023/10/05 13:19:26 by maroy            >(.)__ <(.)__ =(.)__    */
/*                                                     (___/  (___/  (___/    */
/* ************************************************************************** */

#ifdef __linux__

void	ft_putchar(char c)
{
	asm volatile(
		"mov $4, %%eax \n"
		"mov $1, %%ebx \n"
		"movzx %0, %%ecx \n"
		"mov $1, %%edx \n"
		"int $0x80 \n"
		:
		: "r"(c)
		: "%eax", "%ebx", "%ecx", "%edx");
}
#endif

#ifdef __APPLE__

void	ft_fputchar(int c, int fd)
{
	unsigned long long	args[4];
	unsigned long long 	syscall_number;
	unsigned long long 	file_descriptor;

	syscall_number = 0x2000004;
	file_descriptor = fd;
	args[0] = file_descriptor;
	args[1] = (unsigned long long)&c;
	args[2] = 1;

	asm volatile (
			"movq %0, %%rax\n" // syscall number
			"movq %1, %%rdi\n" // file descriptor
			"movq %2, %%rsi\n" // pointer to the character
			"movq %3, %%rdx\n" // number of bytes to write
			"syscall\n"
			:
			:"g"(syscall_number), "g"(args[0]), "g"(args[1]), "g"(args[2])
			: "rax", "rdi", "rsi", "rdx");
}

void	ft_putchar(char c)
{
	ft_fputchar(c, 1);
}

#endif