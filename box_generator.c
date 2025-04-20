#include <ctype.h>
#include <stdio.h>

int	get_valid_char(void);
void	clear_input_buffer(void);
void	get_inputs(char input[7]);
void	print_box(int n, char input[7]);

int	main(void)
{
	int	n;
	char	input[7];

	//get size
	do {	
		printf("Enter size of box (at least 2): ");
		scanf("%d", &n);

		//validate size
		if (n < 2)
			puts("Box size should be at least 2.");
	} while (n < 2);

	clear_input_buffer();
	get_inputs(input);
	print_box(n, input);

	return (0);
}

void	clear_input_buffer(void)
{
	int	c;
	while ((c = getchar()) != '\n' && c != EOF);
}

int	get_valid_char(void)
{
	char	c, dummy;

	scanf("%c", &c);

	//check if extra characters exist in the input buffer
	if (getchar() != '\n')
	{
		while ((dummy = getchar()) != '\n' && dummy != EOF);
		return (0);
	}

	if (!isprint(c) && c != ' ')
		return (0);

	return (c);
}

void	get_inputs(char input[7])
{
	int	i, c;
	char	*labels[7] = {
		"Top-left corner",
		"Top-right corner",
		"Bottom-left corner",
		"Bottom-right corner",
		"Horizontal border",
		"Vertical border",
		"Filling"
	};

	i = 0;
	while (i < 7)
	{
		printf("Input for %s: ", labels[i]);
		c = get_valid_char();

		if (c == 0)
		{
			puts("Invalid input, please enter ONE printable character.");
			continue ;
		}
		
		input[i] = c;
		i++;
	}
}

void	print_box(int n, char input[7])
{
	int	x, y;

	for (x = 0; x < n; x++)
	{
		for(y = 0; y < n; y++)
		{
			if (x == 0 && y == 0)
				printf("%c ", input[0]);
			else if (x == 0 && y == n - 1)
				printf("%c ", input[1]);
			else if (x == n - 1 && y == 0)
				printf("%c ", input[2]);
			else if (x == n - 1 && y == n - 1)
				printf("%c ", input[3]);
			else if (x == 0 || x == n - 1)
				printf("%c ", input[4]);
			else if (y == 0 || y == n - 1)
				printf("%c ", input[5]);
			else
				printf("%c ", input[6]);
		}
		putchar('\n');
	}
}
