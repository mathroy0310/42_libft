/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_file.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maroy <maroy@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/28 21:55:08 by maroy             #+#    #+#             */
/*   Updated: 2024/01/25 15:46:12 by maroy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_FILE_H
# define FT_FILE_H

# include "libft.h"
# include "ft_bool.h"
# include <fcntl.h>

/* ************************************************************************** */

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 32
# endif

# ifndef MAX_FD
#  define MAX_FD 1024
# endif

/* ************************************************************************** */

/**
 * @brief Structure représentant les informations d'un fichier.
 *
 * Cette structure contient des informations sur un fichier,
	telles que le descripteur de fichier,
 * le chemin du fichier, la ligne lue et la sauvegarde temporaire.
 @param c_fd Le descripteur de fichier.
 @param c_file_path Le chemin du fichier.
 @param readed_line La ligne lue.
 @param p_backup La sauvegarde temporaire.
 */
typedef struct s_file
{
	int			c_fd;
	char		*c_file_path;
	char		*readed_line;
	char		*p_backup;
}				t_file;
/* ************************************************************************** */

/**
 * @brief Statut de la lecture d'un fichier.
 */
typedef enum e_read_status
{
	read_success = 1,
	read_success_eof = 0,
	read_error = -1
}				t_read_status;

/* ************************************************************************** */
/* PATH : ./file/ft_open_file.c */

/**
 * @brief Ouvre un fichier et initialise une structure t_file.
 *
 * Cette fonction ouvre un fichier spécifié par le chemin donné
 * et initialise une structure t_file
 * avec des descripteurs de fichiers,
 * un chemin de fichier et des indicateurs de lecture/écriture.
 *
 * @param path Le chemin vers le fichier à ouvrir. Si NULL,
	le descripteur de fichier par défaut 0 est utilisé.
 * @param open_flag Les indicateurs utilisés pour ouvrir le fichier.
 * @return t_file* Un pointeur vers la structure t_file allouée.
 */
t_file			*ft_open_file(const char *path, int open_flag);
/* ************************************************************************** */
/* PATH : ./file/ft_close_file.c */

/**
 * @brief Ferme un fichier et libère la mémoire allouée à la structure t_file.
 *
 * @param file  La structure t_file représentant le fichier à fermer.
 * @return t_bool TRUE si le fichier a été fermé avec succès, FALSE sinon.
 */
t_bool			ft_close_file(t_file *file);
/* ************************************************************************** */
/* PATH : ./file/ft_count_file_lines.c */

/**
 * @brief Compte le nombre de lignes dans un fichier.
 *
 * @param path Le chemin vers le fichier à lire.
 * @return ssize_t Le nombre de lignes dans le fichier.
	-1 si une erreur s'est produite.
 */
ssize_t			ft_count_file_lines(char *path);
/* ************************************************************************** */
/* PATH : ./file/ft_create_file_content.c */

/**
 * @brief Crée un tableau de chaînes de caractères
 *  à partir du path d'un fichier.
 *
 * @param path Le chemin vers le fichier à lire.
 * @return char** Un tableau de chaînes de caractères
 *  contenant le contenu du fichier.
 */
char			**ft_create_file_content(char *path);
/* ************************************************************************** */
/* PATH : ./file/ft_get_file_content.c */

/**
 * @brief Remplit un tableau de chaînes
 *  de caractères avec le contenu d'un fichier.
 *
 * @param file_content Le tableau de chaînes de caractères à remplir.
 * @param file  La structure t_file représentant le fichier à lire.
 * @return char** Le tableau de chaînes de caractères rempli.
 */
char			**ft_get_file_content(char *path);
/* ************************************************************************** */
/* PATH : ./file/ft_fill_file_content.c */

/**
 * @brief Remplit le contenu d'un fichier dans
 * un tableau de chaînes de caractères.
 *
 *
 * @param file_content Le contenu du fichier sous forme de
 * tableau de chaînes de caractères.
 * @param file La structure t_file représentant le fichier à lire.
 * @return char** Un pointeur vers le tableau de chaînes de
 *  caractères contenant le contenu du fichier.
 */
char			**ft_fill_file_content(char **file_content, t_file *file);
/* ************************************************************************** */
/* PATH : ./file/ft_is_file_exist.c */

/**
 * @brief Vérifie si un fichier existe.
 *
 * @param file_path Le chemin vers le fichier à vérifier.
 * @return t_bool TRUE si le fichier existe, FALSE sinon.
 */
t_bool			ft_is_file_exists(char *file_path);
/* ************************************************************************** */
/* PATH : /file/ft_destroy_file_content.c */

/**
 * @brief Libère la mémoire allouée à un tableau de chaînes de caractères.
 *
 * @param file_content Le tableau de chaînes de caractères à libérer.
 * @return void* NULL.
 */
void			*ft_destroy_file_content(char ***file_content);
/* ************************************************************************** */
/* PATH : /file/ft_read_next_line.c */

/**
 * @brief Lit la prochaine ligne d'un fichier.
 *
 * @param file La structure t_file représentant le fichier à lire.
 * @return t_read_status Le statut de la lecture.
 */
t_read_status	ft_read_next_line(t_file *file);

#endif // FT_FILE_H
