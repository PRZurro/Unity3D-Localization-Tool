
#ifndef LOCALIZATION_TOOL_INTERNAL_UTILITIES_NLOHMANN_JSON_CONVERTER_H_
#define LOCALIZATION_TOOL_INTERNAL_UTILITIES_NLOHMANN_JSON_CONVERTER_H_

#include <Declarations.hpp>

namespace prz
{

	static json load_json_file(const string& filePath)
	{
		std::ifstream i(filePath);
		json j;

		if (i.good())
		{
			i >> j;
		}

		return j;
	}

}

#endif // !LOCALIZATION_TOOL_INTERNAL_UTILITIES_NLOHMANN_JSON_CONVERTER_H_