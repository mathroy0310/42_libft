/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_colors.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maroy <maroy@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/05 12:24:49 by maroy             #+#    #+#             */
/*   Updated: 2023/12/05 13:06:49 by maroy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_COLORS_H
# define FT_COLORS_H

/*
 * -- Color Codes for users --
 */

//Regular text
#define FT_BLK "\033[0;30m"
#define FT_RED "\033[0;31m"
#define FT_GRN "\033[0;32m"
#define FT_YEL "\033[0;33m"
#define FT_BLU "\033[0;34m"
#define FT_MAG "\033[0;35m"
#define FT_CYN "\033[0;36m"
#define FT_WHT "\033[0;37m"

//Regular bold text
#define FT_BBLK "\033[1;30m"
#define FT_BRED "\033[1;31m"
#define FT_BGRN "\033[1;32m"
#define FT_BYEL "\033[1;33m"
#define FT_BBLU "\033[1;34m"
#define FT_BMAG "\033[1;35m"
#define FT_BCYN "\033[1;36m"
#define FT_BWHT "\033[1;37m"

//Regular underline text
#define FT_UBLK "\033[4;30m"
#define FT_URED "\033[4;31m"
#define FT_UGRN "\033[4;32m"
#define FT_UYEL "\033[4;33m"
#define FT_UBLU "\033[4;34m"
#define FT_UMAG "\033[4;35m"
#define FT_UCYN "\033[4;36m"
#define FT_UWHT "\033[4;37m"

//Regular background
#define FT_BLKB "\033[40m"
#define FT_REDB "\033[41m"
#define FT_GRNB "\033[42m"
#define FT_YELB "\033[43m"
#define FT_BLUB "\033[44m"
#define FT_MAGB "\033[45m"
#define FT_CYNB "\033[46m"
#define FT_WHTB "\033[47m"

//High intensty background 
#define FT_BLKHB "\033[0;100m"
#define FT_REDHB "\033[0;101m"
#define FT_GRNHB "\033[0;102m"
#define FT_YELHB "\033[0;103m"
#define FT_BLUHB "\033[0;104m"
#define FT_MAGHB "\033[0;105m"
#define FT_CYNHB "\033[0;106m"
#define FT_WHTHB "\033[0;107m"

//High intensty text
#define FT_HBLK "\033[0;90m"
#define FT_HRED "\033[0;91m"
#define FT_HGRN "\033[0;92m"
#define FT_HYEL "\033[0;93m"
#define FT_HBLU "\033[0;94m"
#define FT_HMAG "\033[0;95m"
#define FT_HCYN "\033[0;96m"
#define FT_HWHT "\033[0;97m"

//Bold high intensity text
#define FT_BHBLK "\033[1;90m"
#define FT_BHRED "\033[1;91m"
#define FT_BHGRN "\033[1;92m"
#define FT_BHYEL "\033[1;93m"
#define FT_BHBLU "\033[1;94m"
#define FT_BHMAG "\033[1;95m"
#define FT_BHCYN "\033[1;96m"
#define FT_BHWHT "\033[1;97m"

//Reset
#define FT_reset "\033[0m"
#define FT_CRESET "\033[0m"
#define FT_COLOR_RESET "\033[0m"

#endif