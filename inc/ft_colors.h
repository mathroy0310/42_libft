/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_colors.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maroy <maroy@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/05 12:24:49 by maroy             #+#    #+#             */
/*   Updated: 2023/12/05 13:34:11 by maroy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_COLORS_H
# define FT_COLORS_H

/*
 * -- Color Codes for users --
 */

//Regular text
#define FT_BLK "\001\033[0;30m\002"
#define FT_RED "\001\033[0;31m\002"
#define FT_GRN "\001\033[0;32m\002"
#define FT_YEL "\001\033[0;33m\002"
#define FT_BLU "\001\033[0;34m\002"
#define FT_MAG "\001\033[0;35m\002"
#define FT_CYN "\001\033[0;36m\002"
#define FT_WHT "\001\033[0;37m\002"

//Regular bold text
#define FT_BBLK "\001\033[1;30m\002"
#define FT_BRED "\001\033[1;31m\002"
#define FT_BGRN "\001\033[1;32m\002"
#define FT_BYEL "\001\033[1;33m\002"
#define FT_BBLU "\001\033[1;34m\002"
#define FT_BMAG "\001\033[1;35m\002"
#define FT_BCYN "\001\033[1;36m\002"
#define FT_BWHT "\001\033[1;37m\002"

//Regular underline text
#define FT_UBLK "\001\033[4;30m\002"
#define FT_URED "\001\033[4;31m\002"
#define FT_UGRN "\001\033[4;32m\002"
#define FT_UYEL "\001\033[4;33m\002"
#define FT_UBLU "\001\033[4;34m\002"
#define FT_UMAG "\001\033[4;35m\002"
#define FT_UCYN "\001\033[4;36m\002"
#define FT_UWHT "\001\033[4;37m\002"

//Regular background
#define FT_BLKB "\001\033[40m\002"
#define FT_REDB "\001\033[41m\002"
#define FT_GRNB "\001\033[42m\002"
#define FT_YELB "\001\033[43m\002"
#define FT_BLUB "\001\033[44m\002"
#define FT_MAGB "\001\033[45m\002"
#define FT_CYNB "\001\033[46m\002"
#define FT_WHTB "\001\033[47m\002"

//High intensty background 
#define FT_BLKHB "\001\033[0;100m\002"
#define FT_REDHB "\001\033[0;101m\002"
#define FT_GRNHB "\001\033[0;102m\002"
#define FT_YELHB "\001\033[0;103m\002"
#define FT_BLUHB "\001\033[0;104m\002"
#define FT_MAGHB "\001\033[0;105m\002"
#define FT_CYNHB "\001\033[0;106m\002"
#define FT_WHTHB "\001\033[0;107m\002"

//High intensty text
#define FT_HBLK "\001\033[0;90m\002"
#define FT_HRED "\001\033[0;91m\002"
#define FT_HGRN "\001\033[0;92m\002"
#define FT_HYEL "\001\033[0;93m\002"
#define FT_HBLU "\001\033[0;94m\002"
#define FT_HMAG "\001\033[0;95m\002"
#define FT_HCYN "\001\033[0;96m\002"
#define FT_HWHT "\001\033[0;97m\002"

//Bold high intensity text
#define FT_BHBLK "\001\033[1;90m\002"
#define FT_BHRED "\001\033[1;91m\002"
#define FT_BHGRN "\001\033[1;92m\002"
#define FT_BHYEL "\001\033[1;93m\002"
#define FT_BHBLU "\001\033[1;94m\002"
#define FT_BHMAG "\001\033[1;95m\002"
#define FT_BHCYN "\001\033[1;96m\002"
#define FT_BHWHT "\001\033[1;97m\002"

//Reset
#define FT_reset "\001\033[0m\002"
#define FT_CRESET "\001\033[0m\002"
#define FT_COLOR_RESET "\001\033[0m\002"

#endif