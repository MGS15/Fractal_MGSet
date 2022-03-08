/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   types.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-kham <sel-kham@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/04 18:53:14 by sel-kham          #+#    #+#             */
/*   Updated: 2022/03/08 04:30:21 by sel-kham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TYPES_H
# define TYPES_H

# include "mlx.h"
# define WINDOW_WIDTH 1280
# define WINDOW_HEIGHT 720

typedef struct s_coor
{
	int	x;
	int	y;
}	t_coor;

typedef struct s_data
{
	void	*win_p;
	void	*mlx_p;
	void	*img_p;
}	t_data;

enum {
	ON_KEYDOWN = 2,
	ON_KEYUP = 3,
	ON_MOUSEDOWN = 4,
	ON_MOUSEUP = 5,
	ON_MOUSEMOVE = 6,
	ON_EXPOSE = 12,
	ON_DESTROY = 17
};

#endif