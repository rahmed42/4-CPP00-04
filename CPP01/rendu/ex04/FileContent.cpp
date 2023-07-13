/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FileContent.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rahmed <rahmed@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/31 17:54:50 by rahmed            #+#    #+#             */
/*   Updated: 2022/07/11 21:37:48 by rahmed           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <cstddef>
#include "FileContent.hpp"

FileContent::FileContent( void )
{
	std::cout << "\033[1;32mFileContent created\033[0m" << std::endl;
}

FileContent::~FileContent( void )
{
	std::cout << "\033[1;31mFileContent destroyed\033[0m" << std::endl;
}

std::string	FileContent::replaceFileContent(std::string const filename, std::string const strtochange, std::string const newstr)
{
	std::string		newFilename(filename + ".replace");
	std::string		line;
	std::ifstream	ifs(filename);
	std::ofstream	ofs(newFilename);
	std::size_t		found = std::string::npos;
	std::size_t		i(0);

	if (!ifs.is_open())
		return ("\033[1;31mError : File not found\033[0m");
	while (true)
	{
		std::getline(ifs, line);
		while (i < line.size())
		{
			found = line.find(strtochange, i);
			if (found == std::string::npos)
				while (line[i])
					ofs << line[i++];
			else
			{
				while (i < found)
					ofs << line[i++];
				ofs << newstr;
				i += strtochange.size();
			}
			found = std::string::npos;
		}
		if (ifs.eof())
			break ;
		ofs << std::endl;
		i = 0;
	}
	ifs.close();
	ofs.close();
	return (newFilename);
}
