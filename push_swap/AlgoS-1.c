/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AlgoS-1.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pabaille <pabaille@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/06 14:48:43 by pabaille          #+#    #+#             */
/*   Updated: 2026/11/06 16:15:55 by pabaille         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void ft_issort(int **T)
{
    int i;
    int issort;
    int stock;
    
    stock = 1;
    issort = 0;
    i = 0;
    while ((*T)[i + 1] != -1)
    {
        if ((*T)[i] < (*T)[i + 1])
            i += 1;
        else
            break ;
    }
    if (i == stock)
    issort = 1;
}

void ft_triselect(int **T)
{
    int i;
    int issort;
    int stock;

    i = 0;
    issort = 0;
    stock = 0;
    while (issort != 1)
    {
        while((*T)[i + 1] != -1)
        {        stock = 1;
        i = 0;
        while ((*T)[i + 1] != -1)
        {
            if ((*T)[i] < (*T)[i + 1])
                i += 1;
            else
                break ;
        }
        if (i == stock)
            issort = 1;
            if((*T)[i] < (*T)[i + 1])
                ra(T);
            i++;
        }
        ft_issort(T);
    }
}