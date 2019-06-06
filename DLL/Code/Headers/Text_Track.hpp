/**
 * @file Text_Track.hpp
 * @author Pablo Rodríguez Zurro (przuro@gmail.com)
 * @brief 
 * @version 0.1
 * @date 06-06-2019
 * 
 * @copyright Copyright (c) 2019
 * 
 */

#ifndef LOCALIZATION_TOOL_TEXT_TRACK_H_
#define LOCALIZATION_TOOL_TEXT_TRACK_H_

#include <Track.hpp>
#include <Text_Clip.hpp>

namespace prz
{

	class Text_Track : public Track<Text_Clip>
	{
	public:
	
		Text_Track();
		~Text_Track();

	private:

	};

} // !namespace prz

#endif // !LOCALIZATION_TOOL_TEXT_TRACK_H_