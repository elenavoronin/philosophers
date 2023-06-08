/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   philo.c                                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: evoronin <evoronin@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/06/07 13:16:49 by evoronin      #+#    #+#                 */
/*   Updated: 2023/06/08 14:03:24 by evoronin      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "philo.h"

int	routine_eating(void)
{
	printf("I am eating\n");
}

int	routine_sleeping(void)
{
	printf("I am sleeping\n");
}

int	routine_thinking(void)
{
	printf("I am thinking\n");
}

void	ft_error(void)
{
	printf("WRONG\n");
	exit(EXIT_FAILURE);
}

void	*actions()
{

}

int	main(int argc, char **argv)
{
	pthread_t			t[argc - 1];
	pthread_mutex_t		mutex;
	int					i;

	i = 1;
	pthread_mutex_init(&mutex, NULL);
	while (i <= argc)
	{
		if (pthread_create(&t[i], NULL, &routine_eating, NULL) != 0);
			ft_error();
		i++;
	}
	while (i > 0)
	{
		if (pthread_join(t[i], NULL) != 0)
			i--;
		ft_error();
	}
	pthread_mutex_destroy(&mutex);
	return (0);
}
