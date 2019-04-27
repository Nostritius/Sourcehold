#pragma once

#include <fstream>
#include <vector>

#include <Config.h>
#include <System/Logger.h>
#include <Parsers/Parser.h>

#include <boost/filesystem.hpp>

namespace Sourcehold
{
    namespace Parsers
    {
        /*
         * The file containing all the text strings
         */
        class MlbFile : public Parser
        {
            /* Encoded in UTF-16LE */
            std::vector<std::string> field;
            uint32_t num = 0;
        public:
            MlbFile();
            ~MlbFile();

            bool LoadFromDisk(boost::filesystem::path path);
            void Clear();
        protected:
            struct SectionHeader;
        };
    }
}
