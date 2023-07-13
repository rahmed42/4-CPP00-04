/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FileContent.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rahmed <rahmed@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/31 17:55:22 by rahmed            #+#    #+#             */
/*   Updated: 2022/07/11 21:37:24 by rahmed           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FILECONTENT_CLASS_HPP
# define FILECONTENT_CLASS_HPP

# include <iostream>
# include <fstream>
# include <cstring>

class FileContent
{
	public:
		FileContent( void );
		~FileContent( void );
		std::string		replaceFileContent(std::string const filename, \
						std::string const strtochange, std::string const newstr);
};

#endif